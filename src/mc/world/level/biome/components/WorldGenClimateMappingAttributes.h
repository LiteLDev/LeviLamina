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
    ::ll::UntypedStorage<8, 24> mUnkbd41d6;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldGenClimateMappingAttributes& operator=(WorldGenClimateMappingAttributes const&);
    WorldGenClimateMappingAttributes(WorldGenClimateMappingAttributes const&);
    WorldGenClimateMappingAttributes();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldGenClimateMappingAttributes() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
