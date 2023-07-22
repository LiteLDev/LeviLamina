#pragma once

#include <vector>
#include <string>
#include <sstream>

namespace TCHelper {

inline std::string uto_string(uintptr_t x) {
    std::stringstream ss;
    ss << std::hex << x;
    return ss.str();
}

inline uintptr_t string_tohex(const std::string& str) {
    std::stringstream ss;
    ss << std::hex << str;
    uintptr_t res;
    ss >> res;
    return res;
}


inline std::vector<uint8_t> splitHex8(const std::string& str) {
    std::vector<uint8_t> res;
    std::stringstream    ss(str);
    std::string          item;
    while (getline(ss, item, ' ')) {
        if (item == "?") {
            res.push_back(0xff);
        } else {
            res.push_back(stoul(item, nullptr, 16));
        }
    }
    return res;
}

inline std::string uto_string(uint8_t x) {
    std::stringstream ss;
    ss << std::hex << x;
    return ss.str();
}


inline std::vector<uint16_t> splitHex(const std::string& str) {
    std::vector<uint16_t> res;
    std::stringstream     ss(str);
    std::string           item;
    while (getline(ss, item, ' ')) {
        if (item == "?") {
            res.push_back(0xffff);
        } else {
            res.push_back(stoul(item, nullptr, 16));
        }
    }
    return res;
}
} // namespace TCHelper
