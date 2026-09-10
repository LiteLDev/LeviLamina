#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/ExperienceImageSetObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class LocalizedStringObject; }
// clang-format on

namespace OreUI {

class ExperienceListingObject : public ::OreUI::PropertyObject<::OreUI::ExperienceListingObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1560, ::OreUI::ExperienceImageSetObject>              mDisplayImage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::LocalizedStringObject>> mMotd;
    // NOLINTEND
};

} // namespace OreUI
