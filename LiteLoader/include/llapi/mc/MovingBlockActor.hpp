/**
 * @file  MovingBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@MovingBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 2
     * @symbol ?save\@MovingBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl 7
     * @symbol ?tick\@MovingBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 14
     * @symbol ?isPreserved\@MovingBlockActor\@\@UEBA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool isPreserved(class BlockSource &) const;
    /**
     * @vftbl 15
     * @symbol ?shouldPreserve\@MovingBlockActor\@\@UEAA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool shouldPreserve(class BlockSource &);
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl 22
     * @symbol ?getCollisionShape\@MovingBlockActor\@\@UEBA?AVAABB\@\@AEBVIConstBlockSource\@\@\@Z
     */
    virtual class AABB getCollisionShape(class IConstBlockSource const &) const;
    /**
     * @vftbl 30
     * @symbol ?getOwningPiston\@MovingBlockActor\@\@UEAAPEAVPistonBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    virtual class PistonBlockActor * getOwningPiston(class BlockSource &);
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl 39
     * @symbol ?_getUpdatePacket\@MovingBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl 40
     * @symbol ?_onUpdatePacket\@MovingBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ??0MovingBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI MovingBlockActor(class BlockPos const &);
    /**
     * @symbol ?_validPistonPos\@MovingBlockActor\@\@QEBA_NAEBVIConstBlockSource\@\@\@Z
     */
    MCAPI bool _validPistonPos(class IConstBlockSource const &) const;
    /**
     * @symbol ?getDrawPos\@MovingBlockActor\@\@QEBA?AVVec3\@\@AEBVIConstBlockSource\@\@M\@Z
     */
    MCAPI class Vec3 getDrawPos(class IConstBlockSource const &, float) const;
    /**
     * @symbol ?moveCollidedEntities\@MovingBlockActor\@\@QEAAXAEAVPistonBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void moveCollidedEntities(class PistonBlockActor &, class BlockSource &);

};
