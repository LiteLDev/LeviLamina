#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/DoorInteractGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class BreakDoorGoal : public ::DoorInteractGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>       mBreakTime;
    ::ll::TypedStorage<4, 4, int const> mBreakDoorTime;
    ::ll::TypedStorage<4, 4, int>       mLastBreakProgress;
    ::ll::TypedStorage<8, 8, ::Mob&>    mMob;
    // NOLINTEND

public:
    // prevent constructor by default
    BreakDoorGoal& operator=(BreakDoorGoal const&);
    BreakDoorGoal(BreakDoorGoal const&);
    BreakDoorGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~BreakDoorGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI bool $canContinueToUse();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
