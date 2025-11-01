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
    AutomaticFeatureRuleConditions& operator=(AutomaticFeatureRuleConditions const&);
    AutomaticFeatureRuleConditions(AutomaticFeatureRuleConditions const&);
    AutomaticFeatureRuleConditions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_20::AutomaticFeatureRuleConditions&
    operator=(::SharedTypes::v1_21_20::AutomaticFeatureRuleConditions&&);

    MCNAPI ~AutomaticFeatureRuleConditions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
