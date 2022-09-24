/**
 * @file  BedBlockActor.hpp
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
 * @brief MC class BedBlockActor.
 *
 */
class BedBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDBLOCKACTOR
public:
    class BedBlockActor& operator=(class BedBlockActor const &) = delete;
    BedBlockActor(class BedBlockActor const &) = delete;
    BedBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BedBlockActor();
    /**
     * @hash   710861872
     * @vftbl  1
     * @symbol ?load@BedBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -2046998033
     * @vftbl  2
     * @symbol ?save@BedBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   903267390
     * @vftbl  3
     * @symbol ?saveItemInstanceData@BedBlockActor@@UEAA_NAEAVCompoundTag@@@Z
     */
    virtual bool saveItemInstanceData(class CompoundTag &);
    /**
     * @hash   1979723961
     * @vftbl  7
     * @symbol ?tick@BedBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @hash   -1116269951
     * @vftbl  8
     * @symbol ?onChanged@BedBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @hash   1742366254
     * @vftbl  11
     * @symbol ?onPlace@BedBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onPlace(class BlockSource &);
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
     * @hash   -213729783
     * @vftbl  19
     * @symbol ?getCrackEntity@BedBlockActor@@UEAAPEAVBlockActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual class BlockActor * getCrackEntity(class BlockSource &, class BlockPos const &);
    /**
     * @hash   1145116930
     * @vftbl  23
     * @symbol ?getName@BedBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
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
     * @hash   349104258
     * @vftbl  35
     * @symbol ?_getUpdatePacket@BedBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   -2037792384
     * @vftbl  36
     * @symbol ?_onUpdatePacket@BedBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   47849788
     * @symbol ??0BedBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI BedBlockActor(class BlockPos const &);
    /**
     * @hash   1052970125
     * @symbol ?claimPetSleepOnBed@BedBlockActor@@QEAA_NUActorUniqueID@@@Z
     */
    MCAPI bool claimPetSleepOnBed(struct ActorUniqueID);
    /**
     * @hash   -1369764899
     * @symbol ?startSleepingOn@BedBlockActor@@QEAAXXZ
     */
    MCAPI void startSleepingOn();
    /**
     * @hash   878551077
     * @symbol ?stopSleepingOn@BedBlockActor@@QEAAXAEAVBlockSource@@_N@Z
     */
    MCAPI void stopSleepingOn(class BlockSource &, bool);

};