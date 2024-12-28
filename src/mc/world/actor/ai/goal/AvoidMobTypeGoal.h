#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
// clang-format on

class AvoidMobTypeGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk3fbb16;
    ::ll::UntypedStorage<1, 1>   mUnkb1841c;
    ::ll::UntypedStorage<8, 32>  mUnk124442;
    ::ll::UntypedStorage<4, 4>   mUnkb51116;
    ::ll::UntypedStorage<4, 4>   mUnk45d7e0;
    ::ll::UntypedStorage<4, 4>   mUnkd0c5c2;
    ::ll::UntypedStorage<4, 4>   mUnka98c32;
    ::ll::UntypedStorage<4, 4>   mUnk1940eb;
    ::ll::UntypedStorage<4, 4>   mUnk784834;
    ::ll::UntypedStorage<4, 4>   mUnk15e998;
    ::ll::UntypedStorage<4, 4>   mUnk9fd0d9;
    ::ll::UntypedStorage<4, 4>   mUnk9063cd;
    ::ll::UntypedStorage<1, 1>   mUnk322f7e;
    ::ll::UntypedStorage<8, 104> mUnke29929;
    ::ll::UntypedStorage<4, 4>   mUnkcbeadd;
    ::ll::UntypedStorage<4, 8>   mUnk8f26ad;
    ::ll::UntypedStorage<8, 24>  mUnkc1d58f;
    ::ll::UntypedStorage<4, 12>  mUnke33326;
    ::ll::UntypedStorage<8, 8>   mUnk52e7f6;
    ::ll::UntypedStorage<8, 8>   mUnkaa5034;
    ::ll::UntypedStorage<8, 24>  mUnk304b37;
    // NOLINTEND

public:
    // prevent constructor by default
    AvoidMobTypeGoal& operator=(AvoidMobTypeGoal const&);
    AvoidMobTypeGoal(AvoidMobTypeGoal const&);
    AvoidMobTypeGoal();

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

    // vIndex: 0
    virtual ~AvoidMobTypeGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AvoidMobTypeGoal(::Mob& mob);

    MCAPI bool canFindAvoidPath(::Actor* actor);

    MCAPI ::Actor* findNearestEntityToAvoid(float dist);
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
