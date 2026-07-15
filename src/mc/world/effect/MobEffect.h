#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class Amplifier;
class Attribute;
class AttributeBuff;
class AttributeModifier;
class BaseAttributeMap;
class BaseGameVersion;
class CompoundTag;
class Experiments;
struct EffectDuration;
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
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>   mPaddingDuration;
        ::ll::TypedStorage<4, 4, float> mFactorStart;
        ::ll::TypedStorage<4, 4, float> mFactorTarget;
        ::ll::TypedStorage<4, 4, float> mFactorCurrent;
        ::ll::TypedStorage<8, 64, ::std::function<void(::MobEffect::FactorCalculationData&, ::EffectDuration)>>
                                        mUpdateFn;
        ::ll::TypedStorage<4, 4, int>   mTicksActive;
        ::ll::TypedStorage<4, 4, float> mFactorPreviousFrame;
        ::ll::TypedStorage<1, 1, bool>  mHadEffectLastTick;
        ::ll::TypedStorage<1, 1, bool>  mHadApplied;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI ::std::unique_ptr<::CompoundTag> save() const;
#endif
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI static ::MobEffect::FactorCalculationData load(::CompoundTag const* tag);
#endif
        // NOLINTEND
    };

    using AttributeBuffPair = ::std::pair<::Attribute const*, ::std::shared_ptr<::AttributeBuff>>;

    using AttributeModPair = ::std::pair<::Attribute const*, ::std::shared_ptr<::AttributeModifier>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint const>                                              mId;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsHarmful;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                           mColor;
    ::ll::TypedStorage<8, 48, ::HashedString>                                         mParticleEffectId;
    ::ll::TypedStorage<8, 48, ::HashedString>                                         mParticleEffectAmbientId;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mDescriptionId;
    ::ll::TypedStorage<4, 4, int>                                                     mIcon;
    ::ll::TypedStorage<4, 4, float>                                                   mDurationModifier;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsDisabled;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mResourceName;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mIconName;
    ::ll::TypedStorage<1, 1, bool>                                                    mEffectVisible;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::Legacy::LevelSoundEvent>> mOnApplySound;
    ::ll::TypedStorage<8, 48, ::HashedString>                                         mComponentName;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Amplifier>>                         mValueAmplifier;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Amplifier>>                         mDurationAmplifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::Attribute const*, ::std::shared_ptr<::AttributeBuff>>>>
        mAttributeBuffs;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::Attribute const*, ::std::shared_ptr<::AttributeModifier>>>>
                                                                  mAttributeModifiers;
    ::ll::TypedStorage<8, 96, ::MobEffect::FactorCalculationData> mFactorCalculationData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MobEffect() = default;

    virtual void applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const;

    virtual void removeEffects(::BaseAttributeMap&);

    virtual void onEffectExpired(::Actor& target) const;

    virtual void onActorDied(::Actor& target, int amplifier) const;

    virtual void onActorHurt(::Actor&, int, ::ActorDamageSource const&, float) const;

    virtual void applyInstantaneousEffect(::Actor*, ::Actor*, ::Actor*, int, float) const;

    virtual bool isInstantaneous() const;

    virtual float getAttributeModifierValue(int, ::AttributeModifier const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void applyModsAndBuffs(
        ::BaseAttributeMap& attributeMapToRemoveFrom,
        ::EffectDuration    durationTicks,
        int                 amplification
    ) const;

#ifdef LL_PLAT_C
    MCAPI void updateEffects(::Actor& target, ::EffectDuration durationTicks, int amplification);
#endif

    MCAPI void updateModsAndBuffs(
        ::BaseAttributeMap& attributeMapToRemoveFrom,
        ::EffectDuration    durationTicks,
        int                 amplification
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::MobEffect* getByName(::std::string const& name);

    MCAPI static ::std::string getNameById(uint effectId);

    MCAPI static void initEffects(::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);

    MCAPI static void shutdownEffects();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::MobEffect*& ABSORPTION();

    MCAPI static ::MobEffect*& BAD_OMEN();

    MCAPI static ::MobEffect*& BLINDNESS();

    MCAPI static ::MobEffect*& CONDUIT_POWER();

    MCAPI static ::MobEffect*& CONFUSION();

    MCAPI static ::MobEffect*& DAMAGE_BOOST();

    MCAPI static ::MobEffect*& DAMAGE_RESISTANCE();

    MCAPI static ::MobEffect*& DARKNESS();

    MCAPI static ::mce::Color const& DEFAULT_COLOR();

    MCAPI static ::MobEffect*& DIG_SLOWDOWN();

    MCAPI static ::MobEffect*& DIG_SPEED();

    MCAPI static ::MobEffect*& EMPTY_EFFECT();

    MCAPI static ::MobEffect*& FATAL_POISON();

    MCAPI static ::MobEffect*& FIRE_RESISTANCE();

    MCAPI static ::MobEffect*& HARM();

    MCAPI static ::MobEffect*& HEAL();

    MCAPI static ::MobEffect*& HEALTH_BOOST();

    MCAPI static ::MobEffect*& HERO_OF_THE_VILLAGE();

    MCAPI static ::MobEffect*& HUNGER();

    MCAPI static ::MobEffect*& INFESTED();

    MCAPI static ::MobEffect*& INVISIBILITY();

    MCAPI static ::MobEffect*& JUMP();

    MCAPI static ::MobEffect*& LEVITATION();

    MCAPI static ::MobEffect*& MOVEMENT_SLOWDOWN();

    MCAPI static ::MobEffect*& MOVEMENT_SPEED();

    MCAPI static ::MobEffect*& NIGHT_VISION();

    MCAPI static ::MobEffect*& OOZING();

    MCAPI static ::MobEffect*& POISON();

    MCAPI static ::MobEffect*& REGENERATION();

    MCAPI static ::MobEffect*& SATURATION();

    MCAPI static ::MobEffect*& SLOW_FALLING();

    MCAPI static ::MobEffect*& TRIAL_OMEN();

    MCAPI static ::MobEffect*& WATER_BREATHING();

    MCAPI static ::MobEffect*& WEAKNESS();

    MCAPI static ::MobEffect*& WEAVING();

    MCAPI static ::MobEffect*& WIND_CHARGED();

    MCAPI static ::MobEffect*& WITHER();

    MCAPI static ::std::add_lvalue_reference_t<::std::unique_ptr<::MobEffect>[]> mMobEffects();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const;

    MCFOLD void $onActorDied(::Actor& target, int amplifier) const;


    // NOLINTEND
};
