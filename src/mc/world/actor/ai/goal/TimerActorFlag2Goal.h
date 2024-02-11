#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
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
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1Definition@TimerActorFlag2Goal@@UEAA@XZ
        virtual ~Definition() = default;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    TimerActorFlag2Goal& operator=(TimerActorFlag2Goal const&);
    TimerActorFlag2Goal(TimerActorFlag2Goal const&);
    TimerActorFlag2Goal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TimerActorFlag2Goal@@UEAA@XZ
    virtual ~TimerActorFlag2Goal() = default;

    // NOLINTEND
};
