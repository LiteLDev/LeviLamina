/**
 * @file  MC/CampfireBlockActor.hpp
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
 * @brief MC class CampfireBlockActor.
 *
 */
class CampfireBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMPFIREBLOCKACTOR
public:
    class CampfireBlockActor& operator=(class CampfireBlockActor const &) = delete;
    CampfireBlockActor(class CampfireBlockActor const &) = delete;
    CampfireBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CampfireBlockActor();
    /**
     * @hash   -305496938
     * @vftbl  1
     * @symbol ?load@CampfireBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1238533419
     * @vftbl  2
     * @symbol ?save@CampfireBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   -1496941009
     * @vftbl  7
     * @symbol ?tick@CampfireBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @hash   -1024104745
     * @vftbl  8
     * @symbol ?onChanged@CampfireBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onChanged(class BlockSource &);
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
     * @hash   1466783467
     * @vftbl  17
     * @symbol ?getShadowRadius@CampfireBlockActor@@UEBAMAEAVBlockSource@@@Z
     */
    virtual float getShadowRadius(class BlockSource &) const;
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
     * @hash   -2109467784
     * @vftbl  35
     * @symbol ?_getUpdatePacket@CampfireBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   615659914
     * @vftbl  36
     * @symbol ?_onUpdatePacket@CampfireBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   1869543074
     * @symbol ??0CampfireBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI CampfireBlockActor(class BlockPos const &);
    /**
     * @hash   1242122324
     * @symbol ?dropAllItems@CampfireBlockActor@@QEAAXAEAVBlockSource@@@Z
     */
    MCAPI void dropAllItems(class BlockSource &);
    /**
     * @hash   -192368727
     * @symbol ?getCampfireTag@CampfireBlockActor@@QEBAAEBVHashedString@@AEBVBlockSource@@@Z
     */
    MCAPI class HashedString const & getCampfireTag(class BlockSource const &) const;
    /**
     * @hash   1929921649
     * @symbol ?getCookingItem@CampfireBlockActor@@QEAAAEBVItemInstance@@H@Z
     */
    MCAPI class ItemInstance const & getCookingItem(int);
    /**
     * @hash   -498530390
     * @symbol ?setItem@CampfireBlockActor@@QEAA_NAEAVBlockSource@@AEBVItemInstance@@@Z
     */
    MCAPI bool setItem(class BlockSource &, class ItemInstance const &);
    /**
     * @hash   -1788249757
     * @symbol ?MAX_SMOKE_THRESHOLD_COUNTER@CampfireBlockActor@@2HB
     */
    MCAPI static int const MAX_SMOKE_THRESHOLD_COUNTER;
    /**
     * @hash   -1452782817
     * @symbol ?MIN_SMOKE_THRESHOLD_COUNTER@CampfireBlockActor@@2HB
     */
    MCAPI static int const MIN_SMOKE_THRESHOLD_COUNTER;

//private:
    /**
     * @hash   1038866704
     * @symbol ?_finishCooking@CampfireBlockActor@@AEAAXAEAVBlockSource@@H@Z
     */
    MCAPI void _finishCooking(class BlockSource &, int);

private:

};