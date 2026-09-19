#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/realms/PlayerRole.h"
#include "mc/client/realms/PlayerRoleActions.h"

namespace OreUI {

class PlayerRoleWithActionsListData : public ::OreUI::PropertyObject<::OreUI::PlayerRoleWithActionsListData> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>               mRealmId;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Realms::PlayerRole, ::Realms::PlayerRole>> mRole;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::Realms::PlayerRoleActions, ::Realms::PlayerRoleActions>>
        mActions;
    // NOLINTEND
};

} // namespace OreUI
