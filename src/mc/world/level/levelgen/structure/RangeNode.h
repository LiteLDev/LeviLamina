#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

template <typename T0>
struct RangeNode {

public:
    // prevent constructor by default
    RangeNode& operator=(RangeNode const&) = delete;
    RangeNode(RangeNode const&)            = delete;
    RangeNode()                            = delete;
};

}; // namespace DataStructures
