/**
 * @file  BedBlockActor.hpp
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
     * @symbol  __unk_destructor_0
     */
    virtual ~BedBlockActor();
    /**
     * @hash   1581604752
     * @vftbl  1
     * @symbol  ?load\@BedBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1176255153
     * @vftbl  2
     * @symbol  ?save\@BedBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   1773994894
     * @vftbl  3
     * @symbol  ?saveItemInstanceData\@BedBlockActor\@\@UEAA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool saveItemInstanceData(class CompoundTag &);
    /**
     * @hash   -1444515831
     * @vftbl  7
     * @symbol  ?tick\@BedBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @hash   -245527071
     * @vftbl  8
     * @symbol  ?onChanged\@BedBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @hash   -1681858162
     * @vftbl  11
     * @symbol  ?onPlace\@BedBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onPlace(class BlockSource &);
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
     * @hash   657013097
     * @vftbl  21
     * @symbol  ?getCrackEntity\@BedBlockActor\@\@UEAAPEAVBlockActor\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class BlockActor * getCrackEntity(class BlockSource &, class BlockPos const &);
    /**
     * @hash   2015859810
     * @vftbl  26
     * @symbol  ?getName\@BedBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
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
     * @hash   552744002
     * @vftbl  37
     * @symbol  ?_getUpdatePacket\@BedBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   -1167403152
     * @vftbl  38
     * @symbol  ?_onUpdatePacket\@BedBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   918608044
     * @symbol  ??0BedBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI BedBlockActor(class BlockPos const &);
    /**
     * @hash   1923713005
     * @symbol  ?claimPetSleepOnBed\@BedBlockActor\@\@QEAA_NUActorUniqueID\@\@\@Z
     */
    MCAPI bool claimPetSleepOnBed(struct ActorUniqueID);
    /**
     * @hash   -499037395
     * @symbol  ?startSleepingOn\@BedBlockActor\@\@QEAAXXZ
     */
    MCAPI void startSleepingOn();
    /**
     * @hash   1749278581
     * @symbol  ?stopSleepingOn\@BedBlockActor\@\@QEAAXAEAVBlockSource\@\@_N\@Z
     */
    MCAPI void stopSleepingOn(class BlockSource &, bool);

};