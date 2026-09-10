#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/ExperienceImageSetObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LocalizedStringObject.h"

namespace OreUI {

class ExperiencePdpActivityObject : public ::OreUI::PropertyObject<::OreUI::ExperiencePdpActivityObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject>                    mTitle;
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject>                    mSubtitle;
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject>                    mDescription;
    ::ll::TypedStorage<8, 1560, ::OreUI::ExperienceImageSetObject>                mImage;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mWorldId;
    // NOLINTEND
};

} // namespace OreUI
