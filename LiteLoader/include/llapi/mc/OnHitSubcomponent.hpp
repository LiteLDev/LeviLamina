/**
 * @file  OnHitSubcomponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OnHitSubcomponent.
 *
 */
class OnHitSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONHITSUBCOMPONENT
public:
    class OnHitSubcomponent& operator=(class OnHitSubcomponent const &) = delete;
    OnHitSubcomponent(class OnHitSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?readfromJSON\@SpawnAoECloudSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &) = 0;
    /**
     * @vftbl 2
     * @symbol ?writetoJSON\@SpawnAoECloudSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void writetoJSON(class Json::Value &) const = 0;
    /**
     * @vftbl 3
     * @symbol ?doOnHitEffect\@SpawnAoECloudSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &) = 0;
    /**
     * @vftbl 4
     * @symbol ?getName\@OnHitSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONHITSUBCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OnHitSubcomponent();
#endif
    /**
     * @symbol ??0OnHitSubcomponent\@\@QEAA\@XZ
     */
    MCAPI OnHitSubcomponent();

//protected:
    /**
     * @symbol ?_canAttack\@OnHitSubcomponent\@\@IEBA_NPEAVActor\@\@0\@Z
     */
    MCAPI bool _canAttack(class Actor *, class Actor *) const;

protected:

};
