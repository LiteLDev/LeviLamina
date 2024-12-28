#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class ExploreOutskirtsGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk4c67b5;
    ::ll::UntypedStorage<4, 4>  mUnk6890e8;
    ::ll::UntypedStorage<4, 4>  mUnkab643a;
    ::ll::UntypedStorage<4, 4>  mUnk983ace;
    ::ll::UntypedStorage<8, 8>  mUnkb02494;
    ::ll::UntypedStorage<8, 8>  mUnk97c3ea;
    ::ll::UntypedStorage<4, 4>  mUnk298c34;
    ::ll::UntypedStorage<4, 4>  mUnk594c91;
    ::ll::UntypedStorage<4, 4>  mUnk3e14e1;
    ::ll::UntypedStorage<4, 4>  mUnk6b1727;
    ::ll::UntypedStorage<4, 4>  mUnk7d4882;
    ::ll::UntypedStorage<4, 12> mUnkabe86d;
    ::ll::UntypedStorage<1, 1>  mUnkf4b42f;
    ::ll::UntypedStorage<1, 1>  mUnk4954ba;
    ::ll::UntypedStorage<8, 8>  mUnk8576dc;
    ::ll::UntypedStorage<8, 8>  mUnk53b906;
    ::ll::UntypedStorage<8, 8>  mUnkc4f08e;
    ::ll::UntypedStorage<4, 12> mUnkdaa89d;
    // NOLINTEND

public:
    // prevent constructor by default
    ExploreOutskirtsGoal& operator=(ExploreOutskirtsGoal const&);
    ExploreOutskirtsGoal(ExploreOutskirtsGoal const&);
    ExploreOutskirtsGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

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

    // vIndex: 0
    virtual ~ExploreOutskirtsGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ExploreOutskirtsGoal(::Mob& mob);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
