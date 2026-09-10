#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/ImageObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LocalizedStringObject.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services::layout::model { struct BannerFab; }
namespace OreUI { class LinksToObject; }
namespace OreUI::Detail { class IPropertyObject; }
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

public:
    // prevent constructor by default
    BannerFabObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BannerFabObject(
        ::OreUI::Detail::IPropertyObject*                    fabParent,
        ::Bedrock::Services::layout::model::BannerFab const& fab
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::OreUI::Detail::IPropertyObject* fabParent, ::Bedrock::Services::layout::model::BannerFab const& fab);
    // NOLINTEND
};

} // namespace OreUI
