#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {

struct AutomaticFeatureRuleConditions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::std::optional<::SharedTypes::v1_21_20::FilterGroupData>> mBiomeFilter;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mPlacementPass;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~AutomaticFeatureRuleConditions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
