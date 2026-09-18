#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_60/dimension_definition/Description.h"
#include "mc/deps/shared_types/v1_26_50/dimension/Components.h"

namespace SharedTypes::v1_26_50::DimensionDefinition {

struct Dimension {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_60::DimensionDefinition::Description> mDescription;
    ::ll::TypedStorage<8, 80, ::SharedTypes::v1_26_50::DimensionDefinition::Components>  mComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    Dimension& operator=(Dimension const&);
    Dimension();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Dimension(::SharedTypes::v1_26_50::DimensionDefinition::Dimension const&);

    MCAPI ::SharedTypes::v1_26_50::DimensionDefinition::Dimension&
    operator=(::SharedTypes::v1_26_50::DimensionDefinition::Dimension&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_50::DimensionDefinition::Dimension const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50::DimensionDefinition
