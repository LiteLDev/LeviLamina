#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ai/goal/BaseMoveToBlockGoal.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class BlockLegacy;
class BlockPos;
class BlockSource;
class ItemDescriptor;
class Mob;
// clang-format on

class LayEggGoal : public ::BaseMoveToBlockGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor> const>       mTargetBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::MaterialType> const>         mTargetMaterialsAboveBlock;
    ::ll::TypedStorage<1, 1, bool const>                                   mAllowLayingFromBelow;
    ::ll::TypedStorage<1, 1, bool const>                                   mUseDefaultAnimation;
    ::ll::TypedStorage<4, 4, float const>                                  mLaySeconds;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor const>                      mEggType;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger const>             mOnLay;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent const> mLayEggSound;
    ::ll::TypedStorage<4, 4, int>                                          mLayEggCounter;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 17
    virtual bool findTargetBlock() /*override*/;

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

    // vIndex: 11
    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    // vIndex: 14
    virtual void _moveToBlock() /*override*/;

    // vIndex: 0
    virtual ~LayEggGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LayEggGoal(
        ::Mob&                                 mob,
        float                                  speedModifier,
        int                                    searchRange,
        int                                    searchHeight,
        float                                  goalRadius,
        ::std::vector<::ItemDescriptor> const& targetBlocks,
        ::std::vector<::MaterialType> const&   targetMaterialsAboveBlock,
        bool                                   allowLayingFromBelow,
        bool                                   useDefaultAnimation,
        float                                  laySeconds,
        ::ItemDescriptor const&                eggType,
        ::ActorDefinitionTrigger const&        onLay,
        ::std::string const&                   layEggSound
    );

    MCAPI bool _isTargetBlock(::BlockLegacy const& block) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&                                 mob,
        float                                  speedModifier,
        int                                    searchRange,
        int                                    searchHeight,
        float                                  goalRadius,
        ::std::vector<::ItemDescriptor> const& targetBlocks,
        ::std::vector<::MaterialType> const&   targetMaterialsAboveBlock,
        bool                                   allowLayingFromBelow,
        bool                                   useDefaultAnimation,
        float                                  laySeconds,
        ::ItemDescriptor const&                eggType,
        ::ActorDefinitionTrigger const&        onLay,
        ::std::string const&                   layEggSound
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
