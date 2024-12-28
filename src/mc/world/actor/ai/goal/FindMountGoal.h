#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

class FindMountGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk2740b2;
    ::ll::UntypedStorage<4, 4>  mUnkd9553d;
    ::ll::UntypedStorage<4, 4>  mUnk7b23f4;
    ::ll::UntypedStorage<4, 4>  mUnkfc44f4;
    ::ll::UntypedStorage<4, 4>  mUnk9cfa6b;
    ::ll::UntypedStorage<1, 1>  mUnke99754;
    ::ll::UntypedStorage<1, 1>  mUnkee769b;
    ::ll::UntypedStorage<4, 4>  mUnka22d13;
    ::ll::UntypedStorage<4, 4>  mUnk555735;
    ::ll::UntypedStorage<4, 4>  mUnk5b1b97;
    ::ll::UntypedStorage<8, 8>  mUnk88b6e6;
    ::ll::UntypedStorage<8, 8>  mUnk1d312a;
    // NOLINTEND

public:
    // prevent constructor by default
    FindMountGoal& operator=(FindMountGoal const&);
    FindMountGoal(FindMountGoal const&);
    FindMountGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FindMountGoal() /*override*/;

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
    MCAPI bool isInMountRange();
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
