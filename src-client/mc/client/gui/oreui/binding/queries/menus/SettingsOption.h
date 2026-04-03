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

public:
    // prevent constructor by default
    SettingsOption();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsOption() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    SettingsOption(int value, ::std::string const& label, ::std::optional<::std::string> description, bool disabled);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int value, ::std::string const& label, ::std::optional<::std::string> description, bool disabled);
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
