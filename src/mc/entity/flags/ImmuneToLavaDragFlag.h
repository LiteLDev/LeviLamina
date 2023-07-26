#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ImmuneToLavaDragFlag {

public:
    // prevent constructor by default
    ImmuneToLavaDragFlag& operator=(ImmuneToLavaDragFlag const&) = delete;
    ImmuneToLavaDragFlag(ImmuneToLavaDragFlag const&)            = delete;
    ImmuneToLavaDragFlag()                                       = delete;
};
