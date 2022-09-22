/**
 * @file  MovingBlockActor.hpp
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
 * @brief MC class MovingBlockActor.
 *
 */
class MovingBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVINGBLOCKACTOR
public:
    class MovingBlockActor& operator=(class MovingBlockActor const &) = delete;
    MovingBlockActor(class MovingBlockActor const &) = delete;
    MovingBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MovingBlockActor();
    /**
     * @hash   2087042701
     * @vftbl  1
     * @symbol ?load@MovingBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1211544100
     * @vftbl  2
     * @symbol ?save@MovingBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   19487478
     * @vftbl  7
     * @symbol ?tick@MovingBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   -765697389
     * @vftbl  27
     * @symbol ?getOwningPiston@MovingBlockActor@@UEAAPEAVPistonBlockActor@@AEAVBlockSource@@@Z
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
     * @hash   536726747
     * @vftbl  31
     * @symbol ?getDeletionDelayTimeSeconds@MovingBlockActor@@UEBAMXZ
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
     * @hash   -798439761
     * @vftbl  35
     * @symbol ?_getUpdatePacket@MovingBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   510536563
     * @vftbl  36
     * @symbol ?_onUpdatePacket@MovingBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   -828914391
     * @symbol ??0MovingBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI MovingBlockActor(class BlockPos const &);
    /**
     * @hash   -1313830489
     * @symbol ?_validPistonPos@MovingBlockActor@@QEBA_NAEBVIConstBlockSource@@@Z
     */
    MCAPI bool _validPistonPos(class IConstBlockSource const &) const;
    /**
     * @hash   -1108021955
     * @symbol ?aquireBlockEntity@MovingBlockActor@@QEAA?AV?$shared_ptr@VBlockActor@@@std@@XZ
     */
    MCAPI class std::shared_ptr<class BlockActor> aquireBlockEntity();
    /**
     * @hash   715179994
     * @symbol ?getCollisionShape@MovingBlockActor@@QEBAAEBVAABB@@XZ
     */
    MCAPI class AABB const & getCollisionShape() const;
    /**
     * @hash   -263819958
     * @symbol ?getDrawPos@MovingBlockActor@@QEBA?AVVec3@@AEBVIConstBlockSource@@M@Z
     */
    MCAPI class Vec3 getDrawPos(class IConstBlockSource const &, float) const;
    /**
     * @hash   -487271864
     * @symbol ?getExtraBlock@MovingBlockActor@@QEAAAEBVBlock@@XZ
     */
    MCAPI class Block const & getExtraBlock();
    /**
     * @hash   332870040
     * @symbol ?getMovingBlock@MovingBlockActor@@QEBAAEBVBlock@@XZ
     */
    MCAPI class Block const & getMovingBlock() const;
    /**
     * @hash   64329547
     * @symbol ?moveCollidedEntities@MovingBlockActor@@QEAAXAEAVPistonBlockActor@@AEAVBlockSource@@@Z
     */
    MCAPI void moveCollidedEntities(class PistonBlockActor &, class BlockSource &);
    /**
     * @hash   1472059793
     * @symbol ?registerPiston@MovingBlockActor@@QEAAXAEBVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void registerPiston(class BlockSource const &, class BlockPos const &);
    /**
     * @hash   -90989434
     * @symbol ?setBlock@MovingBlockActor@@QEAAXAEBVBlock@@@Z
     */
    MCAPI void setBlock(class Block const &);
    /**
     * @hash   542985977
     * @symbol ?setBlockEntity@MovingBlockActor@@QEAAXV?$shared_ptr@VBlockActor@@@std@@@Z
     */
    MCAPI void setBlockEntity(class std::shared_ptr<class BlockActor>);
    /**
     * @hash   -414959726
     * @symbol ?setCollisionShape@MovingBlockActor@@QEAAXAEBVAABB@@@Z
     */
    MCAPI void setCollisionShape(class AABB const &);
    /**
     * @hash   -1282185544
     * @symbol ?setExtraBlock@MovingBlockActor@@QEAAXAEBVBlock@@@Z
     */
    MCAPI void setExtraBlock(class Block const &);

};