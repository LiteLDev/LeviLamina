#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class MovingBlockActor : public ::BlockActor {

public:
    // prevent constructor by default
    MovingBlockActor& operator=(MovingBlockActor const&) = delete;
    MovingBlockActor(MovingBlockActor const&)            = delete;
    MovingBlockActor()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?load\@MovingBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?save\@MovingBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?tick\@MovingBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource&); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?isPreserved\@MovingBlockActor\@\@UEBA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool isPreserved(class BlockSource&) const; // NOLINT
    /**
     * @vftbl 15
     * @symbol ?shouldPreserve\@MovingBlockActor\@\@UEAA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool shouldPreserve(class BlockSource&); // NOLINT
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18(); // NOLINT
    /**
     * @vftbl 22
     * @symbol ?getCollisionShape\@MovingBlockActor\@\@UEBA?AVAABB\@\@AEBVIConstBlockSource\@\@\@Z
     */
    virtual class AABB getCollisionShape(class IConstBlockSource const&) const; // NOLINT
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
     * ?_getUpdatePacket\@MovingBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @vftbl 41
     * @symbol ?_onUpdatePacket\@MovingBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVINGBLOCKACTOR
    /**
     * @symbol ?getOwningPiston\@MovingBlockActor\@\@UEAAPEAVPistonBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI class PistonBlockActor* getOwningPiston(class BlockSource&); // NOLINT
    /**
     * @symbol ?getOwningPiston\@MovingBlockActor\@\@UEBAPEBVPistonBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI class PistonBlockActor const* getOwningPiston(class BlockSource&) const; // NOLINT
#endif
    /**
     * @symbol ??0MovingBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI MovingBlockActor(class BlockPos const&); // NOLINT
    /**
     * @symbol ?_validPistonPos\@MovingBlockActor\@\@QEBA_NAEBVIConstBlockSource\@\@\@Z
     */
    MCAPI bool _validPistonPos(class IConstBlockSource const&) const; // NOLINT
    /**
     * @symbol ?getDrawPos\@MovingBlockActor\@\@QEBA?AVVec3\@\@AEBVIConstBlockSource\@\@M\@Z
     */
    MCAPI class Vec3 getDrawPos(class IConstBlockSource const&, float) const; // NOLINT
    /**
     * @symbol ?moveCollidedEntities\@MovingBlockActor\@\@QEAAXAEAVPistonBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void moveCollidedEntities(class PistonBlockActor&, class BlockSource&); // NOLINT
};
