#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/client/gui/geometry_atlas/TileDefinition.h"

// clang-format off
namespace GeometryAtlas { class IItemHandle; }
// clang-format on

namespace OreUI::GeometryAtlasResourceHandlerAnon {

struct ItemUrlInfo {
public:
    GeometryAtlas::TileDefinition                                  mDefinition;
    gsl::not_null<::std::shared_ptr<::GeometryAtlas::IItemHandle>> mItem;
};

} // namespace OreUI::GeometryAtlasResourceHandlerAnon