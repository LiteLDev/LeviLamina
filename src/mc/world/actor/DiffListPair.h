#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DiffListPair {
public:
    // prevent constructor by default
    DiffListPair& operator=(DiffListPair const&);
    DiffListPair(DiffListPair const&);
    DiffListPair();
};
