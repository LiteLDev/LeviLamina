#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/realms/PlayerInviteStatus.h"

namespace OreUI {

class InviteStatusData : public ::OreUI::PropertyObject<::OreUI::InviteStatusData> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>                               mXuid;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Realms::PlayerInviteStatus, ::Realms::PlayerInviteStatus>> mStatus;
    // NOLINTEND
};

} // namespace OreUI
