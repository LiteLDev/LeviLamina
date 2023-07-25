#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class MobSpawnerBlockActor : public ::BlockActor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBSPAWNERBLOCKACTOR
public:
    MobSpawnerBlockActor& operator=(MobSpawnerBlockActor const&) = delete;
    MobSpawnerBlockActor(MobSpawnerBlockActor const&)            = delete;
    MobSpawnerBlockActor()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@MobSpawnerBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 2
     * @symbol ?save\@MobSpawnerBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const;
    /**
     * @vftbl 7
     * @symbol ?tick\@MobSpawnerBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource&);
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 13
     * @symbol ?onRemoved\@MobSpawnerBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onRemoved(class BlockSource&);
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
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
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl 40
     * @symbol
     * ?_getUpdatePacket\@MobSpawnerBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    /**
     * @vftbl 41
     * @symbol ?_onUpdatePacket\@MobSpawnerBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    /**
     * @symbol ??0MobSpawnerBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI MobSpawnerBlockActor(class BlockPos const&);
    /**
     * @symbol ?getSpawner\@MobSpawnerBlockActor\@\@QEAAAEAVBaseMobSpawner\@\@XZ
     */
    MCAPI class BaseMobSpawner& getSpawner();
    /**
     * @symbol
     * ?setMob\@MobSpawnerBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBUActorDefinitionIdentifier\@\@PEAVActor\@\@\@Z
     */
    MCAPI void setMob(class BlockSource&, struct ActorDefinitionIdentifier const&, class Actor*);
};
