#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2, symbol: ?save@PistonBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 7, symbol: ?tick@PistonBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource&);

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: ?onRemoved@PistonBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onRemoved(class BlockSource&);

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@PistonBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41, symbol: ?_onUpdatePacket@PistonBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);

    // symbol: ?getOwningPiston@PistonBlockActor@@UEAAPEAV1@AEAVBlockSource@@@Z
    MCVAPI class PistonBlockActor* getOwningPiston(class BlockSource&);

    // symbol: ?getOwningPiston@PistonBlockActor@@UEBAPEBV1@AEAVBlockSource@@@Z
    MCVAPI class PistonBlockActor const* getOwningPiston(class BlockSource&) const;

    // symbol: ??0PistonBlockActor@@QEAA@AEBVBlockPos@@_N@Z
    MCAPI PistonBlockActor(class BlockPos const&, bool);

    // symbol: ?getAttachedBlocks@PistonBlockActor@@QEBAAEBV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@XZ
    MCAPI std::vector<class BlockPos> const& getAttachedBlocks() const;

    // symbol: ?getCorrectArmBlock@PistonBlockActor@@QEBAPEBVBlock@@XZ
    MCAPI class Block const* getCorrectArmBlock() const;

    // symbol: ?getFacingDir@PistonBlockActor@@QEBAAEBVBlockPos@@AEBVIConstBlockSource@@@Z
    MCAPI class BlockPos const& getFacingDir(class IConstBlockSource const&) const;

    // symbol: ?getProgress@PistonBlockActor@@QEBAMM@Z
    MCAPI float getProgress(float) const;

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
    MCAPI void moveEntityLastProgress(class Actor&, class Vec3);

    // symbol: ?setShouldVerifyArmType@PistonBlockActor@@QEAAX_N@Z
    MCAPI void setShouldVerifyArmType(bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_attachedBlockWalker@PistonBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@EE@Z
    MCAPI bool _attachedBlockWalker(class BlockSource&, class BlockPos const&, uchar, uchar);

    // symbol: ?_checkAttachedBlocks@PistonBlockActor@@AEAA_NAEAVBlockSource@@@Z
    MCAPI bool _checkAttachedBlocks(class BlockSource&);

    // symbol: ?_checkInceptionAchievement@PistonBlockActor@@AEAAXAEAVBlockActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _checkInceptionAchievement(class BlockActor&, class BlockSource&, class BlockPos const&);

    // symbol: ?_handleSlimeConnections@PistonBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@EE@Z
    MCAPI bool _handleSlimeConnections(class BlockSource&, class BlockPos const&, uchar, uchar);

    // symbol: ?_hasBlockAttached@PistonBlockActor@@AEAA_NAEBVBlockPos@@@Z
    MCAPI bool _hasBlockAttached(class BlockPos const&);

    // symbol: ?_moveCollidedEntities@PistonBlockActor@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _moveCollidedEntities(class BlockSource&);

    // symbol:
    // ?_moveCollidedEntitiesHelper@PistonBlockActor@@AEAAXAEAVBlockSource@@AEBVAABB@@AEBVBlockPos@@PEAVActor@@I@Z
    MCAPI void
    _moveCollidedEntitiesHelper(class BlockSource&, class AABB const&, class BlockPos const&, class Actor*, uint);

    // symbol: ?_sortAttachedBlocks@PistonBlockActor@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _sortAttachedBlocks(class BlockSource&);

    // symbol: ?_spawnBlocks@PistonBlockActor@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _spawnBlocks(class BlockSource&);

    // symbol: ?_spawnMovingBlock@PistonBlockActor@@AEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _spawnMovingBlock(class BlockSource&, class BlockPos const&);

    // symbol: ?_spawnMovingBlocks@PistonBlockActor@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _spawnMovingBlocks(class BlockSource&);

    // symbol:
    // ?_spawnResourcesForBlockAndExtraBlock@PistonBlockActor@@CAXAEAVBlockSource@@AEBVBlockPos@@VRandomize@@AEBUResourceDropsContext@@@Z
    MCAPI static void
    _spawnResourcesForBlockAndExtraBlock(class BlockSource&, class BlockPos const&, class Randomize, struct ResourceDropsContext const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?ARM_ANIMATION_SPEED@PistonBlockActor@@0MB
    MCAPI static float const ARM_ANIMATION_SPEED;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $ARM_ANIMATION_SPEED() { return ARM_ANIMATION_SPEED; }

    // NOLINTEND
};
