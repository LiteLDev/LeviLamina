#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"
#include "mc/world/item/ItemDescriptor.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BlockType;
class Mob;
// clang-format on

class LayEggGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>>       mTargetBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::MaterialType>>         mTargetMaterialsAboveBlock;
    ::ll::TypedStorage<1, 1, bool>                                   mAllowLayingFromBelow;
    ::ll::TypedStorage<1, 1, bool>                                   mUseDefaultAnimation;
    ::ll::TypedStorage<4, 4, float>                                  mLaySeconds;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>                      mEggType;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>             mOnLay;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mLayEggSound;
    ::ll::TypedStorage<4, 4, int>                                    mLayEggCounter;
    // NOLINTEND

public:
    // prevent constructor by default
    LayEggGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool findTargetBlock() /*override*/;

    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    virtual void _moveToBlock() /*override*/;

    virtual ~LayEggGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LayEggGoal(::Mob& mob);

    MCAPI bool _isTargetBlock(::BlockType const& block) const;
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
    MCAPI bool $findTargetBlock();

    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);

    MCAPI void $_moveToBlock();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
