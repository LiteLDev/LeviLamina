#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BuildMatch {
public:
    // prevent constructor by default
    BuildMatch& operator=(BuildMatch const&);
    BuildMatch(BuildMatch const&);
    BuildMatch();
};
