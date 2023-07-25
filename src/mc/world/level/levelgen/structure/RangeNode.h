#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

template <typename T0>
struct RangeNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DATASTRUCTURES_RANGENODE
public:
    RangeNode& operator=(RangeNode const&) = delete;
    RangeNode(RangeNode const&)            = delete;
    RangeNode()                            = delete;
#endif

public:
};

}; // namespace DataStructures
