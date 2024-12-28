#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class MountPathingGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk2e21c7;
    ::ll::UntypedStorage<4, 4>  mUnk74a3f2;
    ::ll::UntypedStorage<4, 4>  mUnk67c4b1;
    ::ll::UntypedStorage<1, 1>  mUnk25ebfe;
    ::ll::UntypedStorage<4, 4>  mUnkf48e44;
    ::ll::UntypedStorage<8, 8>  mUnk3d27e9;
    // NOLINTEND

public:
    // prevent constructor by default
    MountPathingGoal& operator=(MountPathingGoal const&);
    MountPathingGoal(MountPathingGoal const&);
    MountPathingGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 10
    virtual float _getAttackReachSqr();

    // vIndex: 0
    virtual ~MountPathingGoal() /*override*/;

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
    MCAPI MountPathingGoal(::Mob& mob, float speed, float targetDist, bool trackTarget);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob, float speed, float targetDist, bool trackTarget);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $_getAttackReachSqr();

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
