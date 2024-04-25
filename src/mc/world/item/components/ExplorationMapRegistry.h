#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/MapType.h"
#include "mc/world/level/saveddata/maps/MapDecoration.h"

class ExplorationMapRegistry {
public:
    // prevent constructor by default
    ExplorationMapRegistry& operator=(ExplorationMapRegistry const&);
    ExplorationMapRegistry(ExplorationMapRegistry const&);
    ExplorationMapRegistry();

public:
    // NOLINTBEGIN
    // symbol: ?getExplorationMapDataByMapType@ExplorationMapRegistry@@SAPEBUExplorationMapData@@W4MapType@@@Z
    MCAPI static struct ExplorationMapData const* getExplorationMapDataByMapType(::MapType);

    // symbol: ?isExplorationMap@ExplorationMapRegistry@@SA_NW4MapType@@@Z
    MCAPI static bool isExplorationMap(::MapType);

    // symbol: ?isExplorationMapMarker@ExplorationMapRegistry@@SA_NW4Type@MapDecoration@@@Z
    MCAPI static bool isExplorationMapMarker(::MapDecoration::Type);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mRegistry@ExplorationMapRegistry@@0V?$array@UExplorationMapData@@$0L@@std@@B
    MCAPI static std::array<struct ExplorationMapData, 11> const mRegistry;

    // NOLINTEND
};
