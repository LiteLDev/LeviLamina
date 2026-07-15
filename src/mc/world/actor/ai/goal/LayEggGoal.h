#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"
#include "mc/world/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

class LayEggGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>>                      mTargetBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_20::MaterialType>> mTargetMaterialsAboveBlock;
    ::ll::TypedStorage<1, 1, bool>                                                  mAllowLayingFromBelow;
    ::ll::TypedStorage<1, 1, bool>                                                  mUseDefaultAnimation;
    ::ll::TypedStorage<4, 4, float>                                                 mLaySeconds;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>                                     mEggType;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>                            mOnLay;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>                mLayEggSound;
    ::ll::TypedStorage<4, 4, int>                                                   mLayEggCounter;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool findTargetBlock() /*override*/;

    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string&) const /*override*/;

    virtual bool isValidTarget(::BlockSource&, ::BlockPos const&) /*override*/;

    virtual void _moveToBlock() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
