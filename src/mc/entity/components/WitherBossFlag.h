#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WitherBossFlag {
public:
    // prevent constructor by default
    WitherBossFlag& operator=(WitherBossFlag const&);
    WitherBossFlag(WitherBossFlag const&);
    WitherBossFlag();
};
