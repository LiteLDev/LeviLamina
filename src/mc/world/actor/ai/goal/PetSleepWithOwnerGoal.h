#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
class PetSleepWithOwnerState;
class Vec3;
struct PetSleepWithOwnerGoalData;
// clang-format on

class PetSleepWithOwnerGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::PetSleepWithOwnerGoalData>                mData;
    ::ll::TypedStorage<8, 8, ::Mob&>                                      mMob;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PetSleepWithOwnerState>> mState;
    ::ll::TypedStorage<4, 12, ::Vec3>                                     mBedTargetPos;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Mob>>                          mOwner;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PetSleepWithOwnerGoal() /*override*/ = default;

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
