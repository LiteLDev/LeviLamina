#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct InheritanceTree {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INHERITANCETREE
public:
    InheritanceTree& operator=(InheritanceTree const&) = delete;
    InheritanceTree(InheritanceTree const&)            = delete;
    InheritanceTree()                                  = delete;
#endif

public:
};
