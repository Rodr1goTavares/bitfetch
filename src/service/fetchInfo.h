#include <iostream>
#include <fstream>
#include <sys/utsname.h>
#include <unistd.h>
#include <iomanip>


namespace FetchInfo {

    std::string showOS() {
        return "";
    }

    std::string showKernel() {
        std::string kernelInfo = "Kernel: ";
        struct utsname buffer;
        if (uname(&buffer) != 0) {
            return "Error to get Kernel info :(";
        }
        kernelInfo += buffer.sysname;
        return kernelInfo;
    }

    std::string showUptime() {
        return "";
    }
    
}