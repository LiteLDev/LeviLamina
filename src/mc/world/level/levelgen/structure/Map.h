#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

struct Map {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DATASTRUCTURES_MAP
public:
    Map& operator=(Map const&) = delete;
    Map(Map const&)            = delete;
    Map()                      = delete;
#endif

public:
};

}; // namespace DataStructures
