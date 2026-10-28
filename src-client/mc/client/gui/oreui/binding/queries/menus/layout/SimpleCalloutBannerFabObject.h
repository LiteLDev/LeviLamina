#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LocalizedStringObject.h"

namespace OreUI {

class SimpleCalloutBannerFabObject : public ::OreUI::PropertyObject<::OreUI::SimpleCalloutBannerFabObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject> mDisplayText;
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject> mButtonText;
    // NOLINTEND
};

} // namespace OreUI
