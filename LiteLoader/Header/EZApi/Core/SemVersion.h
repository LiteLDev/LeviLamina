#pragma once

#include <string>

class SemVersion {
    unsigned short major{}, minor{}, patch{}; // 0, 2, 4
    std::string    s8, s40, s72;              // 8, 40, 72
    bool           b104{}, valid{}, b106{};   // 104, 105, 106
};