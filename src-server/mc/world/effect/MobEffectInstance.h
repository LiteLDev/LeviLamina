#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/EffectDuration.h"
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
namespace mce { class Color; }
// clang-format on

class MobEffectInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mId;
    ::ll::TypedStorage<4, 4, ::EffectDuration> mDuration;
    ::ll::TypedStorage<4, 8, ::std::optional<::EffectDuration>> mDurationEasy;
    ::ll::TypedStorage<4, 8, ::std::optional<::EffectDuration>> mDurationNormal;
    ::ll::TypedStorage<4, 8, ::std::optional<::EffectDuration>> mDurationHard;
    ::ll::TypedStorage<4, 4, int> mAmplifier;
    ::ll::TypedStorage<1, 1, bool> mDisplayOnScreenTextureAnimation;
    ::ll::TypedStorage<1, 1, bool> mIsCounterPausedThisTick;
    ::ll::TypedStorage<1, 1, bool> mAmbient;
    ::ll::TypedStorage<1, 1, bool> mEffectVisible;
    ::ll::TypedStorage<8, 96, ::MobEffect::FactorCalculationData> mFactorCalculationData;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEffectInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MobEffectInstance(::MobEffectInstance&&);

    MCAPI MobEffectInstance(::MobEffectInstance const&);

    MCAPI explicit MobEffectInstance(uint id);

    MCAPI ::std::string getDisplayName() const;

    MCAPI ::MobEffectInstance& operator=(::MobEffectInstance&&);

    MCAPI ::MobEffectInstance& operator=(::MobEffectInstance const&);

    MCAPI ::std::unique_ptr<::CompoundTag> save() const;

    MCAPI void update(::MobEffectInstance const& takeOver);

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
    MCAPI static ::MobEffectInstance const& NO_EFFECT();

    MCAPI static float& splashDurationMultiplier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MobEffectInstance&&);

    MCAPI void* $ctor(::MobEffectInstance const&);

    MCAPI void* $ctor(uint id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
