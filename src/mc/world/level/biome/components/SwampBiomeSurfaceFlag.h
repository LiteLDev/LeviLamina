#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct SwampBiomeSurfaceFlag : public ::BiomeComponentBase {
public:
    // prevent constructor by default
    SwampBiomeSurfaceFlag& operator=(SwampBiomeSurfaceFlag const&);
    SwampBiomeSurfaceFlag(SwampBiomeSurfaceFlag const&);
    SwampBiomeSurfaceFlag();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SwampBiomeSurfaceFlag() /*override*/;
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
