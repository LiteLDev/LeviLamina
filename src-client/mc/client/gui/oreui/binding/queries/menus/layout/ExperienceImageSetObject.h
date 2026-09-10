#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/ImageObject.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services::layout::model { struct ExperienceImageSet; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class ExperienceImageSetObject : public ::OreUI::PropertyObject<::OreUI::ExperienceImageSetObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 440, ::OreUI::ImageObject> mFull;
    ::ll::TypedStorage<8, 440, ::OreUI::ImageObject> mHalf;
    ::ll::TypedStorage<8, 440, ::OreUI::ImageObject> mQuarter;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperienceImageSetObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExperienceImageSetObject(
        ::std::string const&                                          name,
        ::OreUI::Detail::IPropertyObject*                             parent,
        ::Bedrock::Services::layout::model::ExperienceImageSet const& src
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                                          name,
        ::OreUI::Detail::IPropertyObject*                             parent,
        ::Bedrock::Services::layout::model::ExperienceImageSet const& src
    );
    // NOLINTEND
};

} // namespace OreUI
