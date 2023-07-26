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

    // MobEffect inner types define
    struct FactorCalculationData {

    public:
        // prevent constructor by default
        FactorCalculationData& operator=(FactorCalculationData const&) = delete;
        FactorCalculationData()                                        = delete;

    public:
        /**
         * @symbol ??0FactorCalculationData\@MobEffect\@\@QEAA\@AEBU01\@\@Z
         */
        MCAPI FactorCalculationData(struct MobEffect::FactorCalculationData const&); // NOLINT
        /**
         * @symbol
         * ?save\@FactorCalculationData\@MobEffect\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
         */
        MCAPI std::unique_ptr<class CompoundTag> save() const; // NOLINT
        /**
         * @symbol ??1FactorCalculationData\@MobEffect\@\@QEAA\@XZ
         */
        MCAPI ~FactorCalculationData(); // NOLINT
        /**
         * @symbol ?load\@FactorCalculationData\@MobEffect\@\@SA?AU12\@PEBVCompoundTag\@\@\@Z
         */
        MCAPI static struct MobEffect::FactorCalculationData load(class CompoundTag const*); // NOLINT
    };

public:
    // prevent constructor by default
    MobEffect& operator=(MobEffect const&) = delete;
    MobEffect(MobEffect const&)            = delete;
    MobEffect()                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?applyEffects\@MobEffect\@\@UEBAXPEAVActor\@\@HH\@Z
     */
    virtual void applyEffects(class Actor*, int, int) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?removeEffects\@MobEffect\@\@UEAAXPEAVActor\@\@\@Z
     */
    virtual void removeEffects(class Actor*); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?updateEffects\@MobEffect\@\@UEAAXPEAVActor\@\@HH\@Z
     */
    virtual void updateEffects(class Actor*, int, int); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?applyInstantaneousEffect\@MobEffect\@\@UEBAXPEAVActor\@\@00HM\@Z
     */
    virtual void applyInstantaneousEffect(class Actor*, class Actor*, class Actor*, int, float) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?isInstantaneous\@MobEffect\@\@UEBA_NXZ
     */
    virtual bool isInstantaneous() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?getAttributeModifierValue\@MobEffect\@\@UEBAMHAEBVAttributeModifier\@\@\@Z
     */
    virtual float getAttributeModifierValue(int, class AttributeModifier const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOBEFFECT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MobEffect(); // NOLINT
#endif
    /**
     * @symbol
     * ??0MobEffect\@\@QEAA\@IAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_NHH01AEBUFactorCalculationData\@0\@\@Z
     */
    MCAPI
    MobEffect(unsigned int, std::string const&, std::string const&, bool, int, int, std::string const&, bool, struct MobEffect::FactorCalculationData const&); // NOLINT
    /**
     * @symbol ?addAttributeBuff\@MobEffect\@\@QEAAXAEBVAttribute\@\@V?$shared_ptr\@VAttributeBuff\@\@\@std\@\@\@Z
     */
    MCAPI void addAttributeBuff(class Attribute const&, class std::shared_ptr<class AttributeBuff>); // NOLINT
    /**
     * @symbol
     * ?addAttributeModifier\@MobEffect\@\@QEAAXAEBVAttribute\@\@V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@\@Z
     */
    MCAPI void addAttributeModifier(class Attribute const&, class std::shared_ptr<class AttributeModifier>); // NOLINT
    /**
     * @symbol
     * ?getDescriptionId\@MobEffect\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getDescriptionId() const; // NOLINT
    /**
     * @symbol ?getDurationModifier\@MobEffect\@\@QEBAMXZ
     */
    MCAPI float getDurationModifier() const; // NOLINT
    /**
     * @symbol ?getId\@MobEffect\@\@QEBAIXZ
     */
    MCAPI unsigned int getId() const; // NOLINT
    /**
     * @symbol
     * ?getResourceName\@MobEffect\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getResourceName() const; // NOLINT
    /**
     * @symbol ?isHarmful\@MobEffect\@\@QEBA_NXZ
     */
    MCAPI bool isHarmful() const; // NOLINT
    /**
     * @symbol ?isVisible\@MobEffect\@\@QEBA_NXZ
     */
    MCAPI bool isVisible() const; // NOLINT
    /**
     * @symbol ?setDurationAmplifier\@MobEffect\@\@QEAAXV?$shared_ptr\@VAmplifier\@\@\@std\@\@\@Z
     */
    MCAPI void setDurationAmplifier(class std::shared_ptr<class Amplifier>); // NOLINT
    /**
     * @symbol ?setValueAmplifier\@MobEffect\@\@QEAAXV?$shared_ptr\@VAmplifier\@\@\@std\@\@\@Z
     */
    MCAPI void setValueAmplifier(class std::shared_ptr<class Amplifier>); // NOLINT
    /**
     * @symbol
     * ?viewAttributeModifiers\@MobEffect\@\@QEBAAEBV?$vector\@U?$pair\@PEBVAttribute\@\@V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@\@std\@\@V?$allocator\@U?$pair\@PEBVAttribute\@\@V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<struct std::pair<class Attribute const*, class std::shared_ptr<class AttributeModifier>>> const&
          viewAttributeModifiers() const; // NOLINT
    /**
     * @symbol ?getById\@MobEffect\@\@SAPEAV1\@I\@Z
     */
    MCAPI static class MobEffect* getById(unsigned int); // NOLINT
    /**
     * @symbol
     * ?getByName\@MobEffect\@\@SAPEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class MobEffect* getByName(std::string const&); // NOLINT
    /**
     * @symbol
     * ?getNameById\@MobEffect\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@I\@Z
     */
    MCAPI static std::string getNameById(unsigned int); // NOLINT
    /**
     * @symbol ?initEffects\@MobEffect\@\@SAXPEAVResourcePackManager\@\@AEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static void
    initEffects(class ResourcePackManager*, class BaseGameVersion const&, class Experiments const&); // NOLINT
    /**
     * @symbol ?shutdownEffects\@MobEffect\@\@SAXXZ
     */
    MCAPI static void shutdownEffects(); // NOLINT
    /**
     * @symbol ?ABSORPTION\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* ABSORPTION; // NOLINT
    /**
     * @symbol ?BAD_OMEN\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* BAD_OMEN; // NOLINT
    /**
     * @symbol ?BLINDNESS\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* BLINDNESS; // NOLINT
    /**
     * @symbol ?CONDUIT_POWER\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* CONDUIT_POWER; // NOLINT
    /**
     * @symbol ?CONFUSION\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* CONFUSION; // NOLINT
    /**
     * @symbol ?DAMAGE_BOOST\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* DAMAGE_BOOST; // NOLINT
    /**
     * @symbol ?DAMAGE_RESISTANCE\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* DAMAGE_RESISTANCE; // NOLINT
    /**
     * @symbol ?DARKNESS\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* DARKNESS; // NOLINT
    /**
     * @symbol ?DEFAULT_COLOR\@MobEffect\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const DEFAULT_COLOR; // NOLINT
    /**
     * @symbol ?DIG_SLOWDOWN\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* DIG_SLOWDOWN; // NOLINT
    /**
     * @symbol ?DIG_SPEED\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* DIG_SPEED; // NOLINT
    /**
     * @symbol ?EMPTY_EFFECT\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* EMPTY_EFFECT; // NOLINT
    /**
     * @symbol ?FATAL_POISON\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* FATAL_POISON; // NOLINT
    /**
     * @symbol ?FIRE_RESISTANCE\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* FIRE_RESISTANCE; // NOLINT
    /**
     * @symbol ?HARM\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* HARM; // NOLINT
    /**
     * @symbol ?HEAL\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* HEAL; // NOLINT
    /**
     * @symbol ?HEALTH_BOOST\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* HEALTH_BOOST; // NOLINT
    /**
     * @symbol ?HERO_OF_THE_VILLAGE\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* HERO_OF_THE_VILLAGE; // NOLINT
    /**
     * @symbol ?HUNGER\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* HUNGER; // NOLINT
    /**
     * @symbol ?INVISIBILITY\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* INVISIBILITY; // NOLINT
    /**
     * @symbol ?JUMP\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* JUMP; // NOLINT
    /**
     * @symbol ?LEVITATION\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* LEVITATION; // NOLINT
    /**
     * @symbol ?MOVEMENT_SLOWDOWN\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* MOVEMENT_SLOWDOWN; // NOLINT
    /**
     * @symbol ?MOVEMENT_SPEED\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* MOVEMENT_SPEED; // NOLINT
    /**
     * @symbol ?NIGHT_VISION\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* NIGHT_VISION; // NOLINT
    /**
     * @symbol ?POISON\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* POISON; // NOLINT
    /**
     * @symbol ?REGENERATION\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* REGENERATION; // NOLINT
    /**
     * @symbol ?SATURATION\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* SATURATION; // NOLINT
    /**
     * @symbol ?SLOW_FALLING\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* SLOW_FALLING; // NOLINT
    /**
     * @symbol ?WATER_BREATHING\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* WATER_BREATHING; // NOLINT
    /**
     * @symbol ?WEAKNESS\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* WEAKNESS; // NOLINT
    /**
     * @symbol ?WITHER\@MobEffect\@\@2PEAV1\@EA
     */
    MCAPI static class MobEffect* WITHER; // NOLINT
    /**
     * @symbol
     * ?mMobEffects\@MobEffect\@\@2PAV?$unique_ptr\@VMobEffect\@\@U?$default_delete\@VMobEffect\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class MobEffect> mMobEffects[]; // NOLINT

    // protected:
    /**
     * @symbol ?_createAttributeModifer\@MobEffect\@\@IEBA?AVAttributeModifier\@\@AEBV2\@H\@Z
     */
    MCAPI class AttributeModifier _createAttributeModifer(class AttributeModifier const&, int) const; // NOLINT
    /**
     * @symbol ?_createInstantBuff\@MobEffect\@\@IEBA?AVInstantaneousAttributeBuff\@\@AEBVAttributeBuff\@\@HM\@Z
     */
    MCAPI class InstantaneousAttributeBuff _createInstantBuff(class AttributeBuff const&, int, float) const; // NOLINT
    /**
     * @symbol ?_createTemporalBuff\@MobEffect\@\@IEBA?AVTemporalAttributeBuff\@\@AEBVAttributeBuff\@\@HH\@Z
     */
    MCAPI class TemporalAttributeBuff _createTemporalBuff(class AttributeBuff const&, int, int) const; // NOLINT

    // private:
    /**
     * @symbol ?darknessEffectFactorUpdate\@MobEffect\@\@CAXAEAUFactorCalculationData\@1\@H\@Z
     */
    MCAPI static void darknessEffectFactorUpdate(struct MobEffect::FactorCalculationData&, int); // NOLINT

protected:
private:
};
