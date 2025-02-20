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
    ::ll::TypedStorage<4, 12, ::BlockPos>        mDoorPos;
    ::ll::TypedStorage<8, 8, ::DoorBlock const*> mDoorBlock;
    ::ll::TypedStorage<1, 1, bool>               mInitialToggledState;
    ::ll::TypedStorage<1, 1, bool>               mMobOversized;
    ::ll::TypedStorage<1, 1, bool>               mExited;
    ::ll::TypedStorage<4, 4, float>              mDoorOpenDirX;
    ::ll::TypedStorage<4, 4, float>              mDoorOpenDirZ;
    ::ll::TypedStorage<1, 1, ::Direction::Type>  mEnterDirection;
    ::ll::TypedStorage<1, 1, ::Direction::Type>  mExitDirection;
    ::ll::TypedStorage<8, 8, ::Mob&>             mMob;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DoorInteractGoal() /*override*/ = default;

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
    // destructor thunk
    // NOLINTBEGIN

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
