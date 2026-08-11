#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GeneratorType.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_60::DimensionDefinition { struct DimensionDocument; }
// clang-format on

class DimensionDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        256,
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_21_60::DimensionDefinition::DimensionDocument,
            nullptr_t,
            nullptr_t,
            ::SharedTypes::v1_21_60::DimensionDefinition::DimensionDocument>>
        mDimensionDefinitionLoader;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::GeneratorType> stringToGeneratorType(::std::string const& generatorNameString);
    // NOLINTEND
};
