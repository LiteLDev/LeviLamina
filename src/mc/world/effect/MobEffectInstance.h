#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/effect/MobEffect.h"

// auto generated inclusion list
#include "mc/world/Difficulty.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MobEffectInstance {
public:
    // prevent constructor by default
    MobEffectInstance();

    MobEffect::EffectType            mId;                              // this+0x0
    int                              mDuration;                        // this+0x4
    int                              mDurationEasy;                    // this+0x8
    int                              mDurationNormal;                  // this+0xC
    int                              mDurationHard;                    // this+0x10
    int                              mAmplifier;                       // this+0x14
    bool                             mDisplayOnScreenTextureAnimation; // this+0x18
    bool                             mAmbient;                         // this+0x19
    bool                             mNoCounter;                       // this+0x1A
    bool                             mEffectVisible;                   // this+0x1B
    MobEffect::FactorCalculationData mFactorCalculationData;           // this+0x20

public:
    // NOLINTBEGIN
    MCAPI MobEffectInstance(class MobEffectInstance&&);

    MCAPI MobEffectInstance(class MobEffectInstance const&);

    MCAPI explicit MobEffectInstance(uint type);

    MCAPI MobEffectInstance(uint type, int duration);

    MCAPI MobEffectInstance(uint type, int duration, int amplifier);

    MCAPI
    MobEffectInstance(uint type, int duration, int amplifier, bool ambient, bool showParticles, bool showAnimation);

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

    MCAPI void applyEffects(class Actor& mob);

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

    MCAPI void onActorHurt(class Actor& mob, class ActorDamageSource const& source, float damage) const;

    MCAPI void onActorRemovedAfterDeath(class Actor& mob) const;

    MCAPI void onEffectsExpired(class Actor& mob) const;

    MCAPI bool operator!=(class MobEffectInstance const& obj) const;

    MCAPI class MobEffectInstance& operator=(class MobEffectInstance&&);

    MCAPI class MobEffectInstance& operator=(class MobEffectInstance const&);

    MCAPI void removeEffects(class BaseAttributeMap& attributeMapToRemoveFrom) const;

    MCAPI std::unique_ptr<class CompoundTag> save() const;

    MCAPI void setDifficulityDuration(::Difficulty difficulty, int duration);

    MCAPI void setDuration(int dur);

    MCAPI bool tick();

    MCAPI void tryInitializeMobEffectData();

    MCAPI void update(class MobEffectInstance const& takeOver);

    MCAPI void updateEffects(class Actor* mob) const;

    MCAPI ~MobEffectInstance();

    MCAPI static class mce::Color getAverageColorValue(std::vector<class MobEffectInstance> const& effects);

    MCAPI static class MobEffectInstance load(class CompoundTag const& tag);

    MCAPI static int const MAX_AMPLIFIER_COUNT;

    MCAPI static class MobEffectInstance const NO_EFFECT;

    MCAPI static float splashDurationMultiplier;

    // NOLINTEND
};
