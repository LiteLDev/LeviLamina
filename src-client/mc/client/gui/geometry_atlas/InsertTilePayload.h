#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/ItemData.h"
#include "mc/client/gui/geometry_atlas/PaperDollData.h"
#include "mc/client/gui/geometry_atlas/TileDefinition.h"

namespace GeometryAtlas {

struct InsertTilePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::GeometryAtlas::TileDefinition>                                           mDefinition;
    ::ll::TypedStorage<8, 40, ::std::variant<::GeometryAtlas::ItemData, ::GeometryAtlas::PaperDollData>> mInitialState;
    // NOLINTEND
};

} // namespace GeometryAtlas
