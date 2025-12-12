#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct SwampBiomeSurfaceFlag : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk92aaab;
    // NOLINTEND

public:
    // prevent constructor by default
    SwampBiomeSurfaceFlag& operator=(SwampBiomeSurfaceFlag const&);
    SwampBiomeSurfaceFlag(SwampBiomeSurfaceFlag const&);
    SwampBiomeSurfaceFlag();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SwampBiomeSurfaceFlag() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
