#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockLegacy;
class ExpressionNode;
class Mob;
// clang-format on

class EatBlockGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                           mMob;
    ::ll::TypedStorage<4, 4, int>                              mTicksUntilEat;
    ::ll::TypedStorage<4, 4, int>                              mTotalTicksUntilEat;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>       mOnEat;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>> mSuccessChance;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockLegacy const*, ::BlockLegacy const*>>
        mEatAndReplaceBlockPairs;
    // NOLINTEND

public:
    // prevent constructor by default
    EatBlockGoal& operator=(EatBlockGoal const&);
    EatBlockGoal(EatBlockGoal const&);
    EatBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~EatBlockGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI float getEatSuccessChance(::Actor& owner) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
