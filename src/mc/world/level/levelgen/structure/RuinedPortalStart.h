#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class RuinedPortalStart : public ::StructureStart {
public:
    // prevent constructor by default
    RuinedPortalStart& operator=(RuinedPortalStart const&);
    RuinedPortalStart(RuinedPortalStart const&);
    RuinedPortalStart();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RuinedPortalStart() = default;

    MCAPI RuinedPortalStart(
        class BiomeRegistry&                     registry,
        class BiomeSource const&                 source,
        int                                      chunkX,
        int                                      chunkZ,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class BiomeRegistry&                     registry,
        class BiomeSource const&                 source,
        int                                      chunkX,
        int                                      chunkZ,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );

    // NOLINTEND
};
