#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_60::DimensionDefinition {

struct Dimension {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk97a044;
    ::ll::UntypedStorage<8, 40> mUnka2b798;
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
