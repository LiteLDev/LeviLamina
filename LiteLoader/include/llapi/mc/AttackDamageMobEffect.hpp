/**
 * @file  AttackDamageMobEffect.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../MobEffect.hpp"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~AttackDamageMobEffect();
    /**
     * @hash   -100537537
     * @vftbl  6
     * @symbol  ?getAttributeModifierValue\@AttackDamageMobEffect\@\@UEBAMHAEBVAttributeModifier\@\@\@Z
     */
    virtual float getAttributeModifierValue(int, class AttributeModifier const &) const;
    /**
     * @hash   167328143
     * @symbol  ??0AttackDamageMobEffect\@\@QEAA\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_NHH\@Z
     */
    MCAPI AttackDamageMobEffect(int, std::string const &, std::string const &, bool, int, int);
    /**
     * @hash   943900650
     * @symbol  ?getDamageAfterDamageBoost\@AttackDamageMobEffect\@\@SAMMH\@Z
     */
    MCAPI static float getDamageAfterDamageBoost(float, int);
    /**
     * @hash   489461194
     * @symbol  ?getDamageAfterWeakness\@AttackDamageMobEffect\@\@SAMMH\@Z
     */
    MCAPI static float getDamageAfterWeakness(float, int);

};