#include <iostream>
#include <fstream>
#include <sys/utsname.h>
#include <unistd.h>
#include <iomanip>

#include <fetchInfo.h>

using namespace FetchInfo;


int main() {
    std::cout << showKernel() << std::endl;
    return 0;
}