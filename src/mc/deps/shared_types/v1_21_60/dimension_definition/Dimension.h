#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_60/dimension_definition/Components.h"
#include "mc/deps/shared_types/v1_21_60/dimension_definition/Description.h"

namespace SharedTypes::v1_21_60::DimensionDefinition {

struct Dimension {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_60::DimensionDefinition::Description> mDescription;
    ::ll::TypedStorage<8, 40, ::SharedTypes::v1_21_60::DimensionDefinition::Components>  mComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    Dimension(Dimension const&);
    Dimension();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_60::DimensionDefinition::Dimension&
    operator=(::SharedTypes::v1_21_60::DimensionDefinition::Dimension&&);

    MCAPI ::SharedTypes::v1_21_60::DimensionDefinition::Dimension&
    operator=(::SharedTypes::v1_21_60::DimensionDefinition::Dimension const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::DimensionDefinition
