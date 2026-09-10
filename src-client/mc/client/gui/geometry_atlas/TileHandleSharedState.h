#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"

namespace GeometryAtlas {

struct TileHandleSharedState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                              mIsInitialized;
    ::ll::TypedStorage<8, 32, ::dragon::atlas::AtlasTileHandle> mHandle;
    // NOLINTEND
};

} // namespace GeometryAtlas
