#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_60::DimensionDefinition {

struct Components {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk4d43db;
    ::ll::UntypedStorage<8, 32> mUnk450f4f;
    // NOLINTEND

public:
    // prevent constructor by default
    Components(Components const&);
    Components();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_60::DimensionDefinition::Components&
    operator=(::SharedTypes::v1_21_60::DimensionDefinition::Components&&);

    MCAPI ::SharedTypes::v1_21_60::DimensionDefinition::Components&
    operator=(::SharedTypes::v1_21_60::DimensionDefinition::Components const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::DimensionDefinition
