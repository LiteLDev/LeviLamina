#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WitherBossFlag {

public:
    // prevent constructor by default
    WitherBossFlag& operator=(WitherBossFlag const&) = delete;
    WitherBossFlag(WitherBossFlag const&)            = delete;
    WitherBossFlag()                                 = delete;
};
