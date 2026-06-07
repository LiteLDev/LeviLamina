#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta {

struct ApplyKnockbackRulesComponentDefinition {
public:
    // ApplyKnockbackRulesComponentDefinition inner types declare
    // clang-format off
    struct ApplyKnockbackRulesPreset;
    // clang-format on

    // ApplyKnockbackRulesComponentDefinition inner types define
    struct ApplyKnockbackRulesPreset {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mFilter;
        ::ll::TypedStorage<4, 4, float>                                      mHorizontalPower;
        ::ll::TypedStorage<4, 4, float>                                      mVerticalPower;
        ::ll::TypedStorage<4, 4, float>                                      mVerticalVelocityCap;
        ::ll::TypedStorage<1, 1, bool>                                       mCheckIfTargetIsImmersedInWater;
        ::ll::TypedStorage<4, 4, float>                                      mScalePreviousVelocity;
        ::ll::TypedStorage<4, 4, float>                                      mHorizontalAngleScale;
        ::ll::TypedStorage<4, 4, float>                                      mVerticalHitAngleScale;
        ::ll::TypedStorage<4, 4, float>                                      mVerticalPositionAngleScale;
        ::ll::TypedStorage<1, 1, bool>                                       mScaleWithDamage;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ApplyKnockbackRulesPreset();

        MCAPI bool operator==(
            ::SharedTypes::Beta::ApplyKnockbackRulesComponentDefinition::ApplyKnockbackRulesPreset const& other
        ) const;

        MCAPI ~ApplyKnockbackRulesPreset();
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
        MCAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::SharedTypes::Beta::ApplyKnockbackRulesComponentDefinition::ApplyKnockbackRulesPreset>>
        mPresets;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ApplyKnockbackRulesComponentDefinition();
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

} // namespace SharedTypes::Beta
