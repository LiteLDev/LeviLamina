#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/TimerActorFlagBaseDefinition.h"
#include "mc/world/actor/ai/goal/TimerActorFlagBaseGoal.h"

class TimerActorFlag3Goal : public ::TimerActorFlagBaseGoal {
public:
    // TimerActorFlag3Goal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // TimerActorFlag3Goal inner types define
    class Definition : public ::TimerActorFlagBaseDefinition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Definition() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    TimerActorFlag3Goal& operator=(TimerActorFlag3Goal const&);
    TimerActorFlag3Goal(TimerActorFlag3Goal const&);
    TimerActorFlag3Goal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TimerActorFlag3Goal() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
