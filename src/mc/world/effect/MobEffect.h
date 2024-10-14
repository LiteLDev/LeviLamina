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
        FactorCalculationData();

    public:
        // NOLINTBEGIN
        MCAPI FactorCalculationData(struct MobEffect::FactorCalculationData const&);

        MCAPI struct MobEffect::FactorCalculationData& operator=(struct MobEffect::FactorCalculationData const&);

        MCAPI std::unique_ptr<class CompoundTag> save() const;

        MCAPI ~FactorCalculationData();

        MCAPI static struct MobEffect::FactorCalculationData load(class CompoundTag const* tag);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    MobEffect& operator=(MobEffect const&);
    MobEffect(MobEffect const&);
    MobEffect();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MobEffect();

    // vIndex: 1
    virtual void applyEffects(class Actor& target, int durationTicks, int amplification) const;

    // vIndex: 2
    virtual void removeEffects(class BaseAttributeMap& attributeMapToRemoveFrom);

    // vIndex: 3
    virtual void onEffectExpired(class Actor&) const;

    // vIndex: 4
    virtual void onActorRemovedAfterDeath(class Actor&, int) const;

    // vIndex: 5
    virtual void onActorHurt(class Actor&, int, class ActorDamageSource const&, float) const;

    // vIndex: 6
    virtual void applyInstantaneousEffect(
        class Actor* source,
        class Actor* owner,
        class Actor* target,
        int          amplification,
        float        scale
    ) const;

    // vIndex: 7
    virtual bool isInstantaneous() const;

    // vIndex: 8
    virtual float getAttributeModifierValue(int amplifier, class AttributeModifier const& modifier) const;

    MCAPI MobEffect(
        uint               id,
        std::string const& resourceName,
        std::string const& locName,
        bool               isHarmful,
        int                color,
        int                icon,
        std::string const& iconName,
        bool               drawParticles
    );

    MCAPI void addAttributeBuff(class Attribute const& attribute, std::shared_ptr<class AttributeBuff> buff);

    MCAPI void
    addAttributeModifier(class Attribute const& attribute, std::shared_ptr<class AttributeModifier> modifier);

    MCAPI void
    applyModsAndBuffs(class BaseAttributeMap& attributeMapToRemoveFrom, int durationTicks, int amplification) const;

    MCAPI class mce::Color const& getColor() const;

    MCAPI std::string const& getDescriptionId() const;

    MCAPI float getDurationModifier() const;

    MCAPI uint getId() const;

    MCAPI class HashedString const& getParticleEffect(bool isAmbient) const;

    MCAPI std::string const& getResourceName() const;

    MCAPI bool isHarmful() const;

    MCAPI bool isVisible() const;

    MCAPI void setDurationAmplifier(std::shared_ptr<class Amplifier> amplifier);

    MCAPI void setValueAmplifier(std::shared_ptr<class Amplifier> amplifier);

    MCAPI void updateEffects(class Actor* target, int durationTicks, int amplification);

    MCAPI std::vector<std::pair<class Attribute const*, std::shared_ptr<class AttributeModifier>>> const&
          viewAttributeModifiers() const;

    MCAPI static class MobEffect* getById(uint effectId);

    MCAPI static class MobEffect* getByName(std::string const& name);

    MCAPI static std::string getNameById(uint effectId);

    MCAPI static void initEffects(class BaseGameVersion const& baseGameVersion, class Experiments const& experiments);

    MCAPI static void shutdownEffects();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class AttributeModifier
    _createAttributeModifer(class AttributeModifier const& baseMod, int amplification) const;

    MCAPI class InstantaneousAttributeBuff
    _createInstantBuff(class AttributeBuff const& baseBuff, int amplification, float scale) const;

    MCAPI class TemporalAttributeBuff
    _createTemporalBuff(class AttributeBuff const& baseBuff, int duration, int amplification) const;

    MCAPI void _setParticleEffectIds(char const* particleEffectId, char const* particleEffectAmbientId);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    darknessEffectFactorUpdate(struct MobEffect::FactorCalculationData& factorCalculationData, int duration);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI void applyEffects$(class Actor& target, int durationTicks, int amplification) const;

    MCAPI void applyInstantaneousEffect$(
        class Actor* source,
        class Actor* owner,
        class Actor* target,
        int          amplification,
        float        scale
    ) const;

    MCAPI float getAttributeModifierValue$(int amplifier, class AttributeModifier const& modifier) const;

    MCAPI bool isInstantaneous$() const;

    MCAPI void onActorHurt$(class Actor&, int, class ActorDamageSource const&, float) const;

    MCAPI void onActorRemovedAfterDeath$(class Actor&, int) const;

    MCAPI void onEffectExpired$(class Actor&) const;

    MCAPI void removeEffects$(class BaseAttributeMap& attributeMapToRemoveFrom);

    MCAPI static class MobEffect*& ABSORPTION();

    MCAPI static class MobEffect*& BAD_OMEN();

    MCAPI static class MobEffect*& BLINDNESS();

    MCAPI static class MobEffect*& CONDUIT_POWER();

    MCAPI static class MobEffect*& CONFUSION();

    MCAPI static class MobEffect*& DAMAGE_BOOST();

    MCAPI static class MobEffect*& DAMAGE_RESISTANCE();

    MCAPI static class MobEffect*& DARKNESS();

    MCAPI static class mce::Color const& DEFAULT_COLOR();

    MCAPI static class MobEffect*& DIG_SLOWDOWN();

    MCAPI static class MobEffect*& DIG_SPEED();

    MCAPI static class MobEffect*& EMPTY_EFFECT();

    MCAPI static class MobEffect*& FATAL_POISON();

    MCAPI static class MobEffect*& FIRE_RESISTANCE();

    MCAPI static class MobEffect*& HARM();

    MCAPI static class MobEffect*& HEAL();

    MCAPI static class MobEffect*& HEALTH_BOOST();

    MCAPI static class MobEffect*& HERO_OF_THE_VILLAGE();

    MCAPI static class MobEffect*& HUNGER();

    MCAPI static class MobEffect*& INFESTED();

    MCAPI static class MobEffect*& INVISIBILITY();

    MCAPI static class MobEffect*& JUMP();

    MCAPI static class MobEffect*& LEVITATION();

    MCAPI static class MobEffect*& MOVEMENT_SLOWDOWN();

    MCAPI static class MobEffect*& MOVEMENT_SPEED();

    MCAPI static class MobEffect*& NIGHT_VISION();

    MCAPI static class MobEffect*& OOZING();

    MCAPI static class MobEffect*& POISON();

    MCAPI static class MobEffect*& RAID_OMEN();

    MCAPI static class MobEffect*& REGENERATION();

    MCAPI static class MobEffect*& SATURATION();

    MCAPI static class MobEffect*& SLOW_FALLING();

    MCAPI static class MobEffect*& TRIAL_OMEN();

    MCAPI static class MobEffect*& WATER_BREATHING();

    MCAPI static class MobEffect*& WEAKNESS();

    MCAPI static class MobEffect*& WEAVING();

    MCAPI static class MobEffect*& WIND_CHARGED();

    MCAPI static class MobEffect*& WITHER();

    MCAPI static ::ll::CArrayT<std::unique_ptr<class MobEffect>>& mMobEffects();

    // NOLINTEND
};
