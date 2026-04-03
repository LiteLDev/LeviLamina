#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/SettingsType.h"

namespace OreUI {

class SettingsId : public ::OreUI::PropertyObject<::OreUI::SettingsId> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>         mId;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::SettingsType>> mType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsId() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
