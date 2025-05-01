#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_60::DimensionDefinition {

struct Description {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc9aee8;
    // NOLINTEND

public:
    // prevent constructor by default
    Description(Description const&);
    Description();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_60::DimensionDefinition::Description&
    operator=(::SharedTypes::v1_21_60::DimensionDefinition::Description&&);

    MCNAPI ::SharedTypes::v1_21_60::DimensionDefinition::Description&
    operator=(::SharedTypes::v1_21_60::DimensionDefinition::Description const&);

    MCNAPI ~Description();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::DimensionDefinition
