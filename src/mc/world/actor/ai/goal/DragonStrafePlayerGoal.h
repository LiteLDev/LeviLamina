#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/DragonBaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
// clang-format on

class DragonStrafePlayerGoal : public ::DragonBaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd50c8e;
    ::ll::UntypedStorage<8, 8>  mUnkc70361;
    ::ll::UntypedStorage<1, 1>  mUnkb07a61;
    ::ll::UntypedStorage<1, 1>  mUnk52836d;
    ::ll::UntypedStorage<4, 4>  mUnk119092;
    ::ll::UntypedStorage<4, 4>  mUnk4fc9e2;
    ::ll::UntypedStorage<4, 4>  mUnka7714b;
    ::ll::UntypedStorage<4, 4>  mUnk926532;
    ::ll::UntypedStorage<4, 4>  mUnk139a05;
    ::ll::UntypedStorage<4, 4>  mUnk7910ab;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonStrafePlayerGoal& operator=(DragonStrafePlayerGoal const&);
    DragonStrafePlayerGoal(DragonStrafePlayerGoal const&);
    DragonStrafePlayerGoal();

public:
    // virtual functions
    // NOLINTBEGIN
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

    // vIndex: 0
    virtual ~DragonStrafePlayerGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DragonStrafePlayerGoal(::Mob& mob);

    MCAPI void findNewTarget();

    MCAPI void navigateToNextPathNode();

    MCAPI void setTarget(::Actor* target);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
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
