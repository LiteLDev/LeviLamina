#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_60::DimensionDefinition {

struct Generation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1a9be7;
    // NOLINTEND

public:
    // prevent constructor by default
    Generation& operator=(Generation const&);
    Generation(Generation const&);
    Generation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_60::DimensionDefinition::Generation& operator=(::SharedTypes::v1_21_60::DimensionDefinition::Generation&&);
    // NOLINTEND

};

}
