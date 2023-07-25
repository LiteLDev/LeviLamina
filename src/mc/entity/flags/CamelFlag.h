#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CamelFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMELFLAG
public:
    CamelFlag& operator=(CamelFlag const&) = delete;
    CamelFlag(CamelFlag const&)            = delete;
    CamelFlag()                            = delete;
#endif

public:
};
