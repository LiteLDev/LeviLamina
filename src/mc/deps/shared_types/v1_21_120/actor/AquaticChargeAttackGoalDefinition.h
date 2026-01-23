#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct AquaticChargeAttackGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                     mMaxChargeDistance;
    ::ll::TypedStorage<4, 4, float>                     mChargeSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>                     mAttackReach;
    ::ll::TypedStorage<4, 4, float>                     mKnockbackForce;
    ::ll::TypedStorage<4, 4, float>                     mChargeOvershootDistance;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mChargeCooldownTime;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
