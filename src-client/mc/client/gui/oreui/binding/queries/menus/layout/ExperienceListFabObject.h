#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LocalizedStringObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/PageableExperiencesObject.h"

namespace OreUI {

class ExperienceListFabObject : public ::OreUI::PropertyObject<::OreUI::ExperienceListFabObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject>     mTitle;
    ::ll::TypedStorage<8, 568, ::OreUI::PageableExperiencesObject> mPagedExperiences;
    // NOLINTEND
};

} // namespace OreUI
