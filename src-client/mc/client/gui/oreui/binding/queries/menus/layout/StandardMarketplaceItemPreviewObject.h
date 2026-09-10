#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/ImageObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LinksToObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LocalizedStringObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/PriceObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/RatingObject.h"

namespace OreUI {

class StandardMarketplaceItemPreviewObject
: public ::OreUI::PropertyObject<::OreUI::StandardMarketplaceItemPreviewObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mId;
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject>   mTitle;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mCreatorName;
    ::ll::TypedStorage<8, 440, ::OreUI::ImageObject>             mThumbnail;
    ::ll::TypedStorage<8, 600, ::OreUI::RatingObject>            mRating;
    ::ll::TypedStorage<8, 840, ::OreUI::PriceObject>             mPrice;
    ::ll::TypedStorage<8, 616, ::OreUI::LinksToObject>           mLinksTo;
    // NOLINTEND
};

} // namespace OreUI
