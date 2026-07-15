#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

namespace OreUI {

class SettingsOption : public ::OreUI::PropertyObject<::OreUI::SettingsOption> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                            mValue;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                  mLabel;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mDescription;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<bool>>>          mDisabled;
    // NOLINTEND
};

} // namespace OreUI
