#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/realms/RealmsManageMembersAction.h"
#include "mc/client/realms/RealmsManageMembersStatus.h"

namespace OreUI {

class RealmsManageMembersState : public ::OreUI::PropertyObject<::OreUI::RealmsManageMembersState> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        176,
        ::OreUI::Property<::Realms::RealmsManageMembersStatus, ::Realms::RealmsManageMembersStatus>>
        status;
    ::ll::TypedStorage<
        8,
        176,
        ::OreUI::Property<::Realms::RealmsManageMembersAction, ::Realms::RealmsManageMembersAction>>
        action;
    // NOLINTEND
};

} // namespace OreUI
