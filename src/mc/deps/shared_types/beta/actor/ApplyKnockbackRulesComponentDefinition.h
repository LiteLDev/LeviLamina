#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

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
        // ApplyKnockbackRulesPreset inner types define
        enum class ExtraKnockbackApproach : uchar {
            ReapplyDefault  = 0,
            MultiplyReduced = 1,
        };

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
        ::ll::TypedStorage<
            1,
            1,
            ::SharedTypes::Beta::ApplyKnockbackRulesComponentDefinition::ApplyKnockbackRulesPreset::
                ExtraKnockbackApproach>
            mExtraKnockbackApproach;
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
};

} // namespace SharedTypes::Beta
