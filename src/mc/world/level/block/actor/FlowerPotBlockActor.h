#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class FlowerPotBlockActor : public ::BlockActor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOWERPOTBLOCKACTOR
public:
    FlowerPotBlockActor& operator=(FlowerPotBlockActor const&) = delete;
    FlowerPotBlockActor(FlowerPotBlockActor const&)            = delete;
    FlowerPotBlockActor()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@FlowerPotBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 2
     * @symbol ?save\@FlowerPotBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const;
    /**
     * @vftbl 8
     * @symbol ?onChanged\@FlowerPotBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource&);
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
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
     * ?_getUpdatePacket\@FlowerPotBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    /**
     * @vftbl 41
     * @symbol ?_onUpdatePacket\@FlowerPotBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    /**
     * @symbol ??0FlowerPotBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI FlowerPotBlockActor(class BlockPos const&);
    /**
     * @symbol ?getPlantItem\@FlowerPotBlockActor\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const* getPlantItem() const;
    /**
     * @symbol ?setPlantItem\@FlowerPotBlockActor\@\@QEAAXPEBVBlock\@\@\@Z
     */
    MCAPI void setPlantItem(class Block const*);
};
