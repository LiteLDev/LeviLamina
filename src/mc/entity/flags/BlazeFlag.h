#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlazeFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLAZEFLAG
public:
    BlazeFlag& operator=(BlazeFlag const&) = delete;
    BlazeFlag(BlazeFlag const&)            = delete;
    BlazeFlag()                            = delete;
#endif

public:
};
