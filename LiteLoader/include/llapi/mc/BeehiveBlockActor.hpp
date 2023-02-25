/**
 * @file  BeehiveBlockActor.hpp
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
     * @symbol  __unk_destructor_0
     */
    virtual ~BeehiveBlockActor();
    /**
     * @vftbl  1
     * @symbol  ?load\@BeehiveBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol  ?save\@BeehiveBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  7
     * @symbol  ?tick\@BeehiveBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
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
     * @symbol  ??0BeehiveBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI BeehiveBlockActor(class BlockPos const &);
    /**
     * @symbol  ?disableBeeSpawn\@BeehiveBlockActor\@\@QEAAXXZ
     */
    MCAPI void disableBeeSpawn();
    /**
     * @symbol  ?evictAll\@BeehiveBlockActor\@\@QEAAXAEAVBlockSource\@\@_N\@Z
     */
    MCAPI void evictAll(class BlockSource &, bool);
    /**
     * @symbol  ?saveUserData\@BeehiveBlockActor\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void saveUserData(class CompoundTag &) const;
    /**
     * @symbol  ?tryAdmit\@BeehiveBlockActor\@\@QEAA_NAEAVActor\@\@\@Z
     */
    MCAPI bool tryAdmit(class Actor &);
    /**
     * @symbol  ?MAX_OCCUPANCY\@BeehiveBlockActor\@\@2IB
     */
    MCAPI static unsigned int const MAX_OCCUPANCY;

//private:
    /**
     * @symbol  ?_revive\@BeehiveBlockActor\@\@AEAAPEAVActor\@\@AEAVBlockSource\@\@AEBUOccupant\@1\@E\@Z
     */
    MCAPI class Actor * _revive(class BlockSource &, struct BeehiveBlockActor::Occupant const &, unsigned char);
    /**
     * @symbol  ?_tickOccupant\@BeehiveBlockActor\@\@AEAA_NAEAVBlockSource\@\@AEAUOccupant\@1\@\@Z
     */
    MCAPI bool _tickOccupant(class BlockSource &, struct BeehiveBlockActor::Occupant &);
    /**
     * @symbol  ?_trySpawnBees\@BeehiveBlockActor\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _trySpawnBees(class BlockSource &);

private:

};