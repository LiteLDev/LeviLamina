/**
 * @file  MobEffect.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MobEffect.
 *
 */
class MobEffect {

#define AFTER_EXTRA
// Add Member There
public:
    enum class EffectType : short
    {
        Empty          = 0,
        Speed          = 1,
        Slowness       = 2,
        Haste          = 3,
        MiningFatigue  = 4,
        Strength       = 5,
        InstantHealth  = 6,
        InstantDamage  = 7,
        JumpBoost      = 8,
        Nausea         = 9,
        Regeneration   = 10,
        Resistance     = 11,
        FireResistance = 12,
        WaterBreathing = 13,
        Invisibility   = 14,
        Blindness      = 15,
        NightVision    = 16,
        Hunger         = 17,
        Weakness       = 18,
        Poison         = 19,
        Wither         = 20,
        HealthBoost    = 21,
        Absorption     = 22,
        Saturation     = 23,
        Levitation     = 24,
        FatalPoison    = 25,
        ConduitPower   = 26,
        SlowFalling    = 27,
        BadOmen        = 28,
        VillageHero    = 29,
    };
    struct FactorCalculationData {
        FactorCalculationData() = delete;
        FactorCalculationData(FactorCalculationData const&) = delete;
        FactorCalculationData(FactorCalculationData const&&) = delete;
    };

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEFFECT
public:
    class MobEffect& operator=(class MobEffect const &) = delete;
    MobEffect(class MobEffect const &) = delete;
    MobEffect() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MobEffect();
    /**
     * @hash   1977414616
     * @vftbl  1
     * @symbol  ?applyEffects\@MobEffect\@\@UEBAXPEAVActor\@\@HH\@Z
     */
    virtual void applyEffects(class Actor *, int, int) const;
    /**
     * @hash   -1141098657
     * @vftbl  2
     * @symbol  ?removeEffects\@MobEffect\@\@UEAAXPEAVActor\@\@\@Z
     */
    virtual void removeEffects(class Actor *);
    /**
     * @hash   -1068613980
     * @vftbl  3
     * @symbol  ?updateEffects\@MobEffect\@\@UEAAXPEAVActor\@\@HH\@Z
     */
    virtual void updateEffects(class Actor *, int, int);
    /**
     * @hash   1241991574
     * @vftbl  4
     * @symbol  ?applyInstantaneousEffect\@MobEffect\@\@UEBAXPEAVActor\@\@00HM\@Z
     */
    virtual void applyInstantaneousEffect(class Actor *, class Actor *, class Actor *, int, float) const;
    /**
     * @hash   -674980429
     * @vftbl  5
     * @symbol  ?isInstantaneous\@MobEffect\@\@UEBA_NXZ
     */
    virtual bool isInstantaneous() const;
    /**
     * @hash   -1917906744
     * @vftbl  6
     * @symbol  ?getAttributeModifierValue\@MobEffect\@\@UEBAMHAEBVAttributeModifier\@\@\@Z
     */
    virtual float getAttributeModifierValue(int, class AttributeModifier const &) const;
    /**
     * @hash   -503093877
     * @symbol  ??0MobEffect\@\@QEAA\@IAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_NHH01AEBUFactorCalculationData\@0\@\@Z
     */
    MCAPI MobEffect(unsigned int, std::string const &, std::string const &, bool, int, int, std::string const &, bool, struct MobEffect::FactorCalculationData const &);
    /**
     * @hash   -1879715828
     * @symbol  ?addAttributeBuff\@MobEffect\@\@QEAAXAEBVAttribute\@\@V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@\@Z
     */
    MCAPI void addAttributeBuff(class Attribute const &, class std::shared_ptr<class AttributeBuff>);
    /**
     * @hash   -181656372
     * @symbol  ?addAttributeModifier\@MobEffect\@\@QEAAXAEBVAttribute\@\@V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@\@Z
     */
    MCAPI void addAttributeModifier(class Attribute const &, class std::shared_ptr<class AttributeModifier>);
    /**
     * @hash   -1468469804
     * @symbol  ?getColor\@MobEffect\@\@QEBAAEBVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color const & getColor() const;
    /**
     * @hash   2119996670
     * @symbol  ?getComponentName\@MobEffect\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getComponentName() const;
    /**
     * @hash   -1682727602
     * @symbol  ?getDescriptionId\@MobEffect\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getDescriptionId() const;
    /**
     * @hash   1808700104
     * @symbol  ?getDurationModifier\@MobEffect\@\@QEBAMXZ
     */
    MCAPI float getDurationModifier() const;
    /**
     * @hash   -1538355942
     * @symbol  ?getFactorCalculationData\@MobEffect\@\@QEBAAEBUFactorCalculationData\@1\@XZ
     */
    MCAPI struct MobEffect::FactorCalculationData const & getFactorCalculationData() const;
    /**
     * @hash   2127827764
     * @symbol  ?getId\@MobEffect\@\@QEBAIXZ
     */
    MCAPI unsigned int getId() const;
    /**
     * @hash   -1803757300
     * @symbol  ?getResourceName\@MobEffect\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getResourceName() const;
    /**
     * @hash   1289142428
     * @symbol  ?isHarmful\@MobEffect\@\@QEBA_NXZ
     */
    MCAPI bool isHarmful() const;
    /**
     * @hash   1184873548
     * @symbol  ?isVisible\@MobEffect\@\@QEBA_NXZ
     */
    MCAPI bool isVisible() const;
    /**
     * @hash   220584723
     * @symbol  ?setDurationAmplifier\@MobEffect\@\@QEAAXV?$shared_ptr\@VAmplifier\@\@\@std\@\@\@Z
     */
    MCAPI void setDurationAmplifier(class std::shared_ptr<class Amplifier>);
    /**
     * @hash   -140053435
     * @symbol  ?setValueAmplifier\@MobEffect\@\@QEAAXV?$shared_ptr\@VAmplifier\@\@\@std\@\@\@Z
     */
    MCAPI void setValueAmplifier(class std::shared_ptr<class Amplifier>);
    /**
     * @hash   -1069846609
     * @symbol  ?viewAttributeModifiers\@MobEffect\@\@QEBAAEBV?$vector\@U?$pair\@PEBVAttribute\@\@V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@\@std\@\@V?$allocator\@U?$pair\@PEBVAttribute\@\@V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<struct std::pair<class Attribute const *, class std::shared_ptr<class AttributeModifier>>> const & viewAttributeModifiers() const;
    /**
     * @hash   698249229
     * @symbol  ?ABSORPTION\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * ABSORPTION;
    /**
     * @hash   20399649
     * @symbol  ?BAD_OMEN\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * BAD_OMEN;
    /**
     * @hash   -336005199
     * @symbol  ?BLINDNESS\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * BLINDNESS;
    /**
     * @hash   -654541831
     * @symbol  ?CONDUIT_POWER\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * CONDUIT_POWER;
    /**
     * @hash   -930725707
     * @symbol  ?CONFUSION\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * CONFUSION;
    /**
     * @hash   -307191667
     * @symbol  ?DAMAGE_BOOST\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * DAMAGE_BOOST;
    /**
     * @hash   1299557451
     * @symbol  ?DAMAGE_RESISTANCE\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * DAMAGE_RESISTANCE;
    /**
     * @hash   -1434314103
     * @symbol  ?DARKNESS\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * DARKNESS;
    /**
     * @hash   861722221
     * @symbol  ?DEFAULT_COLOR\@MobEffect\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const DEFAULT_COLOR;
    /**
     * @hash   1734840735
     * @symbol  ?DIG_SLOWDOWN\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * DIG_SLOWDOWN;
    /**
     * @hash   965706701
     * @symbol  ?DIG_SPEED\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * DIG_SPEED;
    /**
     * @hash   -1279626555
     * @symbol  ?EMPTY_EFFECT\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * EMPTY_EFFECT;
    /**
     * @hash   1179991373
     * @symbol  ?FATAL_POISON\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * FATAL_POISON;
    /**
     * @hash   224272133
     * @symbol  ?FIRE_RESISTANCE\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * FIRE_RESISTANCE;
    /**
     * @hash   1686937823
     * @symbol  ?HARM\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * HARM;
    /**
     * @hash   629806015
     * @symbol  ?HEAL\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * HEAL;
    /**
     * @hash   -1683557081
     * @symbol  ?HEALTH_BOOST\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * HEALTH_BOOST;
    /**
     * @hash   1015167551
     * @symbol  ?HERO_OF_THE_VILLAGE\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * HERO_OF_THE_VILLAGE;
    /**
     * @hash   -2009424851
     * @symbol  ?HUNGER\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * HUNGER;
    /**
     * @hash   917684317
     * @symbol  ?INVISIBILITY\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * INVISIBILITY;
    /**
     * @hash   -1745653541
     * @symbol  ?JUMP\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * JUMP;
    /**
     * @hash   617503961
     * @symbol  ?LEVITATION\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * LEVITATION;
    /**
     * @hash   928347863
     * @symbol  ?MOVEMENT_SLOWDOWN\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * MOVEMENT_SLOWDOWN;
    /**
     * @hash   1934486389
     * @symbol  ?MOVEMENT_SPEED\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * MOVEMENT_SPEED;
    /**
     * @hash   1697556125
     * @symbol  ?NIGHT_VISION\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * NIGHT_VISION;
    /**
     * @hash   1008257191
     * @symbol  ?POISON\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * POISON;
    /**
     * @hash   1543230053
     * @symbol  ?REGENERATION\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * REGENERATION;
    /**
     * @hash   218548827
     * @symbol  ?SATURATION\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * SATURATION;
    /**
     * @hash   -2039182167
     * @symbol  ?SLOW_FALLING\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * SLOW_FALLING;
    /**
     * @hash   -1248080003
     * @symbol  ?WATER_BREATHING\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * WATER_BREATHING;
    /**
     * @hash   194056621
     * @symbol  ?WEAKNESS\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * WEAKNESS;
    /**
     * @hash   -2059693883
     * @symbol  ?WITHER\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * WITHER;
    /**
     * @hash   -498131654
     * @symbol  ?getById\@MobEffect\@\@SAPEAV1\@I\@Z
     */
    MCAPI static class MobEffect * getById(unsigned int);
    /**
     * @hash   1412845654
     * @symbol  ?getByName\@MobEffect\@\@SAPEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class MobEffect * getByName(std::string const &);
    /**
     * @hash   -713398603
     * @symbol  ?getNameById\@MobEffect\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@I\@Z
     */
    MCAPI static std::string getNameById(unsigned int);
    /**
     * @hash   -324097122
     * @symbol  ?initEffects\@MobEffect\@\@SAXPEAVResourcePackManager\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static void initEffects(class ResourcePackManager *, class Experiments const &);
    /**
     * @hash   1349304047
     * @symbol  ?mMobEffects\@MobEffect\@\@2PAV?$unique_ptr\@VMobEffect\@\@U?$default_delete\@VMobEffect\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class MobEffect> mMobEffects[];
    /**
     * @hash   1111203579
     * @symbol  ?shutdownEffects\@MobEffect\@\@SAXXZ
     */
    MCAPI static void shutdownEffects();

//protected:
    /**
     * @hash   -831495045
     * @symbol  ?_createAttributeModifer\@MobEffect\@\@IEBA?AVAttributeModifier\@\@AEBV2\@H\@Z
     */
    MCAPI class AttributeModifier _createAttributeModifer(class AttributeModifier const &, int) const;
    /**
     * @hash   -1411495087
     * @symbol  ?_createInstantBuff\@MobEffect\@\@IEBA?AVInstantaneousAttributeBuff\@\@AEBVAttributeBuff\@\@HM\@Z
     */
    MCAPI class InstantaneousAttributeBuff _createInstantBuff(class AttributeBuff const &, int, float) const;
    /**
     * @hash   -1769072069
     * @symbol  ?_createTemporalBuff\@MobEffect\@\@IEBA?AVTemporalAttributeBuff\@\@AEBVAttributeBuff\@\@HH\@Z
     */
    MCAPI class TemporalAttributeBuff _createTemporalBuff(class AttributeBuff const &, int, int) const;

//private:
    /**
     * @hash   34232222
     * @symbol  ?darknessEffectFactorUpdate\@MobEffect\@\@CAXAEAUFactorCalculationData\@1\@H\@Z
     */
    MCAPI static void darknessEffectFactorUpdate(struct MobEffect::FactorCalculationData &, int);

protected:

private:

};