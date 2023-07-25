#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MineshaftData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINESHAFTDATA
public:
    MineshaftData& operator=(MineshaftData const&) = delete;
    MineshaftData(MineshaftData const&)            = delete;
    MineshaftData()                                = delete;
#endif

public:
};
