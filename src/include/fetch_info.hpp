#include <unordered_map>
#include <string>
#ifndef FETCH_SYSTEM_INFO_HPP
#define FETCH_SYSTEM_INFO_HPP

namespace bitfetchInfo {
    std::unordered_map<std::string, std::string> getFetchData();
}

#endif