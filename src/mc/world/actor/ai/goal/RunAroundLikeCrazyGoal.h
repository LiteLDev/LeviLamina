#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class RunAroundLikeCrazyGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk328185;
    ::ll::UntypedStorage<4, 4>  mUnk6e6c9b;
    ::ll::UntypedStorage<4, 12> mUnk9ab483;
    // NOLINTEND

public:
    // prevent constructor by default
    RunAroundLikeCrazyGoal& operator=(RunAroundLikeCrazyGoal const&);
    RunAroundLikeCrazyGoal(RunAroundLikeCrazyGoal const&);
    RunAroundLikeCrazyGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& debugInfo) const /*override*/;

    // vIndex: 0
    virtual ~RunAroundLikeCrazyGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RunAroundLikeCrazyGoal(::Mob& mob, float speedModifier);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob, float speedModifier);
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

    MCAPI void $start();

    MCAPI bool $canContinueToUse();

    MCAPI void $appendDebugInfo(::std::string& debugInfo) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
