#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class PistonBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    PistonBlockActor& operator=(PistonBlockActor const&);
    PistonBlockActor(PistonBlockActor const&);
    PistonBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PistonBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // vIndex: 13
    virtual void onRemoved(class BlockSource& region);

    // vIndex: 30
    virtual class PistonBlockActor const* getOwningPiston(class BlockSource& region) const;

    // vIndex: 31
    virtual class PistonBlockActor* getOwningPiston(class BlockSource& region);

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCAPI PistonBlockActor(class BlockPos const& pos, bool isSticky);

    MCAPI std::vector<class BlockPos> const& getAttachedBlocks() const;

    MCAPI class Block const* getCorrectArmBlock() const;

    MCAPI class BlockPos const& getFacingDir(class IConstBlockSource const& region) const;

    MCAPI float getProgress(float a) const;

    MCAPI bool isExpanded() const;

    MCAPI bool isExpanding() const;

    MCAPI bool isMoving() const;

    MCAPI bool isRetracted() const;

    MCAPI bool isRetracting() const;

    MCAPI void moveEntityLastProgress(class Actor& entity, class Vec3 delta);

    MCAPI void setShouldVerifyArmType(bool shouldVerify);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _attachedBlockWalker(
        class BlockSource&    region,
        class BlockPos const& curPos,
        uchar                 curBranchFacing,
        uchar                 pistonMoveFacing
    );

    MCAPI bool _checkAttachedBlocks(class BlockSource& region);

    MCAPI void
    _checkInceptionAchievement(class BlockActor& be, class BlockSource& region, class BlockPos const& facingDir);

    MCAPI bool _handleSlimeConnections(
        class BlockSource&    region,
        class BlockPos const& curPos,
        uchar                 curBranchFacing,
        uchar                 pistonMoveFacing
    );

    MCAPI bool _hasBlockAttached(class BlockPos const& blockPos);

    MCAPI void _moveCollidedEntities(class BlockSource& region);

    MCAPI void _moveCollidedEntitiesHelper(
        class BlockSource&    region,
        class AABB const&     insideBlockAABB,
        class BlockPos const& facingDir,
        class Actor*          ignore,
        uint                  searchHeight
    );

    MCAPI void _sortAttachedBlocks(class BlockSource& region);

    MCAPI void _spawnBlocks(class BlockSource& region);

    MCAPI void _spawnMovingBlock(class BlockSource& region, class BlockPos const& blockPos);

    MCAPI void _spawnMovingBlocks(class BlockSource& region);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static float const ARM_ANIMATION_SPEED;

    // NOLINTEND
};
