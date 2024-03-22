#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MobEffect {
public:
    // MobEffect inner types declare
    // clang-format off
    struct FactorCalculationData;
    // clang-format on

    enum class EffectType : uint {
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
        darkness       = 30,
    };

    // MobEffect inner types define
    struct FactorCalculationData {
    public:
        FactorCalculationData() = delete;

        int                                              mPaddingDuration;        // this+0x0
        float                                            mFactorStart;            // this+0x4
        float                                            mFactorTarget;           // this+0x8
        float                                            mFactorCurrent;          // this+0xC
        std::function<void(FactorCalculationData&, int)> mUpdateFn;               // this+0x10
        int                                              mEffectChangedTimestamp; // this+0x50
        float                                            mFactorPreviousFrame;    // this+0x54
        bool                                             mHadEffectLastTick;      // this+0x58
        bool                                             mHadApplied;             // this+0x59

    public:
        // NOLINTBEGIN
        // symbol: ??0FactorCalculationData@MobEffect@@QEAA@AEBU01@@Z
        MCAPI FactorCalculationData(struct MobEffect::FactorCalculationData const&);

        // symbol:
        // ?save@FactorCalculationData@MobEffect@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
        MCAPI std::unique_ptr<class CompoundTag> save() const;

        // symbol: ??1FactorCalculationData@MobEffect@@QEAA@XZ
        MCAPI ~FactorCalculationData();

        // symbol: ?load@FactorCalculationData@MobEffect@@SA?AU12@PEBVCompoundTag@@@Z
        MCAPI static struct MobEffect::FactorCalculationData load(class CompoundTag const* tag);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    MobEffect& operator=(MobEffect const&);
    MobEffect(MobEffect const&);
    MobEffect();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MobEffect@@UEAA@XZ
    virtual ~MobEffect();

    // vIndex: 1, symbol: ?applyEffects@MobEffect@@UEBAXPEAVActor@@HH@Z
    virtual void applyEffects(class Actor* target, int durationTicks, int amplification) const;

    // vIndex: 2, symbol: ?removeEffects@MobEffect@@UEAAXPEAVActor@@@Z
    virtual void removeEffects(class Actor* target);

    // vIndex: 3, symbol: ?updateEffects@MobEffect@@UEAAXPEAVActor@@HH@Z
    virtual void updateEffects(class Actor* target, int durationTicks, int amplification);

    // vIndex: 4, symbol: ?applyInstantaneousEffect@MobEffect@@UEBAXPEAVActor@@00HM@Z
    virtual void applyInstantaneousEffect(
        class Actor* source,
        class Actor* owner,
        class Actor* target,
        int          amplification,
        float        scale
    ) const;

    // vIndex: 5, symbol: ?isInstantaneous@MobEffect@@UEBA_NXZ
    virtual bool isInstantaneous() const;

    // vIndex: 6, symbol: ?getAttributeModifierValue@MobEffect@@UEBAMHAEBVAttributeModifier@@@Z
    virtual float getAttributeModifierValue(int amplifier, class AttributeModifier const& modifier) const;

    // symbol:
    // ??0MobEffect@@QEAA@IAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0_NHH01AEBUFactorCalculationData@0@@Z
    MCAPI
    MobEffect(uint id, std::string const& resourceName, std::string const& locName, bool isHarmful, int color, int icon, std::string const& iconName, bool drawParticles, struct MobEffect::FactorCalculationData const&);

    // symbol: ?addAttributeBuff@MobEffect@@QEAAXAEBVAttribute@@V?$shared_ptr@VAttributeBuff@@@std@@@Z
    MCAPI void addAttributeBuff(class Attribute const& attribute, std::shared_ptr<class AttributeBuff> buff);

    // symbol: ?addAttributeModifier@MobEffect@@QEAAXAEBVAttribute@@V?$shared_ptr@VAttributeModifier@@@std@@@Z
    MCAPI void
    addAttributeModifier(class Attribute const& attribute, std::shared_ptr<class AttributeModifier> modifier);

    // symbol: ?getDescriptionId@MobEffect@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getDescriptionId() const;

    // symbol: ?getDurationModifier@MobEffect@@QEBAMXZ
    MCAPI float getDurationModifier() const;

    // symbol: ?getId@MobEffect@@QEBAIXZ
    MCAPI uint getId() const;

    // symbol: ?getResourceName@MobEffect@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getResourceName() const;

    // symbol: ?isHarmful@MobEffect@@QEBA_NXZ
    MCAPI bool isHarmful() const;

    // symbol: ?isVisible@MobEffect@@QEBA_NXZ
    MCAPI bool isVisible() const;

    // symbol: ?setDurationAmplifier@MobEffect@@QEAAXV?$shared_ptr@VAmplifier@@@std@@@Z
    MCAPI void setDurationAmplifier(std::shared_ptr<class Amplifier> amplifier);

    // symbol: ?setValueAmplifier@MobEffect@@QEAAXV?$shared_ptr@VAmplifier@@@std@@@Z
    MCAPI void setValueAmplifier(std::shared_ptr<class Amplifier> amplifier);

    // symbol:
    // ?viewAttributeModifiers@MobEffect@@QEBAAEBV?$vector@U?$pair@PEBVAttribute@@V?$shared_ptr@VAttributeModifier@@@std@@@std@@V?$allocator@U?$pair@PEBVAttribute@@V?$shared_ptr@VAttributeModifier@@@std@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::pair<class Attribute const*, std::shared_ptr<class AttributeModifier>>> const&
          viewAttributeModifiers() const;

    // symbol: ?getById@MobEffect@@SAPEAV1@I@Z
    MCAPI static class MobEffect* getById(uint effectId);

    // symbol: ?getByName@MobEffect@@SAPEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class MobEffect* getByName(std::string const& name);

    // symbol: ?getNameById@MobEffect@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z
    MCAPI static std::string getNameById(uint);

    // symbol: ?initEffects@MobEffect@@SAXAEBVBaseGameVersion@@@Z
    MCAPI static void initEffects(class BaseGameVersion const&);

    // symbol: ?shutdownEffects@MobEffect@@SAXXZ
    MCAPI static void shutdownEffects();

    // symbol: ?ABSORPTION@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* ABSORPTION;

    // symbol: ?BAD_OMEN@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* BAD_OMEN;

    // symbol: ?BLINDNESS@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* BLINDNESS;

    // symbol: ?CONDUIT_POWER@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* CONDUIT_POWER;

    // symbol: ?CONFUSION@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* CONFUSION;

    // symbol: ?DAMAGE_BOOST@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* DAMAGE_BOOST;

    // symbol: ?DAMAGE_RESISTANCE@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* DAMAGE_RESISTANCE;

    // symbol: ?DARKNESS@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* DARKNESS;

    // symbol: ?DEFAULT_COLOR@MobEffect@@2VColor@mce@@B
    MCAPI static class mce::Color const DEFAULT_COLOR;

    // symbol: ?DIG_SLOWDOWN@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* DIG_SLOWDOWN;

    // symbol: ?DIG_SPEED@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* DIG_SPEED;

    // symbol: ?EMPTY_EFFECT@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* EMPTY_EFFECT;

    // symbol: ?FATAL_POISON@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* FATAL_POISON;

    // symbol: ?FIRE_RESISTANCE@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* FIRE_RESISTANCE;

    // symbol: ?HARM@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* HARM;

    // symbol: ?HEAL@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* HEAL;

    // symbol: ?HEALTH_BOOST@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* HEALTH_BOOST;

    // symbol: ?HERO_OF_THE_VILLAGE@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* HERO_OF_THE_VILLAGE;

    // symbol: ?HUNGER@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* HUNGER;

    // symbol: ?INVISIBILITY@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* INVISIBILITY;

    // symbol: ?JUMP@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* JUMP;

    // symbol: ?LEVITATION@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* LEVITATION;

    // symbol: ?MOVEMENT_SLOWDOWN@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* MOVEMENT_SLOWDOWN;

    // symbol: ?MOVEMENT_SPEED@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* MOVEMENT_SPEED;

    // symbol: ?NIGHT_VISION@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* NIGHT_VISION;

    // symbol: ?POISON@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* POISON;

    // symbol: ?REGENERATION@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* REGENERATION;

    // symbol: ?SATURATION@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* SATURATION;

    // symbol: ?SLOW_FALLING@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* SLOW_FALLING;

    // symbol: ?WATER_BREATHING@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* WATER_BREATHING;

    // symbol: ?WEAKNESS@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* WEAKNESS;

    // symbol: ?WITHER@MobEffect@@2PEAV1@EA
    MCAPI static class MobEffect* WITHER;

    // symbol: ?mMobEffects@MobEffect@@2PAV?$unique_ptr@VMobEffect@@U?$default_delete@VMobEffect@@@std@@@std@@A
    MCAPI static std::unique_ptr<class MobEffect> mMobEffects[];

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_createAttributeModifer@MobEffect@@IEBA?AVAttributeModifier@@AEBV2@H@Z
    MCAPI class AttributeModifier
    _createAttributeModifer(class AttributeModifier const& baseMod, int amplification) const;

    // symbol: ?_createInstantBuff@MobEffect@@IEBA?AVInstantaneousAttributeBuff@@AEBVAttributeBuff@@HM@Z
    MCAPI class InstantaneousAttributeBuff
    _createInstantBuff(class AttributeBuff const& baseBuff, int amplification, float scale) const;

    // symbol: ?_createTemporalBuff@MobEffect@@IEBA?AVTemporalAttributeBuff@@AEBVAttributeBuff@@HH@Z
    MCAPI class TemporalAttributeBuff
    _createTemporalBuff(class AttributeBuff const& baseBuff, int duration, int amplification) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?darknessEffectFactorUpdate@MobEffect@@CAXAEAUFactorCalculationData@1@H@Z
    MCAPI static void darknessEffectFactorUpdate(struct MobEffect::FactorCalculationData&, int duration);

    // NOLINTEND
};
