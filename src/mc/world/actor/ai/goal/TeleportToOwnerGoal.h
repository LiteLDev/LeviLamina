#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class TeleportToOwnerGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>              mMob;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilters;
    ::ll::TypedStorage<4, 4, int>                 mCooldownInTicks;
    ::ll::TypedStorage<8, 8, ::Tick>              mCooldownEndTick;
    ::ll::TypedStorage<4, 12, ::Vec3>             mTargetPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    TeleportToOwnerGoal& operator=(TeleportToOwnerGoal const&);
    TeleportToOwnerGoal(TeleportToOwnerGoal const&);
    TeleportToOwnerGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void start() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~TeleportToOwnerGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $start();

    MCFOLD bool $canContinueToUse();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
