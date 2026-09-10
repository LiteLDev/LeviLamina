#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LocalizedStringObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/PageableStandardMarketplaceItemPreviewObject.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services::layout::model { struct StandardMarketplaceItemListFab; }
namespace OreUI { class LinksToObject; }
namespace OreUI::Detail { class IPropertyObject; }
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

public:
    // prevent constructor by default
    StandardMarketplaceItemListFabObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StandardMarketplaceItemListFabObject(
        ::OreUI::Detail::IPropertyObject*                                         fabParent,
        ::Bedrock::Services::layout::model::StandardMarketplaceItemListFab const& fab
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::Detail::IPropertyObject*                                         fabParent,
        ::Bedrock::Services::layout::model::StandardMarketplaceItemListFab const& fab
    );
    // NOLINTEND
};

} // namespace OreUI
