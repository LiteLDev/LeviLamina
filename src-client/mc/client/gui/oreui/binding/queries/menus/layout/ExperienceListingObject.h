#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/ImageObject.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services::layout::model { struct ExperienceListing; }
namespace OreUI { class LocalizedStringObject; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class ExperienceListingObject : public ::OreUI::PropertyObject<::OreUI::ExperienceListingObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 440, ::OreUI::ImageObject>                            mDisplayImage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::LocalizedStringObject>> mMotd;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperienceListingObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExperienceListingObject(
        ::std::string const&                                         name,
        ::OreUI::Detail::IPropertyObject*                            parent,
        ::Bedrock::Services::layout::model::ExperienceListing const& src
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                                         name,
        ::OreUI::Detail::IPropertyObject*                            parent,
        ::Bedrock::Services::layout::model::ExperienceListing const& src
    );
    // NOLINTEND
};

} // namespace OreUI
