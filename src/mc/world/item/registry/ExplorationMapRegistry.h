#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/MapType.h"

// auto generated forward declare list
// clang-format off
struct ExplorationMapData;
// clang-format on

class ExplorationMapRegistry {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::array<::ExplorationMapData, 23> const& _getRegistry();

    MCNAPI static ::ExplorationMapData const* getExplorationMapDataByFeatureName(::std::string const& featureName);

    MCNAPI static ::ExplorationMapData const* getExplorationMapDataByMapType(::MapType mapType);
    // NOLINTEND
};
