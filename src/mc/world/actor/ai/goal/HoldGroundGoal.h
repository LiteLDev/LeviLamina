#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
// clang-format on

class HoldGroundGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                           mMob;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>>             mLookAt;
    ::ll::TypedStorage<4, 4, float>                            mHostileRadiusSqr;
    ::ll::TypedStorage<1, 1, bool>                             mBroadcast;
    ::ll::TypedStorage<4, 4, float>                            mBroadcastRange;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger const> mWithinRangeEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    HoldGroundGoal& operator=(HoldGroundGoal const&);
    HoldGroundGoal(HoldGroundGoal const&);
    HoldGroundGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HoldGroundGoal() /*override*/;

    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
