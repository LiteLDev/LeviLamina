/**
 * @file  CampfireBlockActor.hpp
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
     * @symbol  __unk_destructor_0
     */
    virtual ~CampfireBlockActor();
    /**
     * @vftbl  1
     * @symbol  ?load\@CampfireBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol  ?save\@CampfireBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  7
     * @symbol  ?tick\@CampfireBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  8
     * @symbol  ?onChanged\@CampfireBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  18
     * @symbol  __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  19
     * @symbol  ?getShadowRadius\@CampfireBlockActor\@\@UEBAMAEAVBlockSource\@\@\@Z
     */
    virtual float getShadowRadius(class BlockSource &) const;
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
     * @vftbl  37
     * @symbol  ?_getUpdatePacket\@CampfireBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  38
     * @symbol  ?_onUpdatePacket\@CampfireBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol  ??0CampfireBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI CampfireBlockActor(class BlockPos const &);
    /**
     * @symbol  ?dropAllItems\@CampfireBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void dropAllItems(class BlockSource &);
    /**
     * @symbol  ?getCampfireTag\@CampfireBlockActor\@\@QEBAAEBVHashedString\@\@AEBVBlockSource\@\@\@Z
     */
    MCAPI class HashedString const & getCampfireTag(class BlockSource const &) const;
    /**
     * @symbol  ?getCookingItem\@CampfireBlockActor\@\@QEAAAEBVItemInstance\@\@H\@Z
     */
    MCAPI class ItemInstance const & getCookingItem(int);
    /**
     * @symbol  ?setItem\@CampfireBlockActor\@\@QEAA_NAEAVBlockSource\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI bool setItem(class BlockSource &, class ItemInstance const &);
    /**
     * @symbol  ?MAX_SMOKE_THRESHOLD_COUNTER\@CampfireBlockActor\@\@2HB
     */
    MCAPI static int const MAX_SMOKE_THRESHOLD_COUNTER;
    /**
     * @symbol  ?MIN_SMOKE_THRESHOLD_COUNTER\@CampfireBlockActor\@\@2HB
     */
    MCAPI static int const MIN_SMOKE_THRESHOLD_COUNTER;

//private:
    /**
     * @symbol  ?_finishCooking\@CampfireBlockActor\@\@AEAAXAEAVBlockSource\@\@H\@Z
     */
    MCAPI void _finishCooking(class BlockSource &, int);
    /**
     * @symbol  ?_removeItem\@CampfireBlockActor\@\@AEAAXH\@Z
     */
    MCAPI void _removeItem(int);

private:

};