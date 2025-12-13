#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class FindCoverGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>  mMob;
    ::ll::TypedStorage<4, 4, float>   mSpeed;
    ::ll::TypedStorage<4, 4, int>     mCooldownTicks;
    ::ll::TypedStorage<8, 8, ::Tick>  mCooldownTimer;
    ::ll::TypedStorage<4, 12, ::Vec3> mWantedPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    FindCoverGoal& operator=(FindCoverGoal const&);
    FindCoverGoal(FindCoverGoal const&);
    FindCoverGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~FindCoverGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool getHidePos(::Vec3& result) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
