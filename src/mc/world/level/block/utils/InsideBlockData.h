#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InsideBlockData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEBLOCKDATA
public:
    InsideBlockData& operator=(InsideBlockData const&) = delete;
    InsideBlockData(InsideBlockData const&)            = delete;
    InsideBlockData()                                  = delete;
#endif

public:
};
