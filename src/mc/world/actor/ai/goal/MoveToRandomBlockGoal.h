#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class MoveToRandomBlockGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk933e6c;
    ::ll::UntypedStorage<4, 12> mUnk9407c8;
    ::ll::UntypedStorage<4, 12> mUnkcdfc04;
    ::ll::UntypedStorage<4, 4>  mUnk642871;
    ::ll::UntypedStorage<4, 4>  mUnk3f5b5f;
    ::ll::UntypedStorage<4, 4>  mUnk136c6e;
    ::ll::UntypedStorage<4, 4>  mUnkb92283;
    ::ll::UntypedStorage<4, 4>  mUnk292bc3;
    ::ll::UntypedStorage<4, 4>  mUnk3939b6;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveToRandomBlockGoal& operator=(MoveToRandomBlockGoal const&);
    MoveToRandomBlockGoal(MoveToRandomBlockGoal const&);
    MoveToRandomBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 0
    virtual ~MoveToRandomBlockGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MoveToRandomBlockGoal(::Mob& mob, float speedModifier, float within, float blockDistance);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob, float speedModifier, float within, float blockDistance);
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

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI void $stop();

    MCAPI void $start();

    MCAPI void $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
