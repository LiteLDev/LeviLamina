#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

class WorldGenClimateMappingAttributes : public ::BiomeComponentBase {
public:
    // WorldGenClimateMappingAttributes inner types declare
    // clang-format off
    struct WeightedTemperatureCategory;
    // clang-format on

    // WorldGenClimateMappingAttributes inner types define
    struct WeightedTemperatureCategory {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkf1f83a;
        ::ll::UntypedStorage<4, 4> mUnkd21ec1;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedTemperatureCategory& operator=(WeightedTemperatureCategory const&);
        WeightedTemperatureCategory(WeightedTemperatureCategory const&);
        WeightedTemperatureCategory();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::WorldGenClimateMappingAttributes::WeightedTemperatureCategory>>
        mClimateMappings;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldGenClimateMappingAttributes() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
