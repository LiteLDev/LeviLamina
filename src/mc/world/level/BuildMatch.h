#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BuildMatch {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUILDMATCH
public:
    BuildMatch& operator=(BuildMatch const&) = delete;
    BuildMatch(BuildMatch const&)            = delete;
    BuildMatch()                             = delete;
#endif

public:
};
