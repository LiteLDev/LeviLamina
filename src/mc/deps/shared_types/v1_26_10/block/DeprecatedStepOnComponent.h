#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_10/block/DeprecatedBaseTrigger.h"

namespace SharedTypes::v1_26_10::BlockDefinition {

struct DeprecatedStepOnComponent : public ::SharedTypes::v1_26_10::BlockDefinition::DeprecatedBaseTrigger {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DeprecatedStepOnComponent();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
