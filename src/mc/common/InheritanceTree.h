#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct InheritanceTree {

public:
    // prevent constructor by default
    InheritanceTree& operator=(InheritanceTree const&) = delete;
    InheritanceTree(InheritanceTree const&)            = delete;
    InheritanceTree()                                  = delete;
};
