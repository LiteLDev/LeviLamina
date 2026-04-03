#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_0 { struct DetectionRule; }
// clang-format on

namespace SharedTypes::v1_26_10::BlockDefinition {

struct LiquidDetectionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_0::DetectionRule>> mDetectionRules;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LiquidDetectionComponent();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& DetectionRulesId();

    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
