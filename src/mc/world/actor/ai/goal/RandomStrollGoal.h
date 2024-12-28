#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class RandomStrollGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk14f86b;
    ::ll::UntypedStorage<4, 4>  mUnk2e9433;
    ::ll::UntypedStorage<4, 4>  mUnkd131de;
    ::ll::UntypedStorage<4, 4>  mUnk7024c3;
    ::ll::UntypedStorage<4, 4>  mUnkce4de8;
    ::ll::UntypedStorage<4, 12> mUnk8eee30;
    ::ll::UntypedStorage<4, 12> mUnkbdf65e;
    ::ll::UntypedStorage<1, 1>  mUnkd091ef;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomStrollGoal& operator=(RandomStrollGoal const&);
    RandomStrollGoal(RandomStrollGoal const&);
    RandomStrollGoal();

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

    // vIndex: 10
    virtual bool _setWantedPosition();

    // vIndex: 0
    virtual ~RandomStrollGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RandomStrollGoal(::Mob& mob, float speed, int xzDist, int yDist, int interval);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob, float speed, int xzDist, int yDist, int interval);
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

    MCAPI bool $_setWantedPosition();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
