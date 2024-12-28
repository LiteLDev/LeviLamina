#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

class SwimWithEntityGoal : public ::Goal {
public:
    // SwimWithEntityGoal inner types define
    enum class EntityGoals : int {
        CatchUpToEntity      = 0,
        MatchEntityDirection = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkfaf6ac;
    ::ll::UntypedStorage<8, 40> mUnk99826f;
    ::ll::UntypedStorage<4, 4>  mUnkf35080;
    ::ll::UntypedStorage<4, 4>  mUnkcbc0bb;
    ::ll::UntypedStorage<4, 4>  mUnk83f234;
    ::ll::UntypedStorage<4, 4>  mUnk6b640e;
    ::ll::UntypedStorage<4, 4>  mUnk398e94;
    ::ll::UntypedStorage<4, 4>  mUnkc472f8;
    ::ll::UntypedStorage<4, 4>  mUnk408b11;
    ::ll::UntypedStorage<4, 4>  mUnk6c2ded;
    ::ll::UntypedStorage<4, 4>  mUnk19c50e;
    ::ll::UntypedStorage<4, 4>  mUnk9087dd;
    ::ll::UntypedStorage<4, 4>  mUnk16a27c;
    ::ll::UntypedStorage<8, 24> mUnk9df051;
    // NOLINTEND

public:
    // prevent constructor by default
    SwimWithEntityGoal& operator=(SwimWithEntityGoal const&);
    SwimWithEntityGoal(SwimWithEntityGoal const&);
    SwimWithEntityGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 3
    virtual bool canBeInterrupted() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~SwimWithEntityGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _setWantedMob();
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

    MCAPI bool $canBeInterrupted();

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
