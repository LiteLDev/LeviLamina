#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20 {

struct AutomaticFeatureRuleDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string> mPlacesFeature;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomaticFeatureRuleDescription(AutomaticFeatureRuleDescription const&);
    AutomaticFeatureRuleDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription&
    operator=(::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription&&);

    MCFOLD ::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription&
    operator=(::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription const&);

    MCAPI ~AutomaticFeatureRuleDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
