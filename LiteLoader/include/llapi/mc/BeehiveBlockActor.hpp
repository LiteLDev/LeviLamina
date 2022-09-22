/**
 * @file  BeehiveBlockActor.hpp
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
 * @brief MC class BeehiveBlockActor.
 *
 */
class BeehiveBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There
public:
struct Occupant {
    Occupant() = delete;
    Occupant(Occupant const&) = delete;
    Occupant(Occupant const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEEHIVEBLOCKACTOR
public:
    class BeehiveBlockActor& operator=(class BeehiveBlockActor const &) = delete;
    BeehiveBlockActor(class BeehiveBlockActor const &) = delete;
    BeehiveBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BeehiveBlockActor();
    /**
     * @hash   1850684865
     * @vftbl  1
     * @symbol ?load@BeehiveBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -877152608
     * @vftbl  2
     * @symbol ?save@BeehiveBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   1160083242
     * @vftbl  7
     * @symbol ?tick@BeehiveBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
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
     * @hash   1986933677
     * @symbol ??0BeehiveBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI BeehiveBlockActor(class BlockPos const &);
    /**
     * @hash   1236217079
     * @symbol ?disableBeeSpawn@BeehiveBlockActor@@QEAAXXZ
     */
    MCAPI void disableBeeSpawn();
    /**
     * @hash   -989477933
     * @symbol ?evictAll@BeehiveBlockActor@@QEAAXAEAVBlockSource@@_N@Z
     */
    MCAPI void evictAll(class BlockSource &, bool);
    /**
     * @hash   297035076
     * @symbol ?saveUserData@BeehiveBlockActor@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void saveUserData(class CompoundTag &) const;
    /**
     * @hash   999314947
     * @symbol ?tryAdmit@BeehiveBlockActor@@QEAA_NAEAVActor@@@Z
     */
    MCAPI bool tryAdmit(class Actor &);
    /**
     * @hash   1586849245
     * @symbol ?MAX_OCCUPANCY@BeehiveBlockActor@@2IB
     */
    MCAPI static unsigned int const MAX_OCCUPANCY;
    /**
     * @hash   -677048141
     * @symbol ?TypeId@BeehiveBlockActor@@2W4BlockActorType@@B
     */
    MCAPI static enum BlockActorType const TypeId;
    /**
     * @hash   934248009
     * @symbol ?TypeString@BeehiveBlockActor@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TypeString;

//private:
    /**
     * @hash   1057502221
     * @symbol ?_revive@BeehiveBlockActor@@AEAAPEAVActor@@AEAVBlockSource@@AEBUOccupant@1@E@Z
     */
    MCAPI class Actor * _revive(class BlockSource &, struct BeehiveBlockActor::Occupant const &, unsigned char);
    /**
     * @hash   2099043513
     * @symbol ?_tickOccupant@BeehiveBlockActor@@AEAA_NAEAVBlockSource@@AEAUOccupant@1@@Z
     */
    MCAPI bool _tickOccupant(class BlockSource &, struct BeehiveBlockActor::Occupant &);
    /**
     * @hash   -102153806
     * @symbol ?_trySpawnBees@BeehiveBlockActor@@AEAAXAEAVBlockSource@@@Z
     */
    MCAPI void _trySpawnBees(class BlockSource &);

private:

};