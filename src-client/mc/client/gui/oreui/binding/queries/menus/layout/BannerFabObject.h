#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/ImageObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LocalizedStringObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class LinksToObject; }
// clang-format on

namespace OreUI {

class BannerFabObject : public ::OreUI::PropertyObject<::OreUI::BannerFabObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject>          mMainText;
    ::ll::TypedStorage<8, 440, ::OreUI::ImageObject>                    mStaticImage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::ImageObject>>   mAnimatedImage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::LinksToObject>> mLinksTo;
    // NOLINTEND
};

} // namespace OreUI
