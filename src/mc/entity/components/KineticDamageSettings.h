#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/entity/components/KineticEffectConditions.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_90 { struct KineticWeaponItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct KineticDamageSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::std::optional<::KineticEffectConditions>> mDamageConditions;
    ::ll::TypedStorage<4, 16, ::std::optional<::KineticEffectConditions>> mKnockbackConditions;
    ::ll::TypedStorage<4, 16, ::std::optional<::KineticEffectConditions>> mDismountConditions;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                   mReach;
    ::ll::TypedStorage<4, 12, ::std::optional<::SharedTypes::FloatRange>> mCreativeReach;
    ::ll::TypedStorage<4, 4, float>                                       mHitboxMargin;
    ::ll::TypedStorage<4, 4, float>                                       mDamageModifier;
    ::ll::TypedStorage<4, 4, float>                                       mDamageMultiplier;
    ::ll::TypedStorage<2, 2, ushort>                                      mDelay;
    // NOLINTEND

public:
    // prevent constructor by default
    KineticDamageSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit KineticDamageSettings(::SharedTypes::v1_21_90::KineticWeaponItemComponent const& data);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_90::KineticWeaponItemComponent const& data);
    // NOLINTEND
};

// free functions
// NOLINTBEGIN
MCFOLD bool operator==(::KineticDamageSettings const&, ::KineticDamageSettings const&);
// NOLINTEND
