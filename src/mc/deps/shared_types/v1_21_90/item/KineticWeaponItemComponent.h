#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_90/item/KineticEffectConditions.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_90 {

struct KineticWeaponItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::std::optional<::SharedTypes::v1_21_90::KineticEffectConditions>> mDamageConditions;
    ::ll::TypedStorage<4, 16, ::std::optional<::SharedTypes::v1_21_90::KineticEffectConditions>> mKnockbackConditions;
    ::ll::TypedStorage<4, 16, ::std::optional<::SharedTypes::v1_21_90::KineticEffectConditions>> mDismountConditions;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                                          mReach;
    ::ll::TypedStorage<4, 12, ::std::optional<::SharedTypes::FloatRange>>                        mCreativeReach;
    ::ll::TypedStorage<4, 4, float>                                                              mHitboxMargin;
    ::ll::TypedStorage<4, 4, float>                                                              mDamageModifier;
    ::ll::TypedStorage<4, 4, float>                                                              mDamageMultiplier;
    ::ll::TypedStorage<2, 2, short>                                                              mDelay;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_90
