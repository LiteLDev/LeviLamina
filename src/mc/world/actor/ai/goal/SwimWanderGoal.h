#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

class SwimWanderGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk709707;
    ::ll::UntypedStorage<4, 4>  mUnkebc34f;
    ::ll::UntypedStorage<4, 4>  mUnkf82fb1;
    ::ll::UntypedStorage<4, 4>  mUnk56010e;
    ::ll::UntypedStorage<4, 4>  mUnkf1db39;
    ::ll::UntypedStorage<4, 4>  mUnk99bd25;
    ::ll::UntypedStorage<4, 12> mUnkb4b85d;
    // NOLINTEND

public:
    // prevent constructor by default
    SwimWanderGoal& operator=(SwimWanderGoal const&);
    SwimWanderGoal(SwimWanderGoal const&);
    SwimWanderGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~SwimWanderGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _setWantedPosition();
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

    MCFOLD void $start();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
