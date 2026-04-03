#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

namespace OreUI {

class SettingsOptionConfirmationRequest : public ::OreUI::PropertyObject<::OreUI::SettingsOptionConfirmationRequest> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>           mValue;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mTitle;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mDescription;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mAcceptLabel;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mCancelLabel;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsOptionConfirmationRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsOptionConfirmationRequest() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SettingsOptionConfirmationRequest(
        int           value,
        ::std::string title,
        ::std::string description,
        ::std::string acceptLabel,
        ::std::string cancelLabel
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        int           value,
        ::std::string title,
        ::std::string description,
        ::std::string acceptLabel,
        ::std::string cancelLabel
    );
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
