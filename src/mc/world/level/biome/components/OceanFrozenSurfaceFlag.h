#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct OceanFrozenSurfaceFlag : public ::BiomeComponentBase {
public:
    // prevent constructor by default
    OceanFrozenSurfaceFlag& operator=(OceanFrozenSurfaceFlag const&);
    OceanFrozenSurfaceFlag(OceanFrozenSurfaceFlag const&);
    OceanFrozenSurfaceFlag();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OceanFrozenSurfaceFlag() /*override*/;
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
