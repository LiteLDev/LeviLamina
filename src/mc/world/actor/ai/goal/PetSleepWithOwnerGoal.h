#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
class PetSleepWithOwnerState;
// clang-format on

class PetSleepWithOwnerGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                       mSpeedModifier;
    ::ll::TypedStorage<4, 4, int>                                         mSearchRange;
    ::ll::TypedStorage<4, 4, int>                                         mSearchHeight;
    ::ll::TypedStorage<4, 4, float>                                       mGoalRadius;
    ::ll::TypedStorage<8, 8, ::Mob&>                                      mMob;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PetSleepWithOwnerState>> mState;
    ::ll::TypedStorage<4, 12, ::Vec3>                                     mBedTargetPos;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Mob>>                          mOwner;
    // NOLINTEND

public:
    // prevent constructor by default
    PetSleepWithOwnerGoal& operator=(PetSleepWithOwnerGoal const&);
    PetSleepWithOwnerGoal(PetSleepWithOwnerGoal const&);
    PetSleepWithOwnerGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PetSleepWithOwnerGoal() /*override*/ = default;

    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PetSleepWithOwnerGoal(::Mob& mob);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
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
