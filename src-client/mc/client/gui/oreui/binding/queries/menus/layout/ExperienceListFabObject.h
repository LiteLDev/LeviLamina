#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LocalizedStringObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/PageableExperiencesObject.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services::layout::model { struct ExperienceListFab; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class ExperienceListFabObject : public ::OreUI::PropertyObject<::OreUI::ExperienceListFabObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject>     mTitle;
    ::ll::TypedStorage<8, 568, ::OreUI::PageableExperiencesObject> mPagedExperiences;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperienceListFabObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExperienceListFabObject(
        ::OreUI::Detail::IPropertyObject*                            fabParent,
        ::Bedrock::Services::layout::model::ExperienceListFab const& fab
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::Detail::IPropertyObject*                            fabParent,
        ::Bedrock::Services::layout::model::ExperienceListFab const& fab
    );
    // NOLINTEND
};

} // namespace OreUI
