#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MobEffectInstance;
// clang-format on

struct MobEffectsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::MobEffectInstance>> mMobEffects;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEffectsComponent& operator=(MobEffectsComponent const&);
    MobEffectsComponent(MobEffectsComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::MobEffectsComponent& operator=(::MobEffectsComponent&&);

    MCAPI ~MobEffectsComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
