#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/MapType.h"
#include "mc/world/level/saveddata/maps/MapDecoration.h"

class ExplorationMapRegistry {
public:
    // prevent constructor by default
    ExplorationMapRegistry& operator=(ExplorationMapRegistry const&);
    ExplorationMapRegistry(ExplorationMapRegistry const&);
    ExplorationMapRegistry();

public:
    // NOLINTBEGIN
    MCAPI static struct ExplorationMapData const* getExplorationMapDataByMapType(::MapType mapType);

    MCAPI static bool isExplorationMap(::MapType mapType);

    MCAPI static bool isExplorationMapMarker(::MapDecoration::Type markerType);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::array<struct ExplorationMapData, 11> const mRegistry;

    // NOLINTEND
};
