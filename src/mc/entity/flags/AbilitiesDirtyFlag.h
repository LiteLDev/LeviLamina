#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AbilitiesDirtyFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABILITIESDIRTYFLAG
public:
    AbilitiesDirtyFlag& operator=(AbilitiesDirtyFlag const&) = delete;
    AbilitiesDirtyFlag(AbilitiesDirtyFlag const&)            = delete;
    AbilitiesDirtyFlag()                                     = delete;
#endif

public:
};
