#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class TimerActorFlagBaseGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk115ee0;
    ::ll::UntypedStorage<4, 4>   mUnke10d98;
    ::ll::UntypedStorage<8, 272> mUnkde5dd3;
    ::ll::UntypedStorage<4, 8>   mUnkd8573b;
    ::ll::UntypedStorage<4, 8>   mUnk9afee4;
    ::ll::UntypedStorage<8, 8>   mUnkd1a7f4;
    ::ll::UntypedStorage<8, 8>   mUnka19c63;
    // NOLINTEND

public:
    // prevent constructor by default
    TimerActorFlagBaseGoal& operator=(TimerActorFlagBaseGoal const&);
    TimerActorFlagBaseGoal(TimerActorFlagBaseGoal const&);
    TimerActorFlagBaseGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~TimerActorFlagBaseGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TimerActorFlagBaseGoal(::Mob& mob, ::ActorFlags actorFlag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob, ::ActorFlags actorFlag);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $start();

    MCAPI bool $canContinueToUse();

    MCAPI void $tick();

    MCAPI void $stop();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
