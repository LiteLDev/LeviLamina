#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HorseFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HORSEFLAG
public:
    HorseFlag& operator=(HorseFlag const&) = delete;
    HorseFlag(HorseFlag const&)            = delete;
    HorseFlag()                            = delete;
#endif

public:
};
