/**
 * @file  DouseFireSubcomponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DouseFireSubcomponent.
 *
 */
class DouseFireSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOUSEFIRESUBCOMPONENT
public:
    class DouseFireSubcomponent& operator=(class DouseFireSubcomponent const &) = delete;
    DouseFireSubcomponent(class DouseFireSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DouseFireSubcomponent();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  ?doOnHitEffect\@DouseFireSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @vftbl  4
     * @symbol  ?getName\@DouseFireSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DOUSEFIRESUBCOMPONENT
    /**
     * @symbol  ?readfromJSON\@DouseFireSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCVAPI void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @symbol  ?writetoJSON\@DouseFireSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    MCVAPI void writetoJSON(class Json::Value &) const;
#endif
    /**
     * @symbol  ??0DouseFireSubcomponent\@\@QEAA\@XZ
     */
    MCAPI DouseFireSubcomponent();
    /**
     * @symbol  ?douseFire\@DouseFireSubcomponent\@\@QEAAXAEAVActor\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void douseFire(class Actor &, class BlockSource &, class BlockPos const &);

};