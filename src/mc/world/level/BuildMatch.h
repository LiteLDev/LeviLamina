#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BuildMatch {

public:
    // prevent constructor by default
    BuildMatch& operator=(BuildMatch const&) = delete;
    BuildMatch(BuildMatch const&)            = delete;
    BuildMatch()                             = delete;
};
