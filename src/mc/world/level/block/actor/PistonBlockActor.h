#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/actor/PistonState.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class IConstBlockSource;
class ILevel;
class SaveContext;
class Vec3;
// clang-format on

class PistonBlockActor : public ::BlockActor {
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
    // prevent constructor by default
    PistonBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual void onRemoved(::BlockSource& region) /*override*/;

    virtual ::PistonBlockActor* getOwningPiston(::BlockSource&) /*override*/;

    virtual ::PistonBlockActor const* getOwningPiston(::BlockSource&) const /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PistonBlockActor(::BlockPos const& pos, bool isSticky);

    MCAPI bool _attachedBlockWalker(
        ::BlockSource&    region,
        ::BlockPos const& curPos,
        uchar             curBranchFacing,
        uchar             pistonMoveFacing
    );

    MCAPI bool _checkAttachedBlocks(::BlockSource& region);

    MCAPI void _checkInceptionAchievement(::BlockActor& be, ::BlockSource& region, ::BlockPos const& facingDir);

    MCAPI void _clearBlockInfront(::BlockSource& region, ::BlockPos const& blockPos, ::BlockPos const& blockBehindPos);

    MCAPI bool _handleSlimeConnections(
        ::BlockSource&    region,
        ::BlockPos const& curPos,
        uchar             curBranchFacing,
        uchar             pistonMoveFacing
    );

    MCAPI bool _hasBlockAttached(::BlockPos const& blockPos);

    MCAPI void _moveCollidedEntities(::BlockSource& region);

    MCAPI void _moveCollidedEntitiesHelper(
        ::BlockSource&    region,
        ::AABB const&     insideBlockAABB,
        ::BlockPos const& facingDir,
        ::Actor*          ignore,
        uint              searchHeight
    );

    MCAPI bool _shouldWaterlogAttachedBlock(
        ::BlockSource&    region,
        ::BlockPos const& attachedBlockPos,
        ::Block const&    attachedBlock,
        ::Block const&    attachedExtraBlock
    ) const;

    MCAPI void _spawnBlocks(::BlockSource& region);

    MCAPI void _spawnMovingBlock(::BlockSource& region, ::BlockPos const& blockPos);

    MCAPI void _spawnMovingBlocks(::BlockSource& region);

    MCAPI void _tryFixupStickyPistonArm(::BlockSource& region);

    MCFOLD ::std::vector<::BlockPos> const& getAttachedBlocks() const;

    MCAPI ::Block const* getCorrectArmBlock() const;

    MCAPI ::BlockPos const& getFacingDir(::IConstBlockSource const& region) const;

    MCAPI float getProgress(float a) const;

    MCAPI bool isExpanded() const;

    MCAPI bool isExpanding() const;

    MCAPI bool isMoving() const;

    MCAPI bool isRetracted() const;

    MCAPI bool isRetracting() const;

#ifdef LL_PLAT_C
    MCFOLD bool isSticky() const;
#endif

    MCAPI void moveEntityLastProgress(::Actor& entity, ::Vec3 delta);

    MCAPI void setShouldVerifyArmType(bool shouldVerify);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos, bool isSticky);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $tick(::BlockSource& region);

    MCAPI void $onRemoved(::BlockSource& region);

    MCFOLD ::PistonBlockActor* $getOwningPiston(::BlockSource&);

    MCFOLD ::PistonBlockActor const* $getOwningPiston(::BlockSource&) const;

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
