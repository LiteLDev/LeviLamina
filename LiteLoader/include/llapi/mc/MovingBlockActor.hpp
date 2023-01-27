/**
 * @file  MovingBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../BlockActor.hpp"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~MovingBlockActor();
    /**
     * @hash   -1504780115
     * @vftbl  1
     * @symbol  ?load\@MovingBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -507969092
     * @vftbl  2
     * @symbol  ?save\@MovingBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   723216246
     * @vftbl  7
     * @symbol  ?tick\@MovingBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @hash   348095186
     * @vftbl  14
     * @symbol  ?isPreserved\@MovingBlockActor\@\@UEBA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool isPreserved(class BlockSource &) const;
    /**
     * @hash   2134259282
     * @vftbl  15
     * @symbol  ?shouldPreserve\@MovingBlockActor\@\@UEAA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool shouldPreserve(class BlockSource &);
    /**
     * @vftbl  18
     * @symbol  __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @hash   -1877304629
     * @vftbl  22
     * @symbol  ?getCollisionShape\@MovingBlockActor\@\@UEBA?AVAABB\@\@AEBVIConstBlockSource\@\@\@Z
     */
    virtual class AABB getCollisionShape(class IConstBlockSource const &) const;
    /**
     * @hash   -62675917
     * @vftbl  30
     * @symbol  ?getOwningPiston\@MovingBlockActor\@\@UEAAPEAVPistonBlockActor\@\@AEAVBlockSource\@\@\@Z
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
     * @hash   -594800017
     * @vftbl  37
     * @symbol  ?_getUpdatePacket\@MovingBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   1380925795
     * @vftbl  38
     * @symbol  ?_onUpdatePacket\@MovingBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   -126615591
     * @symbol  ??0MovingBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI MovingBlockActor(class BlockPos const &);
    /**
     * @hash   -611485561
     * @symbol  ?_validPistonPos\@MovingBlockActor\@\@QEBA_NAEBVIConstBlockSource\@\@\@Z
     */
    MCAPI bool _validPistonPos(class IConstBlockSource const &) const;
    /**
     * @hash   -857485427
     * @symbol  ?aquireWrappedBlockActor\@MovingBlockActor\@\@QEAA?AV?$shared_ptr\@VBlockActor\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class BlockActor> aquireWrappedBlockActor();
    /**
     * @hash   439201514
     * @symbol  ?getDrawPos\@MovingBlockActor\@\@QEBA?AVVec3\@\@AEBVIConstBlockSource\@\@M\@Z
     */
    MCAPI class Vec3 getDrawPos(class IConstBlockSource const &, float) const;
    /**
     * @hash   2004525702
     * @symbol  ?getWrappedBlock\@MovingBlockActor\@\@QEBAAEBVBlock\@\@XZ
     */
    MCAPI class Block const & getWrappedBlock() const;
    /**
     * @hash   548786730
     * @symbol  ?getWrappedExtraBlock\@MovingBlockActor\@\@QEAAAEBVBlock\@\@XZ
     */
    MCAPI class Block const & getWrappedExtraBlock();
    /**
     * @hash   767597035
     * @symbol  ?moveCollidedEntities\@MovingBlockActor\@\@QEAAXAEAVPistonBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void moveCollidedEntities(class PistonBlockActor &, class BlockSource &);
    /**
     * @hash   -2119409375
     * @symbol  ?registerPiston\@MovingBlockActor\@\@QEAAXAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void registerPiston(class BlockSource const &, class BlockPos const &);
    /**
     * @hash   -1785077832
     * @symbol  ?setWrappedBlock\@MovingBlockActor\@\@QEAAXAEBVBlock\@\@\@Z
     */
    MCAPI void setWrappedBlock(class Block const &);
    /**
     * @hash   1100300393
     * @symbol  ?setWrappedBlockActor\@MovingBlockActor\@\@QEAAXV?$shared_ptr\@VBlockActor\@\@\@std\@\@\@Z
     */
    MCAPI void setWrappedBlockActor(class std::shared_ptr<class BlockActor>);
    /**
     * @hash   -209123162
     * @symbol  ?setWrappedExtraBlock\@MovingBlockActor\@\@QEAAXAEBVBlock\@\@\@Z
     */
    MCAPI void setWrappedExtraBlock(class Block const &);

};