/**
 * @file  MobEffect.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @vftbl  1
     * @symbol  ?applyEffects\@MobEffect\@\@UEBAXPEAVActor\@\@HH\@Z
     */
    virtual void applyEffects(class Actor *, int, int) const;
    /**
     * @vftbl  2
     * @symbol  ?removeEffects\@MobEffect\@\@UEAAXPEAVActor\@\@\@Z
     */
    virtual void removeEffects(class Actor *);
    /**
     * @vftbl  3
     * @symbol  ?updateEffects\@MobEffect\@\@UEAAXPEAVActor\@\@HH\@Z
     */
    virtual void updateEffects(class Actor *, int, int);
    /**
     * @vftbl  4
     * @symbol  ?applyInstantaneousEffect\@MobEffect\@\@UEBAXPEAVActor\@\@00HM\@Z
     */
    virtual void applyInstantaneousEffect(class Actor *, class Actor *, class Actor *, int, float) const;
    /**
     * @vftbl  5
     * @symbol  ?isInstantaneous\@MobEffect\@\@UEBA_NXZ
     */
    virtual bool isInstantaneous() const;
    /**
     * @vftbl  6
     * @symbol  ?getAttributeModifierValue\@MobEffect\@\@UEBAMHAEBVAttributeModifier\@\@\@Z
     */
    virtual float getAttributeModifierValue(int, class AttributeModifier const &) const;
    /**
     * @symbol  ??0MobEffect\@\@QEAA\@IAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_NHH01AEBUFactorCalculationData\@0\@\@Z
     */
    MCAPI MobEffect(unsigned int, std::string const &, std::string const &, bool, int, int, std::string const &, bool, struct MobEffect::FactorCalculationData const &);
    /**
     * @symbol  ?addAttributeBuff\@MobEffect\@\@QEAAXAEBVAttribute\@\@V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@\@Z
     */
    MCAPI void addAttributeBuff(class Attribute const &, class std::shared_ptr<class AttributeBuff>);
    /**
     * @symbol  ?addAttributeModifier\@MobEffect\@\@QEAAXAEBVAttribute\@\@V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@\@Z
     */
    MCAPI void addAttributeModifier(class Attribute const &, class std::shared_ptr<class AttributeModifier>);
    /**
     * @symbol  ?getColor\@MobEffect\@\@QEBAAEBVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color const & getColor() const;
    /**
     * @symbol  ?getComponentName\@MobEffect\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getComponentName() const;
    /**
     * @symbol  ?getDescriptionId\@MobEffect\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getDescriptionId() const;
    /**
     * @symbol  ?getDurationModifier\@MobEffect\@\@QEBAMXZ
     */
    MCAPI float getDurationModifier() const;
    /**
     * @symbol  ?getFactorCalculationData\@MobEffect\@\@QEBAAEBUFactorCalculationData\@1\@XZ
     */
    MCAPI struct MobEffect::FactorCalculationData const & getFactorCalculationData() const;
    /**
     * @symbol  ?getId\@MobEffect\@\@QEBAIXZ
     */
    MCAPI unsigned int getId() const;
    /**
     * @symbol  ?getResourceName\@MobEffect\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getResourceName() const;
    /**
     * @symbol  ?isHarmful\@MobEffect\@\@QEBA_NXZ
     */
    MCAPI bool isHarmful() const;
    /**
     * @symbol  ?isVisible\@MobEffect\@\@QEBA_NXZ
     */
    MCAPI bool isVisible() const;
    /**
     * @symbol  ?setDurationAmplifier\@MobEffect\@\@QEAAXV?$shared_ptr\@VAmplifier\@\@\@std\@\@\@Z
     */
    MCAPI void setDurationAmplifier(class std::shared_ptr<class Amplifier>);
    /**
     * @symbol  ?setValueAmplifier\@MobEffect\@\@QEAAXV?$shared_ptr\@VAmplifier\@\@\@std\@\@\@Z
     */
    MCAPI void setValueAmplifier(class std::shared_ptr<class Amplifier>);
    /**
     * @symbol  ?viewAttributeModifiers\@MobEffect\@\@QEBAAEBV?$vector\@U?$pair\@PEBVAttribute\@\@V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@\@std\@\@V?$allocator\@U?$pair\@PEBVAttribute\@\@V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<struct std::pair<class Attribute const *, class std::shared_ptr<class AttributeModifier>>> const & viewAttributeModifiers() const;
    /**
     * @symbol  ?ABSORPTION\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * ABSORPTION;
    /**
     * @symbol  ?BAD_OMEN\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * BAD_OMEN;
    /**
     * @symbol  ?BLINDNESS\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * BLINDNESS;
    /**
     * @symbol  ?CONDUIT_POWER\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * CONDUIT_POWER;
    /**
     * @symbol  ?CONFUSION\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * CONFUSION;
    /**
     * @symbol  ?DAMAGE_BOOST\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * DAMAGE_BOOST;
    /**
     * @symbol  ?DAMAGE_RESISTANCE\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * DAMAGE_RESISTANCE;
    /**
     * @symbol  ?DARKNESS\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * DARKNESS;
    /**
     * @symbol  ?DEFAULT_COLOR\@MobEffect\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const DEFAULT_COLOR;
    /**
     * @symbol  ?DIG_SLOWDOWN\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * DIG_SLOWDOWN;
    /**
     * @symbol  ?DIG_SPEED\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * DIG_SPEED;
    /**
     * @symbol  ?EMPTY_EFFECT\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * EMPTY_EFFECT;
    /**
     * @symbol  ?FATAL_POISON\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * FATAL_POISON;
    /**
     * @symbol  ?FIRE_RESISTANCE\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * FIRE_RESISTANCE;
    /**
     * @symbol  ?HARM\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * HARM;
    /**
     * @symbol  ?HEAL\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * HEAL;
    /**
     * @symbol  ?HEALTH_BOOST\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * HEALTH_BOOST;
    /**
     * @symbol  ?HERO_OF_THE_VILLAGE\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * HERO_OF_THE_VILLAGE;
    /**
     * @symbol  ?HUNGER\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * HUNGER;
    /**
     * @symbol  ?INVISIBILITY\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * INVISIBILITY;
    /**
     * @symbol  ?JUMP\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * JUMP;
    /**
     * @symbol  ?LEVITATION\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * LEVITATION;
    /**
     * @symbol  ?MOVEMENT_SLOWDOWN\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * MOVEMENT_SLOWDOWN;
    /**
     * @symbol  ?MOVEMENT_SPEED\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * MOVEMENT_SPEED;
    /**
     * @symbol  ?NIGHT_VISION\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * NIGHT_VISION;
    /**
     * @symbol  ?POISON\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * POISON;
    /**
     * @symbol  ?REGENERATION\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * REGENERATION;
    /**
     * @symbol  ?SATURATION\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * SATURATION;
    /**
     * @symbol  ?SLOW_FALLING\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * SLOW_FALLING;
    /**
     * @symbol  ?WATER_BREATHING\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * WATER_BREATHING;
    /**
     * @symbol  ?WEAKNESS\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * WEAKNESS;
    /**
     * @symbol  ?WITHER\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect * WITHER;
    /**
     * @symbol  ?getById\@MobEffect\@\@SAPEAV1\@I\@Z
     */
    MCAPI static class MobEffect * getById(unsigned int);
    /**
     * @symbol  ?getByName\@MobEffect\@\@SAPEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class MobEffect * getByName(std::string const &);
    /**
     * @symbol  ?getNameById\@MobEffect\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@I\@Z
     */
    MCAPI static std::string getNameById(unsigned int);
    /**
     * @symbol  ?initEffects\@MobEffect\@\@SAXPEAVResourcePackManager\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static void initEffects(class ResourcePackManager *, class Experiments const &);
    /**
     * @symbol  ?mMobEffects\@MobEffect\@\@2PAV?$unique_ptr\@VMobEffect\@\@U?$default_delete\@VMobEffect\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class MobEffect> mMobEffects[];
    /**
     * @symbol  ?shutdownEffects\@MobEffect\@\@SAXXZ
     */
    MCAPI static void shutdownEffects();

//protected:
    /**
     * @symbol  ?_createAttributeModifer\@MobEffect\@\@IEBA?AVAttributeModifier\@\@AEBV2\@H\@Z
     */
    MCAPI class AttributeModifier _createAttributeModifer(class AttributeModifier const &, int) const;
    /**
     * @symbol  ?_createInstantBuff\@MobEffect\@\@IEBA?AVInstantaneousAttributeBuff\@\@AEBVAttributeBuff\@\@HM\@Z
     */
    MCAPI class InstantaneousAttributeBuff _createInstantBuff(class AttributeBuff const &, int, float) const;
    /**
     * @symbol  ?_createTemporalBuff\@MobEffect\@\@IEBA?AVTemporalAttributeBuff\@\@AEBVAttributeBuff\@\@HH\@Z
     */
    MCAPI class TemporalAttributeBuff _createTemporalBuff(class AttributeBuff const &, int, int) const;

//private:
    /**
     * @symbol  ?darknessEffectFactorUpdate\@MobEffect\@\@CAXAEAUFactorCalculationData\@1\@H\@Z
     */
    MCAPI static void darknessEffectFactorUpdate(struct MobEffect::FactorCalculationData &, int);

protected:

private:

};