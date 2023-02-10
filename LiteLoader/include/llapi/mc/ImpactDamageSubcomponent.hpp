/**
 * @file  ImpactDamageSubcomponent.hpp
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
 * @brief MC class ImpactDamageSubcomponent.
 *
 */
class ImpactDamageSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMPACTDAMAGESUBCOMPONENT
public:
    class ImpactDamageSubcomponent& operator=(class ImpactDamageSubcomponent const &) = delete;
    ImpactDamageSubcomponent(class ImpactDamageSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ImpactDamageSubcomponent();
    /**
     * @hash   1329115334
     * @vftbl  1
     * @symbol  ?readfromJSON\@ImpactDamageSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @hash   644820643
     * @vftbl  2
     * @symbol  ?writetoJSON\@ImpactDamageSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @hash   -489556416
     * @vftbl  3
     * @symbol  ?doOnHitEffect\@ImpactDamageSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @hash   -496812325
     * @vftbl  4
     * @symbol  ?getName\@ImpactDamageSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const * getName();
    /**
     * @hash   -1258385746
     * @symbol  ??0ImpactDamageSubcomponent\@\@QEAA\@XZ
     */
    MCAPI ImpactDamageSubcomponent();

};