#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct RandomOffsetComponent {
public:
    // RandomOffsetComponent inner types declare
    // clang-format off
    struct RangeAndSteps;
    // clang-format on

    // RandomOffsetComponent inner types define
    struct RangeAndSteps {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mRange;
        ::ll::TypedStorage<4, 4, uint>                      mSteps;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::SharedTypes::v1_26_20::BlockDefinition::RandomOffsetComponent::RangeAndSteps> mRangeX;
    ::ll::TypedStorage<4, 12, ::SharedTypes::v1_26_20::BlockDefinition::RandomOffsetComponent::RangeAndSteps> mRangeY;
    ::ll::TypedStorage<4, 12, ::SharedTypes::v1_26_20::BlockDefinition::RandomOffsetComponent::RangeAndSteps> mRangeZ;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
