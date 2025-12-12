#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct CustomMapFoliageColorAttributes : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mMapFoliageColor;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomMapFoliageColorAttributes() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
