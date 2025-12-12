#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/TimerActorFlagBaseDefinition.h"
#include "mc/world/actor/ai/goal/TimerActorFlagBaseGoal.h"

class TimerActorFlag2Goal : public ::TimerActorFlagBaseGoal {
public:
    // TimerActorFlag2Goal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // TimerActorFlag2Goal inner types define
    class Definition : public ::TimerActorFlagBaseDefinition {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Definition() /*override*/ = default;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TimerActorFlag2Goal() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
