#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
// clang-format on

class LookAtActorGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk559830;
    ::ll::UntypedStorage<4, 4>  mUnk8aab81;
    ::ll::UntypedStorage<4, 4>  mUnk452de3;
    ::ll::UntypedStorage<4, 4>  mUnk744271;
    ::ll::UntypedStorage<4, 4>  mUnkcb7126;
    ::ll::UntypedStorage<4, 4>  mUnk387567;
    ::ll::UntypedStorage<4, 4>  mUnk16f478;
    ::ll::UntypedStorage<4, 4>  mUnk59dbb2;
    ::ll::UntypedStorage<8, 64> mUnkc5b823;
    ::ll::UntypedStorage<8, 8>  mUnk1982b6;
    // NOLINTEND

public:
    // prevent constructor by default
    LookAtActorGoal& operator=(LookAtActorGoal const&);
    LookAtActorGoal(LookAtActorGoal const&);
    LookAtActorGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LookAtActorGoal() /*override*/ = default;

    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LookAtActorGoal(
        ::Mob& mob,
        float  lookDistance,
        float  probability,
        int    minLookTime,
        int    maxLookTime,
        int    angleOfViewX,
        int    angleOfViewY
    );

    MCAPI bool _withinFieldOfView(::Actor& entity);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob& mob,
        float  lookDistance,
        float  probability,
        int    minLookTime,
        int    maxLookTime,
        int    angleOfViewX,
        int    angleOfViewY
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
