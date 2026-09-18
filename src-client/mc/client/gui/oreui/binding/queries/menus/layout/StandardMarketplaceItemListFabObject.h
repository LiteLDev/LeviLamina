#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LocalizedStringObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/PageableStandardMarketplaceItemPreviewObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class LinksToObject; }
// clang-format on

namespace OreUI {

class StandardMarketplaceItemListFabObject
: public ::OreUI::PropertyObject<::OreUI::StandardMarketplaceItemListFabObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject>                        mTitle;
    ::ll::TypedStorage<8, 568, ::OreUI::PageableStandardMarketplaceItemPreviewObject> mPagedItems;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::LinksToObject>>               mLinksTo;
    // NOLINTEND
};

} // namespace OreUI
