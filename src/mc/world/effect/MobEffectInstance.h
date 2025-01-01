#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Difficulty.h"
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BaseAttributeMap;
class CompoundTag;
class HashedString;
struct EffectDuration;
namespace mce { class Color; }
// clang-format on

class MobEffectInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                mId;
    ::ll::TypedStorage<4, 4, ::EffectDuration>                    mDuration;
    ::ll::TypedStorage<4, 8, ::std::optional<::EffectDuration>>   mDurationEasy;
    ::ll::TypedStorage<4, 8, ::std::optional<::EffectDuration>>   mDurationNormal;
    ::ll::TypedStorage<4, 8, ::std::optional<::EffectDuration>>   mDurationHard;
    ::ll::TypedStorage<4, 4, int>                                 mAmplifier;
    ::ll::TypedStorage<1, 1, bool>                                mDisplayOnScreenTextureAnimation;
    ::ll::TypedStorage<1, 1, bool>                                mIsCounterPausedThisTick;
    ::ll::TypedStorage<1, 1, bool>                                mAmbient;
    ::ll::TypedStorage<1, 1, bool>                                mEffectVisible;
    ::ll::TypedStorage<8, 96, ::MobEffect::FactorCalculationData> mFactorCalculationData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MobEffectInstance(::MobEffectInstance&&);

    MCAPI MobEffectInstance(::MobEffectInstance const&);

    MCAPI explicit MobEffectInstance(uint id);

    MCAPI MobEffectInstance(uint id, ::EffectDuration duration);

    MCAPI MobEffectInstance(uint id, ::EffectDuration duration, int amplifier);

    MCAPI MobEffectInstance(
        uint             id,
        ::EffectDuration duration,
        int              amplifier,
        bool             ambient,
        bool             effectVisible,
        bool             displayAnimation
    );

    MCAPI void applyEffects(::Actor& mob) const;

    MCAPI bool displaysOnScreenTextureAnimation() const;

    MCAPI int getAmplifier() const;

    MCAPI ::HashedString const& getComponentName() const;

    MCAPI ::std::string getDescriptionId() const;

    MCAPI ::EffectDuration getDifficultyDuration(::Difficulty difficulty) const;

    MCAPI ::std::string getDisplayName() const;

    MCAPI ::EffectDuration getDuration() const;

    MCAPI uint getId() const;

    MCAPI ::EffectDuration getLingerDuration() const;

    MCAPI ::EffectDuration getSplashDuration() const;

    MCAPI ::MobEffectInstance getSplashEffect() const;

    MCAPI bool isAmbient() const;

    MCAPI bool isEffectVisible() const;

    MCAPI void onActorDied(::Actor& mob) const;

    MCAPI void onActorHurt(::Actor& mob, ::ActorDamageSource const& source, float damage) const;

    MCAPI void onEffectsExpired(::Actor& mob) const;

    MCAPI bool operator!=(::MobEffectInstance const& obj) const;

    MCAPI ::MobEffectInstance& operator=(::MobEffectInstance&&);

    MCAPI ::MobEffectInstance& operator=(::MobEffectInstance const&);

    MCAPI void pauseCounterThisTick();

    MCAPI void removeEffects(::BaseAttributeMap& attributeMapToRemoveFrom) const;

    MCAPI ::std::unique_ptr<::CompoundTag> save() const;

    MCAPI void setDifficultyDuration(::Difficulty difficulty, ::EffectDuration duration);

    MCAPI void setDuration(::EffectDuration dur);

    MCAPI void splitDurations(int splitValue);

    MCAPI bool tick();

    MCAPI void tryInitializeMobEffectData();

    MCAPI void update(::MobEffectInstance const& takeOver);

    MCAPI void updateEffects(::Actor* mob) const;

    MCAPI ~MobEffectInstance();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::mce::Color getAverageColorValue(::std::vector<::MobEffectInstance> const& effects);

    MCAPI static ::MobEffectInstance load(::CompoundTag const& tag);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& MAX_AMPLIFIER_COUNT();

    MCAPI static ::MobEffectInstance const& NO_EFFECT();

    MCAPI static float& splashDurationMultiplier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MobEffectInstance&&);

    MCAPI void* $ctor(::MobEffectInstance const&);

    MCAPI void* $ctor(uint id);

    MCAPI void* $ctor(uint id, ::EffectDuration duration);

    MCAPI void* $ctor(uint id, ::EffectDuration duration, int amplifier);

    MCAPI void*
    $ctor(uint id, ::EffectDuration duration, int amplifier, bool ambient, bool effectVisible, bool displayAnimation);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
