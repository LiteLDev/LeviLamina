#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class PistonBlockActor : public ::BlockActor {

public:
    // prevent constructor by default
    PistonBlockActor& operator=(PistonBlockActor const&) = delete;
    PistonBlockActor(PistonBlockActor const&)            = delete;
    PistonBlockActor()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?load\@PistonBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?save\@PistonBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?tick\@PistonBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource&); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 13
     * @symbol ?onRemoved\@PistonBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onRemoved(class BlockSource&); // NOLINT
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18(); // NOLINT
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30(); // NOLINT
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31(); // NOLINT
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32(); // NOLINT
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33(); // NOLINT
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36(); // NOLINT
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39(); // NOLINT
    /**
     * @vftbl 40
     * @symbol
     * ?_getUpdatePacket\@PistonBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @vftbl 41
     * @symbol ?_onUpdatePacket\@PistonBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PISTONBLOCKACTOR
    /**
     * @symbol ?getOwningPiston\@PistonBlockActor\@\@UEAAPEAV1\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI class PistonBlockActor* getOwningPiston(class BlockSource&); // NOLINT
    /**
     * @symbol ?getOwningPiston\@PistonBlockActor\@\@UEBAPEBV1\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI class PistonBlockActor const* getOwningPiston(class BlockSource&) const; // NOLINT
#endif
    /**
     * @symbol ??0PistonBlockActor\@\@QEAA\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI PistonBlockActor(class BlockPos const&, bool); // NOLINT
    /**
     * @symbol
     * ?getAttachedBlocks\@PistonBlockActor\@\@QEBAAEBV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class BlockPos> const& getAttachedBlocks() const; // NOLINT
    /**
     * @symbol ?getCorrectArmBlock\@PistonBlockActor\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const* getCorrectArmBlock() const; // NOLINT
    /**
     * @symbol ?getFacingDir\@PistonBlockActor\@\@QEBAAEBVBlockPos\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI class BlockPos const& getFacingDir(class IConstBlockSource const&) const; // NOLINT
    /**
     * @symbol ?getProgress\@PistonBlockActor\@\@QEBAMM\@Z
     */
    MCAPI float getProgress(float) const; // NOLINT
    /**
     * @symbol ?isExpanded\@PistonBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isExpanded() const; // NOLINT
    /**
     * @symbol ?isExpanding\@PistonBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isExpanding() const; // NOLINT
    /**
     * @symbol ?isMoving\@PistonBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isMoving() const; // NOLINT
    /**
     * @symbol ?isRetracted\@PistonBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isRetracted() const; // NOLINT
    /**
     * @symbol ?isRetracting\@PistonBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isRetracting() const; // NOLINT
    /**
     * @symbol ?moveEntityLastProgress\@PistonBlockActor\@\@QEAAXAEAVActor\@\@VVec3\@\@\@Z
     */
    MCAPI void moveEntityLastProgress(class Actor&, class Vec3); // NOLINT
    /**
     * @symbol ?setShouldVerifyArmType\@PistonBlockActor\@\@QEAAX_N\@Z
     */
    MCAPI void setShouldVerifyArmType(bool); // NOLINT

    // private:
    /**
     * @symbol ?_attachedBlockWalker\@PistonBlockActor\@\@AEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@EE\@Z
     */
    MCAPI bool _attachedBlockWalker(class BlockSource&, class BlockPos const&, unsigned char, unsigned char); // NOLINT
    /**
     * @symbol ?_checkAttachedBlocks\@PistonBlockActor\@\@AEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool _checkAttachedBlocks(class BlockSource&); // NOLINT
    /**
     * @symbol
     * ?_checkInceptionAchievement\@PistonBlockActor\@\@AEAAXAEAVBlockActor\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _checkInceptionAchievement(class BlockActor&, class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?_handleSlimeConnections\@PistonBlockActor\@\@AEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@EE\@Z
     */
    MCAPI bool
    _handleSlimeConnections(class BlockSource&, class BlockPos const&, unsigned char, unsigned char); // NOLINT
    /**
     * @symbol ?_hasBlockAttached\@PistonBlockActor\@\@AEAA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool _hasBlockAttached(class BlockPos const&); // NOLINT
    /**
     * @symbol ?_moveCollidedEntities\@PistonBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _moveCollidedEntities(class BlockSource&); // NOLINT
    /**
     * @symbol
     * ?_moveCollidedEntitiesHelper\@PistonBlockActor\@\@AEAAXAEAVBlockSource\@\@AEBVAABB\@\@AEBVBlockPos\@\@PEAVActor\@\@I\@Z
     */
    MCAPI void _moveCollidedEntitiesHelper(
        class BlockSource&,
        class AABB const&,
        class BlockPos const&,
        class Actor*,
        unsigned int
    ); // NOLINT
    /**
     * @symbol ?_sortAttachedBlocks\@PistonBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _sortAttachedBlocks(class BlockSource&); // NOLINT
    /**
     * @symbol ?_spawnBlocks\@PistonBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _spawnBlocks(class BlockSource&); // NOLINT
    /**
     * @symbol ?_spawnMovingBlock\@PistonBlockActor\@\@AEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _spawnMovingBlock(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?_spawnMovingBlocks\@PistonBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _spawnMovingBlocks(class BlockSource&); // NOLINT
    /**
     * @symbol
     * ?_spawnResourcesForBlockAndExtraBlock\@PistonBlockActor\@\@CAXAEAVBlockSource\@\@AEBVBlockPos\@\@VRandomize\@\@AEBUResourceDropsContext\@\@\@Z
     */
    MCAPI static void
    _spawnResourcesForBlockAndExtraBlock(class BlockSource&, class BlockPos const&, class Randomize, struct ResourceDropsContext const&); // NOLINT

private:
    /**
     * @symbol ?ARM_ANIMATION_SPEED\@PistonBlockActor\@\@0MB
     */
    MCAPI static float const ARM_ANIMATION_SPEED; // NOLINT
};
