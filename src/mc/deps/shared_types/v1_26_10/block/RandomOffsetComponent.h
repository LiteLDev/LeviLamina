#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10::BlockDefinition {

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
    ::ll::TypedStorage<4, 12, ::SharedTypes::v1_26_10::BlockDefinition::RandomOffsetComponent::RangeAndSteps> mRangeX;
    ::ll::TypedStorage<4, 12, ::SharedTypes::v1_26_10::BlockDefinition::RandomOffsetComponent::RangeAndSteps> mRangeY;
    ::ll::TypedStorage<4, 12, ::SharedTypes::v1_26_10::BlockDefinition::RandomOffsetComponent::RangeAndSteps> mRangeZ;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();

    MCAPI static ::std::string_view const& RangeId();

    MCAPI static ::std::string_view const& StepsId();

    MCAPI static ::std::string_view const& XId();

    MCAPI static ::std::string_view const& YId();

    MCAPI static ::std::string_view const& ZId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
