#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MonsterFlag {
public:
    // prevent constructor by default
    MonsterFlag& operator=(MonsterFlag const&);
    MonsterFlag(MonsterFlag const&);
    MonsterFlag();
};
