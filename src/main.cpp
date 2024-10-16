#include <iostream>
#include <fstream>
#include <sys/utsname.h>
#include <unistd.h>
#include <iomanip>
#include <unordered_map>

std::string getOSInfo() {
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
	std::string kernelInfo = "Kernel: ";
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
	return "Unknown";
}

std::unordered_map<std::string, std::string> previewFetch() {
	std::unordered_map<std::string, std::string> preview;
	preview["os"] = getOSInfo();
	preview["kernel"] = getKernelInfo();
	preview["shell"] = getShellInfo();
	preview["uptime"] = getUptimeInfo();
	return preview;
}

int main() {
	std::cout << "-----------------------------------\n" << std::endl;
	std::cout << "OS: " << previewFetch()["os"] << "\n" << std::endl;
	std::cout << "Kernel: " << previewFetch()["kernel"] << "\n" << std::endl;
	std::cout << "Shell: " << previewFetch()["shell"] << "\n" << std::endl;
	std::cout << "Uptime: " << previewFetch()["uptime"] << "\n" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	return 0;
}