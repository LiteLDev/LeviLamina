/**
 * @file  PistonBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~PistonBlockActor();
    /**
     * @hash   -1312484168
     * @vftbl  1
     * @symbol ?load@PistonBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1604865751
     * @vftbl  2
     * @symbol ?save@PistonBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   1208048561
     * @vftbl  7
     * @symbol ?tick@PistonBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @hash   1068730653
     * @vftbl  13
     * @symbol ?onRemoved@PistonBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onRemoved(class BlockSource &);
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   -1881284226
     * @vftbl  27
     * @symbol ?getOwningPiston@PistonBlockActor@@UEAAPEAV1@AEAVBlockSource@@@Z
     */
    virtual class PistonBlockActor * getOwningPiston(class BlockSource &);
    /**
     * @vftbl  28
     * @symbol __unk_vfn_28
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @hash   1407010544
     * @vftbl  31
     * @symbol ?getDeletionDelayTimeSeconds@PistonBlockActor@@UEBAMXZ
     */
    virtual float getDeletionDelayTimeSeconds() const;
    /**
     * @vftbl  32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @hash   1896198458
     * @vftbl  35
     * @symbol ?_getUpdatePacket@PistonBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   47569480
     * @vftbl  36
     * @symbol ?_onUpdatePacket@PistonBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   1216534825
     * @symbol ??0PistonBlockActor@@QEAA@AEBVBlockPos@@_N@Z
     */
    MCAPI PistonBlockActor(class BlockPos const &, bool);
    /**
     * @hash   -532855872
     * @symbol ?getAttachedBlocks@PistonBlockActor@@QEBAAEBV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@XZ
     */
    MCAPI std::vector<class BlockPos> const & getAttachedBlocks() const;
    /**
     * @hash   970889861
     * @symbol ?getCorrectArmBlock@PistonBlockActor@@QEBAPEBVBlock@@XZ
     */
    MCAPI class Block const * getCorrectArmBlock() const;
    /**
     * @hash   1205476931
     * @symbol ?getFacingDir@PistonBlockActor@@QEBAAEBVBlockPos@@AEBVIConstBlockSource@@@Z
     */
    MCAPI class BlockPos const & getFacingDir(class IConstBlockSource const &) const;
    /**
     * @hash   -1965539181
     * @symbol ?getProgress@PistonBlockActor@@QEBAMM@Z
     */
    MCAPI float getProgress(float) const;
    /**
     * @hash   -1298231934
     * @symbol ?isExpanded@PistonBlockActor@@QEBA_NXZ
     */
    MCAPI bool isExpanded() const;
    /**
     * @hash   -1349625478
     * @symbol ?isExpanding@PistonBlockActor@@QEBA_NXZ
     */
    MCAPI bool isExpanding() const;
    /**
     * @hash   -871912036
     * @symbol ?isMoving@PistonBlockActor@@QEBA_NXZ
     */
    MCAPI bool isMoving() const;
    /**
     * @hash   -1901350326
     * @symbol ?isRetracted@PistonBlockActor@@QEBA_NXZ
     */
    MCAPI bool isRetracted() const;
    /**
     * @hash   1426695730
     * @symbol ?isRetracting@PistonBlockActor@@QEBA_NXZ
     */
    MCAPI bool isRetracting() const;
    /**
     * @hash   534470433
     * @symbol ?moveEntityLastProgress@PistonBlockActor@@QEAAXAEAVActor@@VVec3@@@Z
     */
    MCAPI void moveEntityLastProgress(class Actor &, class Vec3);
    /**
     * @hash   -245775056
     * @symbol ?setShouldVerifyArmType@PistonBlockActor@@QEAAX_N@Z
     */
    MCAPI void setShouldVerifyArmType(bool);

//private:
    /**
     * @hash   437245379
     * @symbol ?_attachedBlockWalker@PistonBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@EE@Z
     */
    MCAPI bool _attachedBlockWalker(class BlockSource &, class BlockPos const &, unsigned char, unsigned char);
    /**
     * @hash   2008528668
     * @symbol ?_checkAttachedBlocks@PistonBlockActor@@AEAA_NAEAVBlockSource@@@Z
     */
    MCAPI bool _checkAttachedBlocks(class BlockSource &);
    /**
     * @hash   51798428
     * @symbol ?_checkInceptionAchievement@PistonBlockActor@@AEAAXAEAVBlockActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void _checkInceptionAchievement(class BlockActor &, class BlockSource &, class BlockPos const &);
    /**
     * @hash   187142855
     * @symbol ?_handleSlimeConnections@PistonBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@EE@Z
     */
    MCAPI bool _handleSlimeConnections(class BlockSource &, class BlockPos const &, unsigned char, unsigned char);
    /**
     * @hash   -1589500233
     * @symbol ?_hasBlockAttached@PistonBlockActor@@AEAA_NAEBVBlockPos@@@Z
     */
    MCAPI bool _hasBlockAttached(class BlockPos const &);
    /**
     * @hash   703317554
     * @symbol ?_moveCollidedEntities@PistonBlockActor@@AEAAXAEAVBlockSource@@@Z
     */
    MCAPI void _moveCollidedEntities(class BlockSource &);
    /**
     * @hash   -1500657276
     * @symbol ?_moveCollidedEntitiesHelper@PistonBlockActor@@AEAAXAEAVBlockSource@@AEBVAABB@@AEBVBlockPos@@PEAVActor@@I@Z
     */
    MCAPI void _moveCollidedEntitiesHelper(class BlockSource &, class AABB const &, class BlockPos const &, class Actor *, unsigned int);
    /**
     * @hash   -99307438
     * @symbol ?_sortAttachedBlocks@PistonBlockActor@@AEAAXAEAVBlockSource@@@Z
     */
    MCAPI void _sortAttachedBlocks(class BlockSource &);
    /**
     * @hash   773601319
     * @symbol ?_spawnBlocks@PistonBlockActor@@AEAAXAEAVBlockSource@@@Z
     */
    MCAPI void _spawnBlocks(class BlockSource &);
    /**
     * @hash   7804217
     * @symbol ?_spawnMovingBlocks@PistonBlockActor@@AEAAXAEAVBlockSource@@@Z
     */
    MCAPI void _spawnMovingBlocks(class BlockSource &);

private:
    /**
     * @hash   166299731
     * @symbol ?ARM_ANIMATION_SPEED@PistonBlockActor@@0MB
     */
    MCAPI static float const ARM_ANIMATION_SPEED;

};