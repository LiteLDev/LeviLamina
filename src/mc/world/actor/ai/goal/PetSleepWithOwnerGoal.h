#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/actor/ai/goal/PetSleepWithOwnerGoalData.h"

// auto generated forward declare list
// clang-format off
class Mob;
class PetSleepWithOwnerState;
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
