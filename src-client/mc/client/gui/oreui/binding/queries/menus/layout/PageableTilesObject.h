#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class TileObject; }
// clang-format on

namespace OreUI {

class PageableTilesObject : public ::OreUI::PropertyObject<::OreUI::PageableTilesObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::OreUI::TileObject, ::OreUI::TileObject>> mTiles;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>, ::std::optional<::std::string>>>
        mContinuationToken;
    // NOLINTEND
};

} // namespace OreUI
