#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VoronoiSharedCode {

struct VoronoiExtents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>    signedTileSize;
    ::ll::TypedStorage<4, 4, int>    xMinTile;
    ::ll::TypedStorage<4, 4, int>    zMinTile;
    ::ll::TypedStorage<4, 4, int>    xMinWorldPos;
    ::ll::TypedStorage<4, 4, int>    zMinWorldPos;
    ::ll::TypedStorage<2, 2, ushort> xSize;
    ::ll::TypedStorage<2, 2, ushort> zSize;
    // NOLINTEND
};

} // namespace VoronoiSharedCode
