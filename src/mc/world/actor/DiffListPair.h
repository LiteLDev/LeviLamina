#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DiffListPair {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIFFLISTPAIR
public:
    DiffListPair& operator=(DiffListPair const&) = delete;
    DiffListPair(DiffListPair const&)            = delete;
    DiffListPair()                               = delete;
#endif

public:
};
