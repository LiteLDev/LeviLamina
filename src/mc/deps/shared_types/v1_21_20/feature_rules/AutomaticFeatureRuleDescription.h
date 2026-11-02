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
    AutomaticFeatureRuleDescription& operator=(AutomaticFeatureRuleDescription const&);
    AutomaticFeatureRuleDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AutomaticFeatureRuleDescription(::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription const&);

    MCNAPI ::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription&
    operator=(::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription&&);

    MCNAPI ~AutomaticFeatureRuleDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_20::AutomaticFeatureRuleDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
