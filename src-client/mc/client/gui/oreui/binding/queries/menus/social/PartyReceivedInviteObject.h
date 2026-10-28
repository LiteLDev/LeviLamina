#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/menus/SocialPlayerObject.h"

namespace OreUI {

class PartyReceivedInviteObject : public ::OreUI::PropertyObject<::OreUI::PartyReceivedInviteObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 4408, ::OreUI::SocialPlayerObject>                    mInviter;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mPartyId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mConnectionString;
    // NOLINTEND
};

} // namespace OreUI
