#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct SonicBoomGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>          mDuration;
    ::ll::TypedStorage<4, 4, float>          mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>          mAttackDamage;
    ::ll::TypedStorage<4, 4, float>          mAttackRangeHorizontal;
    ::ll::TypedStorage<4, 4, float>          mAttackRangeVertical;
    ::ll::TypedStorage<4, 4, float>          mAttackCooldown;
    ::ll::TypedStorage<4, 4, float>          mKnockbackHorizontalStrength;
    ::ll::TypedStorage<4, 4, float>          mKnockbackVerticalStrength;
    ::ll::TypedStorage<4, 4, float>          mKnockbackHeightCap;
    ::ll::TypedStorage<4, 4, float>          mDurationUntilAttackSound;
    ::ll::TypedStorage<8, 32, ::std::string> mAttackSound;
    ::ll::TypedStorage<8, 32, ::std::string> mChargeSound;
    // NOLINTEND

public:
    // prevent constructor by default
    SonicBoomGoalDefinition& operator=(SonicBoomGoalDefinition const&);
    SonicBoomGoalDefinition(SonicBoomGoalDefinition const&);
    SonicBoomGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_110::SonicBoomGoalDefinition&
    operator=(::SharedTypes::v1_21_110::SonicBoomGoalDefinition&&);

    MCAPI ~SonicBoomGoalDefinition();
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

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
