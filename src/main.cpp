#include <iostream>
#include <fstream>
#include <sys/utsname.h>
#include <unistd.h>
#include <iomanip>
#include <unordered_map>
#include <cstdint>


std::string getDistroInfo();
std::string getKernelInfo();
std::string getShellInfo();
std::string getUptimeInfo();
std::string getMemoryInfo();
std::unordered_map<std::string, std::string> getFetchData();
void showDevFetch(std::unordered_map<std::string, std::string> fetchData);


int main() {
	std::unordered_map<std::string, std::string> fetchData = getFetchData();
	showDevFetch(fetchData);
	return EXIT_SUCCESS;
}

std::unordered_map<std::string, std::string> getFetchData() {
	std::unordered_map<std::string, std::string> data;
	data["distro"] = getDistroInfo();
	data["kernel"] = getKernelInfo();
	data["shell"] = getShellInfo();
	data["uptime"] = getUptimeInfo();
	data["memory"] = getMemoryInfo();
	return data;
}

std::string getDistroInfo() {
	std::ifstream file("/etc/os-release");
	std::string line;
	std::string distroName = "Unknown";
	if (!file.is_open()) return distroName;
	while (std::getline(file, line)) {
		if (line.find("NAME=") == 0) {
			distroName = line.substr(5);
			if (distroName[0] == '"' || distroName[0] == '\'')
				distroName = distroName.substr(1, distroName.size() - 2);
			break;
		}
	}
	file.close();
	return distroName;
}

std::string getKernelInfo() {
	std::string kernelInfo;
	struct utsname buffer;
	if (uname(&buffer) != 0) return "Error to get Kernel info :(";
	kernelInfo += buffer.sysname;
	return kernelInfo;
}

std::string getShellInfo() {
	const char *shell = getenv("SHELL");
	if (shell == nullptr) return "Unknown";
	return std::string(shell);
}

std::string getUptimeInfo() {
	std::ifstream file("/proc/uptime");
    double uptime = 0.0;
    if (!file.is_open()) return "Failed to open /proc/uptime";
    file >> uptime;
    file.close();
	int totalSeconds = static_cast<int>(uptime);
	int hours = static_cast<int>(totalSeconds / 3600);
	int minutes = static_cast<int>((totalSeconds % 3600) / 60);
    std::ostringstream result;
	result << hours << " hours and " << minutes << " minutes";
    return result.str();
}

std::string getMemoryInfo() {
	constexpr const char* meminfo_file = "/proc/meminfo";
    constexpr double factor = 1024.0 * 1024.0;

    std::ifstream ifs{meminfo_file};
    if (!ifs) return "Error: unable to read memory-info file.\n";

    std::string line;
    std::uint64_t totalMemory = 0, memAvailable = 0, value;

    while (std::getline(ifs, line)) {
        std::stringstream ss{line};
        std::string label;
        ss >> label >> value;
        if (label == "MemTotal:") totalMemory = value;
        if (label == "MemAvailable:") memAvailable = value;
        if (totalMemory && memAvailable) break;
    }
    if (totalMemory == 0 || memAvailable == 0) return "Error: could not retrieve memory information.\n";

    auto memUsed = totalMemory - memAvailable;
    std::ostringstream oss;
    oss.precision(2);
    oss << std::fixed;
    oss << "(Total: " << (totalMemory / factor) << " Gb | ";
    //oss << "Available: " << (memAvailable / factor) << " Gb\n";
    oss << "In use: " << (memUsed / factor) << " Gb)\n";
    return oss.str();
}

void showDevFetch(std::unordered_map<std::string, std::string> fetchData) {
	std::cout << "-----------------------------------\n" << std::endl;
	std::cout << "Distro: " << fetchData["distro"] << "\n" << std::endl;
	std::cout << "Kernel: " << fetchData["kernel"] << "\n" << std::endl;
	std::cout << "Shell: " << fetchData["shell"] << "\n" << std::endl;
	std::cout << "Uptime: " << fetchData["uptime"] << "\n" << std::endl;
	std::cout << "Memory: " << fetchData["memory"] << "\n" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
}