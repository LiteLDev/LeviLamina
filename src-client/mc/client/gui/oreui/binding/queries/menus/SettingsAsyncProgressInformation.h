#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

namespace OreUI {

class SettingsAsyncProgressInformation : public ::OreUI::PropertyObject<::OreUI::SettingsAsyncProgressInformation> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mTitle;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mDescription;
    // NOLINTEND
};

} // namespace OreUI
