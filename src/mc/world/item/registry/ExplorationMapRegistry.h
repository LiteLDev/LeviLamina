#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/MapType.h"
#include "mc/world/level/saveddata/maps/MapDecoration.h"

// auto generated forward declare list
// clang-format off
struct ExplorationMapData;
// clang-format on

class ExplorationMapRegistry {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::array<::ExplorationMapData, 11> const& _getRegistry();

    MCAPI static ::ExplorationMapData const* getExplorationMapDataByFeatureName(::std::string const& featureName);

    MCAPI static ::ExplorationMapData const* getExplorationMapDataByMapType(::MapType mapType);

    MCAPI static bool isExplorationMap(::MapType mapType);

    MCAPI static bool isExplorationMapMarker(::MapDecoration::Type markerType);
    // NOLINTEND
};
