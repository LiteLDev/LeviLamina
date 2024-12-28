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
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Definition() /*override*/;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    TimerActorFlag1Goal& operator=(TimerActorFlag1Goal const&);
    TimerActorFlag1Goal(TimerActorFlag1Goal const&);
    TimerActorFlag1Goal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TimerActorFlag1Goal() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
