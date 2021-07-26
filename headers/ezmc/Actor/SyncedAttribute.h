#pragma once

#include <string>

class SyncedAttribute {
public:
    std::string name;
    float       min, current, max;
};