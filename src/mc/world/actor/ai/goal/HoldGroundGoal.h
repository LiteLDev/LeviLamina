#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

class HoldGroundGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk962e6f;
    ::ll::UntypedStorage<8, 40>  mUnkaddb02;
    ::ll::UntypedStorage<4, 4>   mUnkf7d59d;
    ::ll::UntypedStorage<1, 1>   mUnk436232;
    ::ll::UntypedStorage<4, 4>   mUnk4ace58;
    ::ll::UntypedStorage<8, 104> mUnk9173dc;
    // NOLINTEND

public:
    // prevent constructor by default
    HoldGroundGoal& operator=(HoldGroundGoal const&);
    HoldGroundGoal(HoldGroundGoal const&);
    HoldGroundGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HoldGroundGoal() /*override*/;

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
    MCAPI void $dtor();
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
