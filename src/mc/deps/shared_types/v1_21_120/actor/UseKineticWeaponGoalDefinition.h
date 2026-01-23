#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/MeleeAttackGoalBaseDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct UseKineticWeaponGoalDefinition : public ::SharedTypes::v1_21_120::MeleeAttackGoalBaseDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                     mApproachDistance;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mRepositionDistance;
    ::ll::TypedStorage<4, 4, float>                     mRepositionSpeedMultiplier;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mCooldownDistance;
    ::ll::TypedStorage<4, 4, float>                     mCooldownSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>                     mWeaponReachMultiplier;
    ::ll::TypedStorage<4, 4, float>                     mWeaponMinSpeedMultiplier;
    // NOLINTEND

public:
    // prevent constructor by default
    UseKineticWeaponGoalDefinition& operator=(UseKineticWeaponGoalDefinition const&);
    UseKineticWeaponGoalDefinition(UseKineticWeaponGoalDefinition const&);
    UseKineticWeaponGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UseKineticWeaponGoalDefinition(::SharedTypes::v1_21_120::UseKineticWeaponGoalDefinition&&);

    MCAPI ~UseKineticWeaponGoalDefinition();
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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_120::UseKineticWeaponGoalDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
