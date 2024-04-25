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
    // vIndex: 0, symbol: __gen_??1PistonBlockActor@@UEAA@XZ
    virtual ~PistonBlockActor() = default;

    // vIndex: 1, symbol: ?load@PistonBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@PistonBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7, symbol: ?tick@PistonBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // vIndex: 13, symbol: ?onRemoved@PistonBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onRemoved(class BlockSource& region);

    // vIndex: 30, symbol: ?getOwningPiston@PistonBlockActor@@UEBAPEBV1@AEAVBlockSource@@@Z
    virtual class PistonBlockActor const* getOwningPiston(class BlockSource& region) const;

    // vIndex: 31, symbol: ?getOwningPiston@PistonBlockActor@@UEAAPEAV1@AEAVBlockSource@@@Z
    virtual class PistonBlockActor* getOwningPiston(class BlockSource& region);

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@PistonBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41, symbol: ?_onUpdatePacket@PistonBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ??0PistonBlockActor@@QEAA@AEBVBlockPos@@_N@Z
    MCAPI PistonBlockActor(class BlockPos const& pos, bool isSticky);

    // symbol: ?getAttachedBlocks@PistonBlockActor@@QEBAAEBV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@XZ
    MCAPI std::vector<class BlockPos> const& getAttachedBlocks() const;

    // symbol: ?getCorrectArmBlock@PistonBlockActor@@QEBAPEBVBlock@@XZ
    MCAPI class Block const* getCorrectArmBlock() const;

    // symbol: ?getFacingDir@PistonBlockActor@@QEBAAEBVBlockPos@@AEBVIConstBlockSource@@@Z
    MCAPI class BlockPos const& getFacingDir(class IConstBlockSource const& region) const;

    // symbol: ?getProgress@PistonBlockActor@@QEBAMM@Z
    MCAPI float getProgress(float a) const;

    // symbol: ?isExpanded@PistonBlockActor@@QEBA_NXZ
    MCAPI bool isExpanded() const;

    // symbol: ?isExpanding@PistonBlockActor@@QEBA_NXZ
    MCAPI bool isExpanding() const;

    // symbol: ?isMoving@PistonBlockActor@@QEBA_NXZ
    MCAPI bool isMoving() const;

    // symbol: ?isRetracted@PistonBlockActor@@QEBA_NXZ
    MCAPI bool isRetracted() const;

    // symbol: ?isRetracting@PistonBlockActor@@QEBA_NXZ
    MCAPI bool isRetracting() const;

    // symbol: ?moveEntityLastProgress@PistonBlockActor@@QEAAXAEAVActor@@VVec3@@@Z
    MCAPI void moveEntityLastProgress(class Actor& entity, class Vec3 delta);

    // symbol: ?setShouldVerifyArmType@PistonBlockActor@@QEAAX_N@Z
    MCAPI void setShouldVerifyArmType(bool shouldVerify);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_attachedBlockWalker@PistonBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@EE@Z
    MCAPI bool _attachedBlockWalker(
        class BlockSource&    region,
        class BlockPos const& curPos,
        uchar                 curBranchFacing,
        uchar                 pistonMoveFacing
    );

    // symbol: ?_checkAttachedBlocks@PistonBlockActor@@AEAA_NAEAVBlockSource@@@Z
    MCAPI bool _checkAttachedBlocks(class BlockSource& region);

    // symbol: ?_checkInceptionAchievement@PistonBlockActor@@AEAAXAEAVBlockActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void
    _checkInceptionAchievement(class BlockActor& be, class BlockSource& region, class BlockPos const& facingDir);

    // symbol: ?_handleSlimeConnections@PistonBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@EE@Z
    MCAPI bool _handleSlimeConnections(
        class BlockSource&    region,
        class BlockPos const& curPos,
        uchar                 curBranchFacing,
        uchar                 pistonMoveFacing
    );

    // symbol: ?_hasBlockAttached@PistonBlockActor@@AEAA_NAEBVBlockPos@@@Z
    MCAPI bool _hasBlockAttached(class BlockPos const& blockPos);

    // symbol: ?_moveCollidedEntities@PistonBlockActor@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _moveCollidedEntities(class BlockSource& region);

    // symbol:
    // ?_moveCollidedEntitiesHelper@PistonBlockActor@@AEAAXAEAVBlockSource@@AEBVAABB@@AEBVBlockPos@@PEAVActor@@I@Z
    MCAPI void _moveCollidedEntitiesHelper(
        class BlockSource&    region,
        class AABB const&     insideBlockAABB,
        class BlockPos const& facingDir,
        class Actor*          ignore,
        uint                  searchHeight
    );

    // symbol: ?_sortAttachedBlocks@PistonBlockActor@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _sortAttachedBlocks(class BlockSource& region);

    // symbol: ?_spawnBlocks@PistonBlockActor@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _spawnBlocks(class BlockSource& region);

    // symbol: ?_spawnMovingBlock@PistonBlockActor@@AEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _spawnMovingBlock(class BlockSource& region, class BlockPos const& blockPos);

    // symbol: ?_spawnMovingBlocks@PistonBlockActor@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _spawnMovingBlocks(class BlockSource& region);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ARM_ANIMATION_SPEED@PistonBlockActor@@0MB
    MCAPI static float const ARM_ANIMATION_SPEED;

    // NOLINTEND
};
