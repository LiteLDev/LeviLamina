#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
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
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1Definition@TimerActorFlag1Goal@@UEAA@XZ
        virtual ~Definition() = default;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    TimerActorFlag1Goal& operator=(TimerActorFlag1Goal const&);
    TimerActorFlag1Goal(TimerActorFlag1Goal const&);
    TimerActorFlag1Goal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TimerActorFlag1Goal@@UEAA@XZ
    virtual ~TimerActorFlag1Goal() = default;

    // NOLINTEND
};
