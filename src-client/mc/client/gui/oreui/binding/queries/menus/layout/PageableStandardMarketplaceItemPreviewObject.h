#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class StandardMarketplaceItemPreviewObject; }
// clang-format on

namespace OreUI {

class PageableStandardMarketplaceItemPreviewObject
: public ::OreUI::PropertyObject<::OreUI::PageableStandardMarketplaceItemPreviewObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mContinuationToken;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<
            ::OreUI::StandardMarketplaceItemPreviewObject,
            ::std::allocator<::OreUI::StandardMarketplaceItemPreviewObject>>>
        mItems;
    // NOLINTEND
};

} // namespace OreUI
