#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/RandomLookAroundGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class RandomLookAroundAndSitGoal : public ::RandomLookAroundGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk5efd10;
    ::ll::UntypedStorage<1, 1> mUnkaea323;
    ::ll::UntypedStorage<4, 4> mUnka4f73a;
    ::ll::UntypedStorage<4, 4> mUnk6bf9b1;
    ::ll::UntypedStorage<4, 4> mUnk87f81d;
    ::ll::UntypedStorage<4, 4> mUnka8beb9;
    ::ll::UntypedStorage<8, 8> mUnke1a79e;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomLookAroundAndSitGoal& operator=(RandomLookAroundAndSitGoal const&);
    RandomLookAroundAndSitGoal(RandomLookAroundAndSitGoal const&);
    RandomLookAroundAndSitGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~RandomLookAroundAndSitGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RandomLookAroundAndSitGoal(
        ::Mob& mob,
        bool   continueSittingOnReload,
        bool   continueIfLeashed,
        int    minLookCount,
        int    maxLookCount,
        float  minAngleOfView,
        float  maxAngleOfView,
        int    minLookTime,
        int    maxLookTime,
        float  probability,
        int    randomLookAroundCooldown
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob& mob,
        bool   continueSittingOnReload,
        bool   continueIfLeashed,
        int    minLookCount,
        int    maxLookCount,
        float  minAngleOfView,
        float  maxAngleOfView,
        int    minLookTime,
        int    maxLookTime,
        float  probability,
        int    randomLookAroundCooldown
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

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI bool $canContinueToUse();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
