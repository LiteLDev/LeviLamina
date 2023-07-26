#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DiffListPair {

public:
    // prevent constructor by default
    DiffListPair& operator=(DiffListPair const&) = delete;
    DiffListPair(DiffListPair const&)            = delete;
    DiffListPair()                               = delete;
};
