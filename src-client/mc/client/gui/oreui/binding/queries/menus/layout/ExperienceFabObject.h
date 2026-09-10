#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/ExperiencePreviewObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LocalizedStringObject.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services::layout::model { struct ExperienceFab; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class ExperienceFabObject : public ::OreUI::PropertyObject<::OreUI::ExperienceFabObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 3272, ::OreUI::ExperiencePreviewObject> mExperience;
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject>    mTitle;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperienceFabObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExperienceFabObject(
        ::OreUI::Detail::IPropertyObject*                        fabParent,
        ::Bedrock::Services::layout::model::ExperienceFab const& fab
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::OreUI::Detail::IPropertyObject* fabParent, ::Bedrock::Services::layout::model::ExperienceFab const& fab);
    // NOLINTEND
};

} // namespace OreUI
