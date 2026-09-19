#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/ExperiencePreviewObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LocalizedStringObject.h"

namespace OreUI {

class ExperienceFabObject : public ::OreUI::PropertyObject<::OreUI::ExperienceFabObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 2152, ::OreUI::ExperiencePreviewObject> mExperience;
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject>    mTitle;
    // NOLINTEND
};

} // namespace OreUI
