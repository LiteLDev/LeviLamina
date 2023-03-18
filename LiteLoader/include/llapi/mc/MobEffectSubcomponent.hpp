/**
 * @file  MobEffectSubcomponent.hpp
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
 * @brief MC class MobEffectSubcomponent.
 *
 */
class MobEffectSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEFFECTSUBCOMPONENT
public:
    class MobEffectSubcomponent& operator=(class MobEffectSubcomponent const &) = delete;
    MobEffectSubcomponent(class MobEffectSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?readfromJSON\@MobEffectSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @vftbl 2
     * @symbol ?writetoJSON\@MobEffectSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @vftbl 3
     * @symbol ?doOnHitEffect\@MobEffectSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @vftbl 4
     * @symbol ?getName\@MobEffectSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOBEFFECTSUBCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MobEffectSubcomponent();
#endif
    /**
     * @symbol ??0MobEffectSubcomponent\@\@QEAA\@XZ
     */
    MCAPI MobEffectSubcomponent();

//private:
    /**
     * @symbol ?_addEffectFromJSON\@MobEffectSubcomponent\@\@AEAAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _addEffectFromJSON(class Json::Value &);

private:

};
