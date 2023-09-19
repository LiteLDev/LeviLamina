#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CanStandOnSnowFlag {
public:
    // prevent constructor by default
    CanStandOnSnowFlag& operator=(CanStandOnSnowFlag const&);
    CanStandOnSnowFlag(CanStandOnSnowFlag const&);
    CanStandOnSnowFlag();
};
