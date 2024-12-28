#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

class LeapAtTargetGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk775566;
    ::ll::UntypedStorage<4, 4>  mUnkd8bb88;
    ::ll::UntypedStorage<1, 1>  mUnka34603;
    ::ll::UntypedStorage<8, 8>  mUnkc69160;
    ::ll::UntypedStorage<1, 1>  mUnk12f85e;
    // NOLINTEND

public:
    // prevent constructor by default
    LeapAtTargetGoal& operator=(LeapAtTargetGoal const&);
    LeapAtTargetGoal(LeapAtTargetGoal const&);
    LeapAtTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~LeapAtTargetGoal() /*override*/;
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

    MCAPI void $start();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
