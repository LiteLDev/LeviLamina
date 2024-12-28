#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class DoorBlock;
class Mob;
class Path;
// clang-format on

class DoorInteractGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkb3350a;
    ::ll::UntypedStorage<8, 8>  mUnkd97404;
    ::ll::UntypedStorage<1, 1>  mUnk1c4b6d;
    ::ll::UntypedStorage<1, 1>  mUnk4177ac;
    ::ll::UntypedStorage<1, 1>  mUnkc896cc;
    ::ll::UntypedStorage<4, 4>  mUnkc19747;
    ::ll::UntypedStorage<4, 4>  mUnkdb238d;
    ::ll::UntypedStorage<1, 1>  mUnk153ece;
    ::ll::UntypedStorage<1, 1>  mUnk611ba8;
    ::ll::UntypedStorage<8, 8>  mUnkd69cdf;
    // NOLINTEND

public:
    // prevent constructor by default
    DoorInteractGoal& operator=(DoorInteractGoal const&);
    DoorInteractGoal(DoorInteractGoal const&);
    DoorInteractGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DoorInteractGoal() /*override*/;

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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DoorInteractGoal(::Mob& mob);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::DoorBlock const* _findBlockingDoorAtPos(
        ::BlockPos const&  bpos,
        ::Mob const&       mob,
        ::Path*            path,
        ::Direction::Type& dirIn,
        ::Direction::Type& dirOut
    );
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

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
