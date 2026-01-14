#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

namespace SharedTypes::v1_21_20 {

struct AutomaticFeatureRuleConditions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 336, ::std::optional<::SharedTypes::v1_21_20::FilterGroupData>> mBiomeFilter;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mPlacementPass;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomaticFeatureRuleConditions& operator=(AutomaticFeatureRuleConditions const&);
    AutomaticFeatureRuleConditions(AutomaticFeatureRuleConditions const&);
    AutomaticFeatureRuleConditions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_20::AutomaticFeatureRuleConditions&
    operator=(::SharedTypes::v1_21_20::AutomaticFeatureRuleConditions&&);

    MCAPI ~AutomaticFeatureRuleConditions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
