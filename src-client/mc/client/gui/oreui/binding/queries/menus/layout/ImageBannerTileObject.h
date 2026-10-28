#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/ImageObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LocalizedStringObject.h"
#include "mc/client/store/services/Theme.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class LinksToObject; }
// clang-format on

namespace OreUI {

class ImageBannerTileObject : public ::OreUI::PropertyObject<::OreUI::ImageBannerTileObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject> mParagraph;
    ::ll::TypedStorage<8, 440, ::OreUI::ImageObject>           mStaticImage;
    ::ll::TypedStorage<
        8,
        176,
        ::OreUI::Property<
            ::std::optional<::Bedrock::Services::layout::model::Theme>,
            ::std::optional<::Bedrock::Services::layout::model::Theme>>>
                                                                                mTheme;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::LocalizedStringObject>> mCaption;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::LocalizedStringObject>> mHeader;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::LocalizedStringObject>> mButtonText;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::ImageObject>>           mAnimatedImage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::ImageObject>>           mBackgroundImage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::LinksToObject>>         mLinksTo;
    // NOLINTEND
};

} // namespace OreUI
