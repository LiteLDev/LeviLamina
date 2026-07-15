#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/SettingsState.h"

namespace OreUI {

struct CommonProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                  mId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                  mName;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::SettingsState>>         mState;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mDescription;
    // NOLINTEND
};

} // namespace OreUI
