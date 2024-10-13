#include <iostream>
#include <fstream>
#include <sys/utsname.h>
#include <unistd.h>
#include <iomanip>
#include <unordered_map>

#include <fetchSystemInfo.cpp>

using namespace FetchInfo;


void previewFetch() {
    std::unordered_map<std::string, std::string> preview;
    preview["OS"] = getOSInfo();
    preview["Kernel"] = getKernelInfo();
    preview["Shell"] = getShellInfo();
    preview["Uptime"] = getUptimeInfo();
}

int main() {
    previewFetch();
    return 0;
}