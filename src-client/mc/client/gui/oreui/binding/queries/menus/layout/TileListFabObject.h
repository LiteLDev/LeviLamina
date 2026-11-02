#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/PageableTilesObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class LocalizedStringObject; }
// clang-format on

namespace OreUI {

class TileListFabObject : public ::OreUI::PropertyObject<::OreUI::TileListFabObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 568, ::OreUI::PageableTilesObject>                    mPageableTiles;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::LocalizedStringObject>> mTitle;
    // NOLINTEND
};

} // namespace OreUI
