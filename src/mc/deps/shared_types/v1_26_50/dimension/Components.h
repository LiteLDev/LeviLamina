#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_60/dimension_definition/Generation.h"
#include "mc/deps/shared_types/v1_26_50/dimension/DefaultBiome.h"
#include "mc/deps/shared_types/v1_26_50/dimension/DimensionHeight.h"

namespace SharedTypes::v1_26_50::DimensionDefinition {

struct Components {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 6, ::std::optional<::SharedTypes::v1_26_50::DimensionDefinition::DimensionHeight>>
        mDimensionHeightComponent;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::v1_26_50::DimensionDefinition::DefaultBiome>>
                                                                                        mDefaultBiomeComponent;
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_60::DimensionDefinition::Generation> mGeneration;
    // NOLINTEND

public:
    // prevent constructor by default
    Components(Components const&);
    Components();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_26_50::DimensionDefinition::Components&
    operator=(::SharedTypes::v1_26_50::DimensionDefinition::Components const&);

    MCAPI ~Components();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50::DimensionDefinition
