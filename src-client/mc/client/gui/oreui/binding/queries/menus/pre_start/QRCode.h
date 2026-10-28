#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

namespace OreUI {

struct QRCode : public ::OreUI::PropertyObject<::OreUI::QRCode> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mUserCode;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mVerificationUrl;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mQrCodeSrc;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
