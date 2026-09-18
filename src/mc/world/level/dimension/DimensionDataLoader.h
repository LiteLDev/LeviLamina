#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_50::DimensionDefinition { struct DimensionDocument; }
// clang-format on

class DimensionDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        264,
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_26_50::DimensionDefinition::DimensionDocument,
            nullptr_t,
            nullptr_t,
            nullptr_t,
            ::SharedTypes::v1_26_50::DimensionDefinition::DimensionDocument>>
        mDimensionDefinitionLoader;
    // NOLINTEND
};
