#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20 {

struct AutomaticFeatureRuleDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk107663;
    ::ll::UntypedStorage<8, 32> mUnk6c6c80;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomaticFeatureRuleDescription(AutomaticFeatureRuleDescription const&);
    AutomaticFeatureRuleDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription&
    operator=(::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription const&);

    MCNAPI ::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription&
    operator=(::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription&&);

    MCNAPI ~AutomaticFeatureRuleDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
