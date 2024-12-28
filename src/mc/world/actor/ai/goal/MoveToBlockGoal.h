#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/TargetSelectionMethod.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class ActorFilterGroup;
class Block;
class ItemDescriptor;
class Mob;
class Vec3;
// clang-format on

class MoveToBlockGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke438bf;
    ::ll::UntypedStorage<4, 4>  mUnk321b17;
    ::ll::UntypedStorage<4, 4>  mUnke9edfa;
    ::ll::UntypedStorage<4, 4>  mUnk9a98a2;
    ::ll::UntypedStorage<4, 12> mUnka3af3a;
    ::ll::UntypedStorage<4, 12> mUnk93353a;
    ::ll::UntypedStorage<4, 4>  mUnk7dbbaa;
    ::ll::UntypedStorage<4, 4>  mUnkc793c2;
    ::ll::UntypedStorage<4, 4>  mUnk815dd7;
    ::ll::UntypedStorage<4, 4>  mUnk4069b0;
    ::ll::UntypedStorage<1, 1>  mUnk202b57;
    ::ll::UntypedStorage<8, 24> mUnk71c509;
    ::ll::UntypedStorage<8, 24> mUnk6b8dc6;
    ::ll::UntypedStorage<8, 24> mUnk6beba1;
    ::ll::UntypedStorage<8, 8>  mUnkce0572;
    ::ll::UntypedStorage<8, 8>  mUnk316a2f;
    ::ll::UntypedStorage<1, 1>  mUnk7f6d7c;
    ::ll::UntypedStorage<4, 4>  mUnk1a003d;
    ::ll::UntypedStorage<4, 4>  mUnk892acc;
    ::ll::UntypedStorage<4, 4>  mUnkda7723;
    ::ll::UntypedStorage<4, 12> mUnke49ae5;
    ::ll::UntypedStorage<8, 8>  mUnkc01e2b;
    ::ll::UntypedStorage<1, 1>  mUnkf64d10;
    ::ll::UntypedStorage<8, 64> mUnk5fe9d6;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveToBlockGoal& operator=(MoveToBlockGoal const&);
    MoveToBlockGoal(MoveToBlockGoal const&);
    MoveToBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 0
    virtual ~MoveToBlockGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MoveToBlockGoal(
        ::Mob&                                  mob,
        float                                   speedModifier,
        int                                     searchRange,
        int                                     searchHeight,
        int                                     tickInterval,
        int                                     stayDurationTicks,
        float                                   goalRadius,
        ::Vec3                                  targetPositionOffset,
        float                                   chanceToStart,
        ::TargetSelectionMethod                 targetSelectionMethod,
        ::std::vector<::ActorDefinitionTrigger> onReachTriggers,
        ::std::vector<::ActorDefinitionTrigger> onStayCompletedTriggers,
        ::std::vector<::ItemDescriptor>         targetBlocks,
        ::ActorFilterGroup const&               targetBlockFilter
    );

    MCAPI void _checkIfStuck();

    MCAPI bool _isValidTarget(::Block const& candidateBlock) const;

    MCAPI void _moveToBlock();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&                                  mob,
        float                                   speedModifier,
        int                                     searchRange,
        int                                     searchHeight,
        int                                     tickInterval,
        int                                     stayDurationTicks,
        float                                   goalRadius,
        ::Vec3                                  targetPositionOffset,
        float                                   chanceToStart,
        ::TargetSelectionMethod                 targetSelectionMethod,
        ::std::vector<::ActorDefinitionTrigger> onReachTriggers,
        ::std::vector<::ActorDefinitionTrigger> onStayCompletedTriggers,
        ::std::vector<::ItemDescriptor>         targetBlocks,
        ::ActorFilterGroup const&               targetBlockFilter
    );
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

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI void $start();

    MCAPI void $stop();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
