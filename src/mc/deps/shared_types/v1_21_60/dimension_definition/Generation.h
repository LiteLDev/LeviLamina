#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_60::DimensionDefinition {

struct Generation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mGeneratorType;
    // NOLINTEND

public:
    // prevent constructor by default
    Generation(Generation const&);
    Generation();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_60::DimensionDefinition::Generation&
    operator=(::SharedTypes::v1_21_60::DimensionDefinition::Generation&&);

    MCFOLD ::SharedTypes::v1_21_60::DimensionDefinition::Generation&
    operator=(::SharedTypes::v1_21_60::DimensionDefinition::Generation const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::DimensionDefinition
