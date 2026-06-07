#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/TileDefinition.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IItemHandle; }
// clang-format on

namespace OreUI {

struct ItemUrlInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::GeometryAtlas::TileDefinition>                                  mDefinition;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::GeometryAtlas::IItemHandle>>> mItem;
    // NOLINTEND
};

} // namespace OreUI
