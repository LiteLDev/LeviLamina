#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/PistonState.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class IConstBlockSource;
class ILevel;
class SaveContext;
class Vec3;
// clang-format on

class PistonBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                        mSticky;
    ::ll::TypedStorage<4, 4, float>                                       mProgress;
    ::ll::TypedStorage<4, 4, float>                                       mLastProgress;
    ::ll::TypedStorage<1, 1, bool>                                        mWasPushedBackwardByANonStickyPiston;
    ::ll::TypedStorage<1, 1, bool>                                        mWasPulledForwardByAStickyPiston;
    ::ll::TypedStorage<1, 1, ::PistonState>                               mOldState;
    ::ll::TypedStorage<1, 1, ::PistonState>                               mState;
    ::ll::TypedStorage<1, 1, ::PistonState>                               mNewState;
    ::ll::TypedStorage<1, 1, bool>                                        mVerifyArm;
    ::ll::TypedStorage<1, 1, bool>                                        mShouldVerifyArmType;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                  mAttachedBlocks;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::BlockPos>>> mFutureClientAttachedBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                  mBreakBlocks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual bool saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual void onRemoved(::BlockSource& region) /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _attachedBlockWalker(
        ::BlockSource&    region,
        ::BlockPos const& curPos,
        uchar             curBranchFacing,
        uchar             pistonMoveFacing
    );

    MCAPI bool _checkAttachedBlocks(::BlockSource& region);

    MCAPI void _moveCollidedEntities(::BlockSource& region);

    MCAPI void _moveCollidedEntitiesHelper(
        ::BlockSource&    region,
        ::AABB const&     insideBlockAABB,
        ::BlockPos const& facingDir,
        ::Actor*          ignore,
        uint              searchHeight
    );

    MCAPI void _spawnBlocks(::BlockSource& region);

    MCAPI void _spawnMovingBlock(::BlockSource& region, ::BlockPos const& blockPos);

    MCAPI void _spawnMovingBlocks(::BlockSource& region);

    MCAPI ::BlockPos const& getFacingDir(::IConstBlockSource const& region) const;

    MCAPI void moveEntityLastProgress(::Actor& entity, ::Vec3 delta);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI bool $saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $tick(::BlockSource& region);

    MCAPI void $onRemoved(::BlockSource& region);

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCNAPI static void** $vftableForBlockActor();
    // NOLINTEND
};
