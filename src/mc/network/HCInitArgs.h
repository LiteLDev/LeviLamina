#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HCInitArgs {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HCINITARGS
public:
    HCInitArgs& operator=(HCInitArgs const&) = delete;
    HCInitArgs(HCInitArgs const&)            = delete;
    HCInitArgs()                             = delete;
#endif

public:
};
