#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Difficulty.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MobEffectInstance {
public:
    // prevent constructor by default
    MobEffectInstance();

public:
    // NOLINTBEGIN
    MCAPI MobEffectInstance(class MobEffectInstance&&);

    MCAPI MobEffectInstance(class MobEffectInstance const&);

    MCAPI explicit MobEffectInstance(uint id);

    MCAPI MobEffectInstance(uint id, int duration);

    MCAPI MobEffectInstance(uint id, int duration, int amplifier);

    MCAPI
    MobEffectInstance(uint id, int duration, int amplifier, bool ambient, bool effectVisible, bool displayAnimation);

    MCAPI MobEffectInstance(
        uint id,
        int  duration,
        int  durationEasy,
        int  durationNormal,
        int  durationHard,
        int  amplifier,
        bool ambient,
        bool effectVisible,
        bool displayAnimation
    );

    MCAPI void applyEffects(class Actor&);

    MCAPI bool displaysOnScreenTextureAnimation() const;

    MCAPI int getAmplifier() const;

    MCAPI class HashedString const& getComponentName() const;

    MCAPI std::string getDescriptionId() const;

    MCAPI int getDifficulityDuration(::Difficulty difficulty) const;

    MCAPI std::string getDisplayName() const;

    MCAPI int getDuration() const;

    MCAPI uint getId() const;

    MCAPI int getLingerDuration() const;

    MCAPI int getSplashDuration() const;

    MCAPI class MobEffectInstance getSplashEffect() const;

    MCAPI bool isAmbient() const;

    MCAPI bool isEffectVisible() const;

    MCAPI void onActorHurt(class Actor&, class ActorDamageSource const&, float) const;

    MCAPI void onActorRemovedAfterDeath(class Actor&) const;

    MCAPI void onEffectsExpired(class Actor&) const;

    MCAPI bool operator!=(class MobEffectInstance const& obj) const;

    MCAPI class MobEffectInstance& operator=(class MobEffectInstance&&);

    MCAPI class MobEffectInstance& operator=(class MobEffectInstance const&);

    MCAPI void removeEffects(class BaseAttributeMap&) const;

    MCAPI std::unique_ptr<class CompoundTag> save() const;

    MCAPI void setDifficulityDuration(::Difficulty difficulty, int duration);

    MCAPI void setDuration(int dur);

    MCAPI bool tick();

    MCAPI void tryInitializeMobEffectData();

    MCAPI void update(class MobEffectInstance const& takeOver);

    MCAPI void updateEffects(class Actor* mob) const;

    MCAPI ~MobEffectInstance();

    MCAPI static class mce::Color getAverageColorValue(std::vector<class MobEffectInstance> const&);

    MCAPI static class MobEffectInstance load(class CompoundTag const& tag);

    MCAPI static int const MAX_AMPLIFIER_COUNT;

    MCAPI static class MobEffectInstance const NO_EFFECT;

    MCAPI static float splashDurationMultiplier;

    // NOLINTEND
};
