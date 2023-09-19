#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

struct Map {
public:
    // prevent constructor by default
    Map& operator=(Map const&);
    Map(Map const&);
    Map();
};

}; // namespace DataStructures
