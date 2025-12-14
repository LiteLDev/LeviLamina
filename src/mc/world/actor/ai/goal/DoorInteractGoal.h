#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
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
    // prevent constructor by default
    DoorInteractGoal& operator=(DoorInteractGoal const&);
    DoorInteractGoal(DoorInteractGoal const&);
    DoorInteractGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DoorInteractGoal() /*override*/ = default;

    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void tick() /*override*/;

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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
