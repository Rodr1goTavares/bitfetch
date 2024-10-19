#include <iostream>
#include <unordered_map>
#include <string>

#include "include/bitfetch_design.hpp"

namespace bitfetchDesign {

	void showFetch(std::unordered_map<std::string, std::string> &fetchData) {
		std::cout << "╔═════════════════════════════════════════════════════╗" << std::endl;
		std::cout << "    Distro:   " << fetchData["distro"] << std::endl;
		std::cout << "    Kernel:   " << fetchData["kernel"] << std::endl;
		std::cout << "    Shell:    " << fetchData["shell"] << std::endl;
		std::cout << "    Uptime:   " << fetchData["uptime"] << std::endl;
		std::cout << "    Memory:   " << fetchData["memory"] << std::endl;
		std::cout << "╚═════════════════════════════════════════════════════╝" << std::endl;
	}

	void showDevFetch(std::unordered_map<std::string, std::string> &fetchData) {
		std::cout << "╔═════════════════════════════════════════════════════╗" << std::endl;
		std::cout << "    Distro:   " << fetchData["distro"] << std::endl;
		std::cout << "    Kernel:   " << fetchData["kernel"] << std::endl;
		std::cout << "    Shell:    " << fetchData["shell"] << std::endl;
		std::cout << "    Uptime:   " << fetchData["uptime"] << std::endl;
		std::cout << "    Memory:   " << fetchData["memory"] << std::endl;
		std::cout << "╚═════════════════════════════════════════════════════╝" << std::endl;
	}
}