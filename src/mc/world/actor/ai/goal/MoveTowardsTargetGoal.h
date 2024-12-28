#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class MoveTowardsTargetGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk2f116d;
    ::ll::UntypedStorage<8, 8>  mUnkc5097d;
    ::ll::UntypedStorage<4, 4>  mUnkcb0421;
    ::ll::UntypedStorage<4, 4>  mUnka3f440;
    ::ll::UntypedStorage<4, 12> mUnkba54ba;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveTowardsTargetGoal& operator=(MoveTowardsTargetGoal const&);
    MoveTowardsTargetGoal(MoveTowardsTargetGoal const&);
    MoveTowardsTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~MoveTowardsTargetGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MoveTowardsTargetGoal(::Mob& pathMob, float speedModifier, float within);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& pathMob, float speedModifier, float within);
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

    MCAPI void $stop();

    MCAPI void $start();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
