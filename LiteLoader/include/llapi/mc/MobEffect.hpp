/**
 * @file  MobEffect.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~MobEffect();
    /**
     * @hash   -1608795960
     * @vftbl  1
     * @symbol ?applyEffects@MobEffect@@UEBAXPEAVActor@@HH@Z
     */
    virtual void applyEffects(class Actor *, int, int) const;
    /**
     * @hash   -431265617
     * @vftbl  2
     * @symbol ?removeEffects@MobEffect@@UEAAXPEAVActor@@@Z
     */
    virtual void removeEffects(class Actor *);
    /**
     * @hash   -358827068
     * @vftbl  3
     * @symbol ?updateEffects@MobEffect@@UEAAXPEAVActor@@HH@Z
     */
    virtual void updateEffects(class Actor *, int, int);
    /**
     * @hash   1950840550
     * @vftbl  4
     * @symbol ?applyInstantaneousEffect@MobEffect@@UEBAXPEAVActor@@00HM@Z
     */
    virtual void applyInstantaneousEffect(class Actor *, class Actor *, class Actor *, int, float) const;
    /**
     * @hash   -775600973
     * @vftbl  5
     * @symbol ?isInstantaneous@MobEffect@@UEBA_NXZ
     */
    virtual bool isInstantaneous() const;
    /**
     * @hash   -1209103896
     * @vftbl  6
     * @symbol ?getAttributeModifierValue@MobEffect@@UEBAMHAEBVAttributeModifier@@@Z
     */
    virtual float getAttributeModifierValue(int, class AttributeModifier const &) const;
    /**
     * @hash   326908337
     * @symbol ??0MobEffect@@QEAA@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_NHH01AEBUFactorCalculationData@0@@Z
     */
    MCAPI MobEffect(int, std::string const &, std::string const &, bool, int, int, std::string const &, bool, struct MobEffect::FactorCalculationData const &);
    /**
     * @hash   -1170897604
     * @symbol ?addAttributeBuff@MobEffect@@QEAAXAEBVAttribute@@V?$shared_ptr@VAttributeBuff@@@std@@@Z
     */
    MCAPI void addAttributeBuff(class Attribute const &, class std::shared_ptr<class AttributeBuff>);
    /**
     * @hash   527131100
     * @symbol ?addAttributeModifier@MobEffect@@QEAAXAEBVAttribute@@V?$shared_ptr@VAttributeModifier@@@std@@@Z
     */
    MCAPI void addAttributeModifier(class Attribute const &, class std::shared_ptr<class AttributeModifier>);
    /**
     * @hash   1487965972
     * @symbol ?getColor@MobEffect@@QEBAAEBVColor@mce@@XZ
     */
    MCAPI class mce::Color const & getColor() const;
    /**
     * @hash   -1466167778
     * @symbol ?getComponentName@MobEffect@@QEBAAEBVHashedString@@XZ
     */
    MCAPI class HashedString const & getComponentName() const;
    /**
     * @hash   -1788991138
     * @symbol ?getDescriptionId@MobEffect@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getDescriptionId() const;
    /**
     * @hash   -1777464344
     * @symbol ?getDurationModifier@MobEffect@@QEBAMXZ
     */
    MCAPI float getDurationModifier() const;
    /**
     * @hash   -829553094
     * @symbol ?getFactorCalculationData@MobEffect@@QEBAAEBUFactorCalculationData@1@XZ
     */
    MCAPI struct MobEffect::FactorCalculationData const & getFactorCalculationData() const;
    /**
     * @hash   2000391476
     * @symbol ?getId@MobEffect@@QEBAIXZ
     */
    MCAPI unsigned int getId() const;
    /**
     * @hash   -887639844
     * @symbol ?getResourceName@MobEffect@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getResourceName() const;
    /**
     * @hash   2142218284
     * @symbol ?isHarmful@MobEffect@@QEBA_NXZ
     */
    MCAPI bool isHarmful() const;
    /**
     * @hash   1079793964
     * @symbol ?isVisible@MobEffect@@QEBA_NXZ
     */
    MCAPI bool isVisible() const;
    /**
     * @hash   930417763
     * @symbol ?setDurationAmplifier@MobEffect@@QEAAXV?$shared_ptr@VAmplifier@@@std@@@Z
     */
    MCAPI void setDurationAmplifier(class std::shared_ptr<class Amplifier>);
    /**
     * @hash   569764229
     * @symbol ?setValueAmplifier@MobEffect@@QEAAXV?$shared_ptr@VAmplifier@@@std@@@Z
     */
    MCAPI void setValueAmplifier(class std::shared_ptr<class Amplifier>);
    /**
     * @hash   -1401542273
     * @symbol ?viewAttributeModifiers@MobEffect@@QEBAAEBV?$vector@U?$pair@PEBVAttribute@@V?$shared_ptr@VAttributeModifier@@@std@@@std@@V?$allocator@U?$pair@PEBVAttribute@@V?$shared_ptr@VAttributeModifier@@@std@@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<struct std::pair<class Attribute const *, class std::shared_ptr<class AttributeModifier>>> const & viewAttributeModifiers() const;
    /**
     * @hash   -403963955
     * @symbol ?ABSORPTION@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * ABSORPTION;
    /**
     * @hash   -1081813535
     * @symbol ?BAD_OMEN@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * BAD_OMEN;
    /**
     * @hash   -1438218383
     * @symbol ?BLINDNESS@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * BLINDNESS;
    /**
     * @hash   -1756755015
     * @symbol ?CONDUIT_POWER@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * CONDUIT_POWER;
    /**
     * @hash   -2032938891
     * @symbol ?CONFUSION@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * CONFUSION;
    /**
     * @hash   -1409404851
     * @symbol ?DAMAGE_BOOST@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * DAMAGE_BOOST;
    /**
     * @hash   197344267
     * @symbol ?DAMAGE_RESISTANCE@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * DAMAGE_RESISTANCE;
    /**
     * @hash   1758440009
     * @symbol ?DARKNESS@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * DARKNESS;
    /**
     * @hash   -210761467
     * @symbol ?DEFAULT_COLOR@MobEffect@@2VColor@mce@@B
     */
    MCAPI static class mce::Color const DEFAULT_COLOR;
    /**
     * @hash   632627551
     * @symbol ?DIG_SLOWDOWN@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * DIG_SLOWDOWN;
    /**
     * @hash   -136506483
     * @symbol ?DIG_SPEED@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * DIG_SPEED;
    /**
     * @hash   1913127557
     * @symbol ?EMPTY_EFFECT@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * EMPTY_EFFECT;
    /**
     * @hash   77778189
     * @symbol ?FATAL_POISON@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * FATAL_POISON;
    /**
     * @hash   -877941051
     * @symbol ?FIRE_RESISTANCE@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * FIRE_RESISTANCE;
    /**
     * @hash   584724639
     * @symbol ?HARM@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * HARM;
    /**
     * @hash   -472407169
     * @symbol ?HEAL@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * HEAL;
    /**
     * @hash   1509197031
     * @symbol ?HEALTH_BOOST@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * HEALTH_BOOST;
    /**
     * @hash   -87045633
     * @symbol ?HERO_OF_THE_VILLAGE@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * HERO_OF_THE_VILLAGE;
    /**
     * @hash   1183329261
     * @symbol ?HUNGER@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * HUNGER;
    /**
     * @hash   -184528867
     * @symbol ?INVISIBILITY@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * INVISIBILITY;
    /**
     * @hash   1447100571
     * @symbol ?JUMP@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * JUMP;
    /**
     * @hash   -484709223
     * @symbol ?LEVITATION@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * LEVITATION;
    /**
     * @hash   -173865321
     * @symbol ?MOVEMENT_SLOWDOWN@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * MOVEMENT_SLOWDOWN;
    /**
     * @hash   832273205
     * @symbol ?MOVEMENT_SPEED@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * MOVEMENT_SPEED;
    /**
     * @hash   595342941
     * @symbol ?NIGHT_VISION@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * NIGHT_VISION;
    /**
     * @hash   -93955993
     * @symbol ?POISON@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * POISON;
    /**
     * @hash   441016869
     * @symbol ?REGENERATION@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * REGENERATION;
    /**
     * @hash   -883664357
     * @symbol ?SATURATION@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * SATURATION;
    /**
     * @hash   1153571945
     * @symbol ?SLOW_FALLING@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * SLOW_FALLING;
    /**
     * @hash   1944674109
     * @symbol ?WATER_BREATHING@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * WATER_BREATHING;
    /**
     * @hash   -908156563
     * @symbol ?WEAKNESS@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * WEAKNESS;
    /**
     * @hash   1133060229
     * @symbol ?WITHER@MobEffect@@2PEAV1@EA
     */
    MCAPI static class MobEffect * WITHER;
    /**
     * @hash   1211147568
     * @symbol ?getById@MobEffect@@SAPEAV1@H@Z
     */
    MCAPI static class MobEffect * getById(int);
    /**
     * @hash   2121648502
     * @symbol ?getByName@MobEffect@@SAPEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static class MobEffect * getByName(std::string const &);
    /**
     * @hash   995880619
     * @symbol ?getNameById@MobEffect@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI static std::string getNameById(int);
    /**
     * @hash   384705726
     * @symbol ?initEffects@MobEffect@@SAXPEAVResourcePackManager@@AEBVExperiments@@@Z
     */
    MCAPI static void initEffects(class ResourcePackManager *, class Experiments const &);
    /**
     * @hash   247090863
     * @symbol ?mMobEffects@MobEffect@@2PAV?$unique_ptr@VMobEffect@@U?$default_delete@VMobEffect@@@std@@@std@@A
     */
    MCAPI static std::unique_ptr<class MobEffect> mMobEffects[];
    /**
     * @hash   1821005867
     * @symbol ?shutdownEffects@MobEffect@@SAXXZ
     */
    MCAPI static void shutdownEffects();

//protected:
    /**
     * @hash   -702692239
     * @symbol ?_createInstantBuff@MobEffect@@IEBA?AVInstantaneousAttributeBuff@@AEBVAttributeBuff@@HM@Z
     */
    MCAPI class InstantaneousAttributeBuff _createInstantBuff(class AttributeBuff const &, int, float) const;
    /**
     * @hash   -1060269221
     * @symbol ?_createTemporalBuff@MobEffect@@IEBA?AVTemporalAttributeBuff@@AEBVAttributeBuff@@HH@Z
     */
    MCAPI class TemporalAttributeBuff _createTemporalBuff(class AttributeBuff const &, int, int) const;

//private:
    /**
     * @hash   743035070
     * @symbol ?darknessEffectFactorUpdate@MobEffect@@CAXAEAUFactorCalculationData@1@H@Z
     */
    MCAPI static void darknessEffectFactorUpdate(struct MobEffect::FactorCalculationData &, int);

protected:

private:

};