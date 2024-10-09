#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
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
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Definition() = default;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    TimerActorFlag3Goal& operator=(TimerActorFlag3Goal const&);
    TimerActorFlag3Goal(TimerActorFlag3Goal const&);
    TimerActorFlag3Goal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TimerActorFlag3Goal() = default;

    // NOLINTEND
};
