#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class TakeBlockGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                            mMob;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mValidBlocks;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>               mCanTake;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnTake;
    ::ll::TypedStorage<4, 8, ::IntRange>                        mXZRange;
    ::ll::TypedStorage<4, 8, ::IntRange>                        mYRange;
    ::ll::TypedStorage<4, 4, float>                             mChance;
    ::ll::TypedStorage<1, 1, bool>                              mAffectedByGriefingRule;
    ::ll::TypedStorage<1, 1, bool>                              mRequiresLineOfSight;
    // NOLINTEND

public:
    // prevent constructor by default
    TakeBlockGoal& operator=(TakeBlockGoal const&);
    TakeBlockGoal(TakeBlockGoal const&);
    TakeBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
