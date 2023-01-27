/**
 * @file  MobEffectSubcomponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"

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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MobEffectSubcomponent();
    /**
     * @hash   -200359878
     * @vftbl  1
     * @symbol  ?readfromJSON\@MobEffectSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @hash   -440578609
     * @vftbl  2
     * @symbol  ?writetoJSON\@MobEffectSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @hash   1396827268
     * @vftbl  3
     * @symbol  ?doOnHitEffect\@MobEffectSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @hash   -1131234737
     * @vftbl  4
     * @symbol  ?getName\@MobEffectSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const * getName();
    /**
     * @hash   164845546
     * @symbol  ??0MobEffectSubcomponent\@\@QEAA\@XZ
     */
    MCAPI MobEffectSubcomponent();

//private:
    /**
     * @hash   515872720
     * @symbol  ?_addEffectFromJSON\@MobEffectSubcomponent\@\@AEAAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void _addEffectFromJSON(class Json::Value &);

private:

};