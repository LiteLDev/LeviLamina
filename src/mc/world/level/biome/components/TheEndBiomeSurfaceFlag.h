#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct TheEndBiomeSurfaceFlag : public ::BiomeComponentBase {
public:
    // prevent constructor by default
    TheEndBiomeSurfaceFlag& operator=(TheEndBiomeSurfaceFlag const&);
    TheEndBiomeSurfaceFlag(TheEndBiomeSurfaceFlag const&);
    TheEndBiomeSurfaceFlag();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TheEndBiomeSurfaceFlag() /*override*/;
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
