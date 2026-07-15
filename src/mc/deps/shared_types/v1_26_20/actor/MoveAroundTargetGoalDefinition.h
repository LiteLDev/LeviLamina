#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct MoveAroundTargetGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mFilters;
    ::ll::TypedStorage<4, 4, float>                                      mSpeed;
    ::ll::TypedStorage<4, 4, float>                                      mSpreadDegrees;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                  mDestinationRange;
    ::ll::TypedStorage<4, 4, float>                                      mHeightDifferenceLimit;
    ::ll::TypedStorage<4, 4, int>                                        mHorizontalSearchDistance;
    ::ll::TypedStorage<4, 4, int>                                        mVerticalSearchDistance;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::SharedTypes::v1_26_20::MoveAroundTargetGoalDefinition const&) const;
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

} // namespace SharedTypes::v1_26_20
