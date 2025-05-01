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
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class Randomize;
class SaveContext;
class Vec3;
struct ResourceDropsContext;
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 8
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 14
    virtual void onRemoved(::BlockSource& region) /*override*/;

    // vIndex: 32
    virtual ::PistonBlockActor* getOwningPiston(::BlockSource&) /*override*/;

    // vIndex: 31
    virtual ::PistonBlockActor const* getOwningPiston(::BlockSource&) const /*override*/;

    // vIndex: 44
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 45
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~PistonBlockActor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PistonBlockActor(::BlockPos const& pos, bool isSticky);

    MCNAPI bool _attachedBlockWalker(
        ::BlockSource&    region,
        ::BlockPos const& curPos,
        uchar             curBranchFacing,
        uchar             pistonMoveFacing
    );

    MCNAPI bool _checkAttachedBlocks(::BlockSource& region);

    MCNAPI void _checkInceptionAchievement(::BlockActor& be, ::BlockSource& region, ::BlockPos const& facingDir);

    MCNAPI bool _handleSlimeConnections(
        ::BlockSource&    region,
        ::BlockPos const& curPos,
        uchar             curBranchFacing,
        uchar             pistonMoveFacing
    );

    MCNAPI bool _hasBlockAttached(::BlockPos const& blockPos);

    MCNAPI void _moveCollidedEntities(::BlockSource& region);

    MCNAPI void _moveCollidedEntitiesHelper(
        ::BlockSource&    region,
        ::AABB const&     insideBlockAABB,
        ::BlockPos const& facingDir,
        ::Actor*          ignore,
        uint              searchHeight
    );

    MCNAPI void _sortAttachedBlocks(::BlockSource& region);

    MCNAPI void _spawnBlocks(::BlockSource& region);

    MCNAPI void _spawnMovingBlock(::BlockSource& region, ::BlockPos const& blockPos);

    MCNAPI void _spawnMovingBlocks(::BlockSource& region);

    MCNAPI void moveEntityLastProgress(::Actor& entity, ::Vec3 delta);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _spawnResourcesForBlockAndExtraBlock(
        ::BlockSource&                region,
        ::BlockPos const&             blockPos,
        ::Randomize                   randomize,
        ::ResourceDropsContext const& resourceDropsContext
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const& pos, bool isSticky);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $tick(::BlockSource& region);

    MCNAPI void $onRemoved(::BlockSource& region);

    MCNAPI ::PistonBlockActor* $getOwningPiston(::BlockSource&);

    MCNAPI ::PistonBlockActor const* $getOwningPiston(::BlockSource&) const;

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
