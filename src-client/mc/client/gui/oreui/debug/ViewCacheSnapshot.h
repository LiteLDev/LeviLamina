#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/debug/CacheSnapshot.h"
#include "mc/client/gui/oreui/interface/ViewId.h"

namespace OreUI {

struct ViewCacheSnapshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::OreUI::ViewId>         viewId;
    ::ll::TypedStorage<4, 16, ::OreUI::CacheSnapshot> shadows;
    ::ll::TypedStorage<4, 16, ::OreUI::CacheSnapshot> paths;
    ::ll::TypedStorage<4, 16, ::OreUI::CacheSnapshot> textures;
    ::ll::TypedStorage<4, 16, ::OreUI::CacheSnapshot> scratchLayers;
    ::ll::TypedStorage<4, 16, ::OreUI::CacheSnapshot> scratchTextures;
    // NOLINTEND
};

} // namespace OreUI
