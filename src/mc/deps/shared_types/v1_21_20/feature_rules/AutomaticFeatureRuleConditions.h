#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20 {

struct AutomaticFeatureRuleConditions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 336> mUnk30fe52;
    ::ll::UntypedStorage<8, 32>  mUnk81336f;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomaticFeatureRuleConditions(AutomaticFeatureRuleConditions const&);
    AutomaticFeatureRuleConditions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_20::AutomaticFeatureRuleConditions&
    operator=(::SharedTypes::v1_21_20::AutomaticFeatureRuleConditions const&);

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
