#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShulkerFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKERFLAG
public:
    ShulkerFlag& operator=(ShulkerFlag const&) = delete;
    ShulkerFlag(ShulkerFlag const&)            = delete;
    ShulkerFlag()                              = delete;
#endif

public:
};
