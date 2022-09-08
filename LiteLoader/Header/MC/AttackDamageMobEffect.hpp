/**
 * @file  AttackDamageMobEffect.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MobEffect.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AttackDamageMobEffect.
 *
 */
class AttackDamageMobEffect : public MobEffect {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTACKDAMAGEMOBEFFECT
public:
    class AttackDamageMobEffect& operator=(class AttackDamageMobEffect const &) = delete;
    AttackDamageMobEffect(class AttackDamageMobEffect const &) = delete;
    AttackDamageMobEffect() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1408475032
     */
    virtual ~AttackDamageMobEffect();
    /**
     * @vftbl  6
     * @symbol ?getAttributeModifierValue@AttackDamageMobEffect@@UEBAMHAEBVAttributeModifier@@@Z
     * @hash   938787807
     */
    virtual float getAttributeModifierValue(int, class AttributeModifier const &) const;
    /**
     * @symbol ??0AttackDamageMobEffect@@QEAA@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_NHH@Z
     * @hash   1206668863
     */
    MCAPI AttackDamageMobEffect(int, std::string const &, std::string const &, bool, int, int);
    /**
     * @symbol ?getDamageAfterDamageBoost@AttackDamageMobEffect@@SAMMH@Z
     * @hash   1983225994
     */
    MCAPI static float getDamageAfterDamageBoost(float, int);
    /**
     * @symbol ?getDamageAfterWeakness@AttackDamageMobEffect@@SAMMH@Z
     * @hash   1528786538
     */
    MCAPI static float getDamageAfterWeakness(float, int);

};