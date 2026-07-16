#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class Mob;
// clang-format on

class EatBlockGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                                        mMob;
    ::ll::TypedStorage<4, 4, int>                                                           mTicksUntilEat;
    ::ll::TypedStorage<4, 4, int>                                                           mTotalTicksUntilEat;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>                                    mOnEat;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>>                              mSuccessChance;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockType const*, ::BlockType const*>> mEatAndReplaceBlockPairs;
    // NOLINTEND

public:
    // prevent constructor by default
    EatBlockGoal& operator=(EatBlockGoal const&);
    EatBlockGoal(EatBlockGoal const&);
    EatBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $start();

    MCFOLD void $stop();

    MCAPI bool $canContinueToUse();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
