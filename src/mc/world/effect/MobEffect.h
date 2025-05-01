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
class InstantaneousAttributeBuff;
class TemporalAttributeBuff;
struct EffectDuration;
// clang-format on

class MobEffect {
public:
    // MobEffect inner types declare
    // clang-format off
    struct FactorCalculationData;
    // clang-format on

    // MobEffect inner types define
    using AttributeBuffPair = ::std::pair<::Attribute const*, ::std::shared_ptr<::AttributeBuff>>;

    using AttributeModPair = ::std::pair<::Attribute const*, ::std::shared_ptr<::AttributeModifier>>;

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
        // prevent constructor by default
        FactorCalculationData(FactorCalculationData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::MobEffect::FactorCalculationData& operator=(::MobEffect::FactorCalculationData const&);

        MCNAPI ::std::unique_ptr<::CompoundTag> save() const;

        MCNAPI ~FactorCalculationData();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::MobEffect::FactorCalculationData load(::CompoundTag const* tag);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

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
    // vIndex: 0
    virtual ~MobEffect();

    // vIndex: 1
    virtual void applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const;

    // vIndex: 2
    virtual void removeEffects(::BaseAttributeMap& attributeMapToRemoveFrom);

    // vIndex: 3
    virtual void onEffectExpired(::Actor&) const;

    // vIndex: 4
    virtual void onActorDied(::Actor&, int) const;

    // vIndex: 5
    virtual void onActorHurt(::Actor&, int, ::ActorDamageSource const&, float) const;

    // vIndex: 6
    virtual void
    applyInstantaneousEffect(::Actor* source, ::Actor* owner, ::Actor* target, int amplification, float scale) const;

    // vIndex: 7
    virtual bool isInstantaneous() const;

    // vIndex: 8
    virtual float getAttributeModifierValue(int amplifier, ::AttributeModifier const& modifier) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MobEffect(
        uint                 id,
        ::std::string const& resourceName,
        ::std::string const& locName,
        bool                 isHarmful,
        int                  color,
        int                  icon,
        ::std::string const& iconName,
        bool                 drawParticles
    );

    MCAPI ::InstantaneousAttributeBuff
    _createInstantBuff(::AttributeBuff const& baseBuff, int amplification, float scale) const;

    MCAPI ::TemporalAttributeBuff
    _createTemporalBuff(::AttributeBuff const& baseBuff, ::EffectDuration duration, int amplification) const;

    MCAPI void _setParticleEffectIds(char const* particleEffectId, char const* particleEffectAmbientId);

    MCAPI void addAttributeBuff(::Attribute const& attribute, ::std::shared_ptr<::AttributeBuff> buff);

    MCAPI void addAttributeModifier(::Attribute const& attribute, ::std::shared_ptr<::AttributeModifier> modifier);

    MCAPI void
    applyModsAndBuffs(::BaseAttributeMap& attributeMapToRemoveFrom, ::EffectDuration durationTicks, int amplification)
        const;

    MCAPI void setDurationAmplifier(::std::shared_ptr<::Amplifier> amplifier);

    MCAPI ::MobEffect& setFactorCalculationData(::MobEffect::FactorCalculationData const& factorCalculationData);

    MCAPI ::MobEffect& setOnApplySound(::SharedTypes::Legacy::LevelSoundEvent onApplySound);

    MCAPI void setValueAmplifier(::std::shared_ptr<::Amplifier> amplifier);

    MCAPI void
    updateModsAndBuffs(::BaseAttributeMap& attributeMapToRemoveFrom, ::EffectDuration durationTicks, int amplification)
        const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    darknessEffectFactorUpdate(::MobEffect::FactorCalculationData& factorCalculationData, ::EffectDuration duration);

    MCAPI static ::MobEffect* getByName(::std::string const& name);

    MCAPI static ::MobEffect::FactorCalculationData getDarknessEffectFactorCalculationData();

    MCAPI static void initEffects(::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);
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

    MCAPI static ::MobEffect*& RAID_OMEN();

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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        uint                 id,
        ::std::string const& resourceName,
        ::std::string const& locName,
        bool                 isHarmful,
        int                  color,
        int                  icon,
        ::std::string const& iconName,
        bool                 drawParticles
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const;

    MCAPI void $removeEffects(::BaseAttributeMap& attributeMapToRemoveFrom);

    MCFOLD void $onEffectExpired(::Actor&) const;

    MCFOLD void $onActorDied(::Actor&, int) const;

    MCFOLD void $onActorHurt(::Actor&, int, ::ActorDamageSource const&, float) const;

    MCAPI void
    $applyInstantaneousEffect(::Actor* source, ::Actor* owner, ::Actor* target, int amplification, float scale) const;

    MCFOLD bool $isInstantaneous() const;

    MCAPI float $getAttributeModifierValue(int amplifier, ::AttributeModifier const& modifier) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
