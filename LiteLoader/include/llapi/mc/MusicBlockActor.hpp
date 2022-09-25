/**
 * @file  MusicBlockActor.hpp
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
 * @brief MC class MusicBlockActor.
 *
 */
class MusicBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MUSICBLOCKACTOR
public:
    class MusicBlockActor& operator=(class MusicBlockActor const &) = delete;
    MusicBlockActor(class MusicBlockActor const &) = delete;
    MusicBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MusicBlockActor();
    /**
     * @hash   1958906164
     * @vftbl  1
     * @symbol ?load@MusicBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1052760851
     * @vftbl  2
     * @symbol ?save@MusicBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
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
     * @hash   -1330200592
     * @symbol ??0MusicBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI MusicBlockActor(class BlockPos const &);
    /**
     * @hash   -1802671253
     * @symbol ?playNote@MusicBlockActor@@QEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void playNote(class BlockSource &, class BlockPos const &);
    /**
     * @hash   1176601619
     * @symbol ?tune@MusicBlockActor@@QEAAXXZ
     */
    MCAPI void tune();

};