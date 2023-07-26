#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class BedBlockActor : public ::BlockActor {

public:
    // prevent constructor by default
    BedBlockActor& operator=(BedBlockActor const&) = delete;
    BedBlockActor(BedBlockActor const&)            = delete;
    BedBlockActor()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?load\@BedBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?save\@BedBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?saveItemInstanceData\@BedBlockActor\@\@UEAA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool saveItemInstanceData(class CompoundTag&); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?tick\@BedBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource&); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?onChanged\@BedBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource&); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?onPlace\@BedBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onPlace(class BlockSource&); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18(); // NOLINT
    /**
     * @vftbl 21
     * @symbol ?getCrackEntity\@BedBlockActor\@\@UEAAPEAVBlockActor\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class BlockActor* getCrackEntity(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 26
     * @symbol
     * ?getName\@BedBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
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
     * ?_getUpdatePacket\@BedBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @vftbl 41
     * @symbol ?_onUpdatePacket\@BedBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
    /**
     * @symbol ??0BedBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI BedBlockActor(class BlockPos const&); // NOLINT
    /**
     * @symbol ?claimPetSleepOnBed\@BedBlockActor\@\@QEAA_NUActorUniqueID\@\@\@Z
     */
    MCAPI bool claimPetSleepOnBed(struct ActorUniqueID); // NOLINT
    /**
     * @symbol ?startSleepingOn\@BedBlockActor\@\@QEAAXXZ
     */
    MCAPI void startSleepingOn(); // NOLINT
    /**
     * @symbol ?stopSleepingOn\@BedBlockActor\@\@QEAAXAEAVBlockSource\@\@_N\@Z
     */
    MCAPI void stopSleepingOn(class BlockSource&, bool); // NOLINT
};
