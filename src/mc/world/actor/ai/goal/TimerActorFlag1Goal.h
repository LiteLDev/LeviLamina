#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/TimerActorFlagBaseDefinition.h"
#include "mc/world/actor/ai/goal/TimerActorFlagBaseGoal.h"

class TimerActorFlag1Goal : public ::TimerActorFlagBaseGoal {
public:
    // TimerActorFlag1Goal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // TimerActorFlag1Goal inner types define
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
    virtual ~TimerActorFlag1Goal() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
