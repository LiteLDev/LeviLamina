#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class SettingsConfirmationRequest : public ::OreUI::PropertyObject<::OreUI::SettingsConfirmationRequest> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mTitle;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mDescription;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mAcceptLabel;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mCancelLabel;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsConfirmationRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsConfirmationRequest() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SettingsConfirmationRequest(
        ::OreUI::Detail::IPropertyObject* parent,
        ::std::string                     title,
        ::std::string                     description,
        ::std::string                     acceptLabel,
        ::std::string                     cancelLabel
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::Detail::IPropertyObject* parent,
        ::std::string                     title,
        ::std::string                     description,
        ::std::string                     acceptLabel,
        ::std::string                     cancelLabel
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
