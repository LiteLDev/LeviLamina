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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~RuinedPortalStart();

    // symbol: ??0RuinedPortalStart@@QEAA@AEAVBiomeRegistry@@AEBVBiomeSource@@HHAEBVIPreliminarySurfaceProvider@@@Z
    MCAPI
    RuinedPortalStart(class BiomeRegistry&, class BiomeSource const&, int, int, class IPreliminarySurfaceProvider const&);

    // NOLINTEND
};
