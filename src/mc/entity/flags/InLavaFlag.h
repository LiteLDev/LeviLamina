#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InLavaFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INLAVAFLAG
public:
    InLavaFlag& operator=(InLavaFlag const&) = delete;
    InLavaFlag(InLavaFlag const&)            = delete;
    InLavaFlag()                             = delete;
#endif

public:
};
