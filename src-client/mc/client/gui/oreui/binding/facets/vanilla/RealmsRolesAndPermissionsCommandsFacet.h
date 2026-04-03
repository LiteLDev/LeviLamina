#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/realms/PlayerRole.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmsRolesAndPermissions; }
// clang-format on

namespace OreUI {

class RealmsRolesAndPermissionsCommandsFacet
: public ::OreUI::FacetBase<::OreUI::RealmsRolesAndPermissionsCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsRolesAndPermissions>> mRolesAndPermissions;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsRolesAndPermissionsCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initRealmsRolesAndActions(::std::string const& realmId);

    MCAPI void initRealmsUserRoleAndActions(::std::string const& playerXuid, ::Realms::PlayerRole role);

    MCAPI void refreshAllRealmRolesAndActionsForCurrentUser();

    MCAPI void resetState();

    MCAPI void saveRealmsUserRole(::std::string const& realmId, ::std::string const& playerXuid);

    MCAPI void setRealmsUserRole(::std::string const& playerXuid, ::Realms::PlayerRole role);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
