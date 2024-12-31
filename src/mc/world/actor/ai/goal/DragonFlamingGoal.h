#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class DragonFlamingGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk56d4a3;
    ::ll::UntypedStorage<4, 4>  mUnkb35df2;
    ::ll::UntypedStorage<4, 4>  mUnkb86092;
    ::ll::UntypedStorage<4, 4>  mUnk71996e;
    ::ll::UntypedStorage<4, 4>  mUnkc536ef;
    ::ll::UntypedStorage<4, 4>  mUnk54770c;
    ::ll::UntypedStorage<4, 4>  mUnk38bd92;
    ::ll::UntypedStorage<4, 4>  mUnk30f99a;
    ::ll::UntypedStorage<4, 4>  mUnk6d2d38;
    ::ll::UntypedStorage<4, 16> mUnk813ff1;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonFlamingGoal& operator=(DragonFlamingGoal const&);
    DragonFlamingGoal(DragonFlamingGoal const&);
    DragonFlamingGoal();

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
    virtual ~DragonFlamingGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DragonFlamingGoal(::Mob& mob);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
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
