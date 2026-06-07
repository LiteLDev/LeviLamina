#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/TimerActorFlagBaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class TimerActorFlag2Goal : public ::TimerActorFlagBaseGoal {
public:
    // prevent constructor by default
    TimerActorFlag2Goal();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TimerActorFlag2Goal(::Mob& mob);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
