/**
 * @file  MC/MobEffectSubcomponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MobEffectSubcomponent();
    /**
     * @hash   730318650
     * @vftbl  1
     * @symbol ?readfromJSON@MobEffectSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @hash   490099919
     * @vftbl  2
     * @symbol ?writetoJSON@MobEffectSubcomponent@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @hash   -1966369804
     * @vftbl  3
     * @symbol ?doOnHitEffect@MobEffectSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @hash   -200125681
     * @vftbl  4
     * @symbol ?getName@MobEffectSubcomponent@@UEAAPEBDXZ
     */
    virtual char const * getName();
    /**
     * @hash   1097522954
     * @symbol ??0MobEffectSubcomponent@@QEAA@XZ
     */
    MCAPI MobEffectSubcomponent();

//private:
    /**
     * @hash   1448596256
     * @symbol ?_addEffectFromJSON@MobEffectSubcomponent@@AEAAXAEAVValue@Json@@@Z
     */
    MCAPI void _addEffectFromJSON(class Json::Value &);

private:

};