#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IGeometryAtlasKnownTilesReader; }
namespace OreUI { class IGeometryAtlasKnownTilesWriter; }
// clang-format on

namespace OreUI {

struct GeometryAtlasKnownTiles {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::IGeometryAtlasKnownTilesWriter>> mWriter;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::IGeometryAtlasKnownTilesReader>> mReader;
    // NOLINTEND
};

} // namespace OreUI
