#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScanForDolphin {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCANFORDOLPHIN
public:
    ScanForDolphin& operator=(ScanForDolphin const&) = delete;
    ScanForDolphin(ScanForDolphin const&)            = delete;
    ScanForDolphin()                                 = delete;
#endif

public:
};
