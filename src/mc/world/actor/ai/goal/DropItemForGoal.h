#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/util/FloatRange.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Mob;
struct MobDescriptor;
// clang-format on

class DropItemForGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                            mHasDroppedItem;
    ::ll::TypedStorage<4, 4, int>                             mCooldownRemaining;
    ::ll::TypedStorage<4, 4, int>                             mTicksBeforePickup;
    ::ll::TypedStorage<4, 4, int>                             mTotalCooldownTicks;
    ::ll::TypedStorage<4, 4, float>                           mDropItemChance;
    ::ll::TypedStorage<4, 4, float>                           mPreferredSquareDistance;
    ::ll::TypedStorage<4, 4, float>                           mMinimumTeleportDistance;
    ::ll::TypedStorage<4, 4, float>                           mLookAtTargetMaxHeadHeight;
    ::ll::TypedStorage<8, 32, ::std::string>                  mLootTable;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                 mDropForID;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>      mOnDropAttempt;
    ::ll::TypedStorage<4, 8, ::FloatRange>                    mTimeOfDayRange;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mTargetRange;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mTeleportDistanceFromTarget;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobDescriptor>> mTargetFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    DropItemForGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual bool findTargetBlock() /*override*/;

    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~DropItemForGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DropItemForGoal(::Mob& mob);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI bool $findTargetBlock();

    MCAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
