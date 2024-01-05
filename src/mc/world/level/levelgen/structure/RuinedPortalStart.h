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
    // vIndex: 0, symbol: __gen_??1RuinedPortalStart@@UEAA@XZ
    virtual ~RuinedPortalStart() = default;

    // symbol: ??0RuinedPortalStart@@QEAA@AEAVBiomeRegistry@@AEBVBiomeSource@@HHAEBVIPreliminarySurfaceProvider@@@Z
    MCAPI
    RuinedPortalStart(class BiomeRegistry& registry, class BiomeSource const& source, int chunkX, int chunkZ, class IPreliminarySurfaceProvider const&);

    // NOLINTEND
};
