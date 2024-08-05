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
    MCAPI static struct ExplorationMapData const* getExplorationMapDataByMapType(::MapType);

    MCAPI static bool isExplorationMap(::MapType);

    MCAPI static bool isExplorationMapMarker(::MapDecoration::Type);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::array<struct ExplorationMapData, 11> const mRegistry;

    // NOLINTEND
};
