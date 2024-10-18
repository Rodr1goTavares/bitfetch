#include <iostream>
#include <fstream>
#include <sys/utsname.h>
#include <unistd.h>
#include <iomanip>
#include <unordered_map>
#include <cstdint>
#include <sstream>
#include "include/fetch_info.hpp"
#include "include/bitfetch_design.hpp"


int main() {
	std::unordered_map<std::string, std::string> fetchData = bitfetchInfo::getFetchData();
	bitfetchDesign::showDevFetch(fetchData);
	return EXIT_SUCCESS;
}