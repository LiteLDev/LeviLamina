#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

struct Map {

public:
    // prevent constructor by default
    Map& operator=(Map const&) = delete;
    Map(Map const&)            = delete;
    Map()                      = delete;
};

}; // namespace DataStructures
