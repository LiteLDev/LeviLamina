/**
 * @file  PistonBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PistonBlockActor.
 *
 */
class PistonBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PISTONBLOCKACTOR
public:
    class PistonBlockActor& operator=(class PistonBlockActor const &) = delete;
    PistonBlockActor(class PistonBlockActor const &) = delete;
    PistonBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PistonBlockActor();
    /**
     * @vftbl  1
     * @symbol  ?load\@PistonBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol  ?save\@PistonBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  7
     * @symbol  ?tick\@PistonBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol  ?onRemoved\@PistonBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onRemoved(class BlockSource &);
    /**
     * @vftbl  18
     * @symbol  __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  30
     * @symbol  ?getOwningPiston\@PistonBlockActor\@\@UEAAPEAV1\@AEAVBlockSource\@\@\@Z
     */
    virtual class PistonBlockActor * getOwningPiston(class BlockSource &);
    /**
     * @vftbl  31
     * @symbol  __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @symbol  __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol  __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol  __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol  __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @symbol  __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol  ?_getUpdatePacket\@PistonBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  38
     * @symbol  ?_onUpdatePacket\@PistonBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol  ??0PistonBlockActor\@\@QEAA\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI PistonBlockActor(class BlockPos const &, bool);
    /**
     * @symbol  ?getAttachedBlocks\@PistonBlockActor\@\@QEBAAEBV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class BlockPos> const & getAttachedBlocks() const;
    /**
     * @symbol  ?getCorrectArmBlock\@PistonBlockActor\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const * getCorrectArmBlock() const;
    /**
     * @symbol  ?getFacingDir\@PistonBlockActor\@\@QEBAAEBVBlockPos\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI class BlockPos const & getFacingDir(class IConstBlockSource const &) const;
    /**
     * @symbol  ?getProgress\@PistonBlockActor\@\@QEBAMM\@Z
     */
    MCAPI float getProgress(float) const;
    /**
     * @symbol  ?isExpanded\@PistonBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isExpanded() const;
    /**
     * @symbol  ?isExpanding\@PistonBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isExpanding() const;
    /**
     * @symbol  ?isMoving\@PistonBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isMoving() const;
    /**
     * @symbol  ?isRetracted\@PistonBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isRetracted() const;
    /**
     * @symbol  ?isRetracting\@PistonBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isRetracting() const;
    /**
     * @symbol  ?moveEntityLastProgress\@PistonBlockActor\@\@QEAAXAEAVActor\@\@VVec3\@\@\@Z
     */
    MCAPI void moveEntityLastProgress(class Actor &, class Vec3);
    /**
     * @symbol  ?setShouldVerifyArmType\@PistonBlockActor\@\@QEAAX_N\@Z
     */
    MCAPI void setShouldVerifyArmType(bool);

//private:
    /**
     * @symbol  ?_attachedBlockWalker\@PistonBlockActor\@\@AEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@EE\@Z
     */
    MCAPI bool _attachedBlockWalker(class BlockSource &, class BlockPos const &, unsigned char, unsigned char);
    /**
     * @symbol  ?_checkAttachedBlocks\@PistonBlockActor\@\@AEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool _checkAttachedBlocks(class BlockSource &);
    /**
     * @symbol  ?_checkInceptionAchievement\@PistonBlockActor\@\@AEAAXAEAVBlockActor\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _checkInceptionAchievement(class BlockActor &, class BlockSource &, class BlockPos const &);
    /**
     * @symbol  ?_handleSlimeConnections\@PistonBlockActor\@\@AEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@EE\@Z
     */
    MCAPI bool _handleSlimeConnections(class BlockSource &, class BlockPos const &, unsigned char, unsigned char);
    /**
     * @symbol  ?_hasBlockAttached\@PistonBlockActor\@\@AEAA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool _hasBlockAttached(class BlockPos const &);
    /**
     * @symbol  ?_moveCollidedEntities\@PistonBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _moveCollidedEntities(class BlockSource &);
    /**
     * @symbol  ?_moveCollidedEntitiesHelper\@PistonBlockActor\@\@AEAAXAEAVBlockSource\@\@AEBVAABB\@\@AEBVBlockPos\@\@PEAVActor\@\@I\@Z
     */
    MCAPI void _moveCollidedEntitiesHelper(class BlockSource &, class AABB const &, class BlockPos const &, class Actor *, unsigned int);
    /**
     * @symbol  ?_sortAttachedBlocks\@PistonBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _sortAttachedBlocks(class BlockSource &);
    /**
     * @symbol  ?_spawnBlocks\@PistonBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _spawnBlocks(class BlockSource &);
    /**
     * @symbol  ?_spawnMovingBlock\@PistonBlockActor\@\@AEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _spawnMovingBlock(class BlockSource &, class BlockPos const &);
    /**
     * @symbol  ?_spawnMovingBlocks\@PistonBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _spawnMovingBlocks(class BlockSource &);
    /**
     * @symbol  ?_spawnResourcesForBlockAndExtraBlock\@PistonBlockActor\@\@CAXAEAVBlockSource\@\@AEBVBlockPos\@\@VRandomize\@\@AEBUResourceDropsContext\@\@\@Z
     */
    MCAPI static void _spawnResourcesForBlockAndExtraBlock(class BlockSource &, class BlockPos const &, class Randomize, struct ResourceDropsContext const &);

private:
    /**
     * @symbol  ?ARM_ANIMATION_SPEED\@PistonBlockActor\@\@0MB
     */
    MCAPI static float const ARM_ANIMATION_SPEED;

};