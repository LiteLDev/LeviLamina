#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/effect/MobEffectIds.h"

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
class Experiments;
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
    // prevent constructor by default
    MobEffect();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MobEffect() = default;

    virtual void applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const;

    virtual void removeEffects(::BaseAttributeMap& attributeMapToRemoveFrom) const;

    virtual void onEffectExpired(::Actor& target) const;

    virtual void onActorDied(::Actor& target, int amplifier) const;

    virtual void onActorHurt(::Actor& target, int amplifier, ::ActorDamageSource const& source, float damage) const;

    virtual void
    applyInstantaneousEffect(::Actor* source, ::Actor* owner, ::Actor* target, int amplification, float scale) const;

    virtual bool isInstantaneous() const;

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

    MCAPI ::TemporalAttributeBuff
    _createTemporalBuff(::AttributeBuff const& baseBuff, ::EffectDuration duration, int amplification) const;

    MCAPI void _setParticleEffectIds(char const* particleEffectId, char const* particleEffectAmbientId);

    MCAPI void addAttributeBuff(::Attribute const& attribute, ::std::shared_ptr<::AttributeBuff> buff);

    MCAPI void addAttributeModifier(::Attribute const& attribute, ::std::shared_ptr<::AttributeModifier> modifier);

#ifdef LL_PLAT_C
    MCAPI void applyModsAndBuffs(
        ::BaseAttributeMap& attributeMapToRemoveFrom,
        ::EffectDuration    durationTicks,
        int                 amplification
    ) const;
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
    MCAPI static ::MobEffect const* getByName(::std::string const& name);

    MCAPI static ::std::string getNameById(uint effectId);

    MCAPI static void initEffects(::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::Color const& DEFAULT_COLOR();

    MCAPI static ::Bedrock::DenseEnumMap<::MobEffectIds, ::std::unique_ptr<::MobEffect>, 38>& mMobEffects();
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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $applyEffects(::Actor& target, ::EffectDuration durationTicks, int amplification) const;

    MCAPI void $removeEffects(::BaseAttributeMap& attributeMapToRemoveFrom) const;

    MCFOLD void $onEffectExpired(::Actor& target) const;

    MCFOLD void $onActorDied(::Actor& target, int amplifier) const;

    MCFOLD void $onActorHurt(::Actor& target, int amplifier, ::ActorDamageSource const& source, float damage) const;

    MCAPI void
    $applyInstantaneousEffect(::Actor* source, ::Actor* owner, ::Actor* target, int amplification, float scale) const;

    MCFOLD bool $isInstantaneous() const;

    MCAPI float $getAttributeModifierValue(int amplifier, ::AttributeModifier const& modifier) const;


    // NOLINTEND
};
