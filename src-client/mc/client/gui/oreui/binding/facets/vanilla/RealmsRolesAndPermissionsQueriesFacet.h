#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/realms/PlayerRole.h"
#include "mc/client/realms/PlayerRoleActions.h"
#include "mc/client/realms/RolesAndPermissionsState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct PlayerRoleWithActionsList; }
namespace Realms { struct RealmsRolesAndPermissions; }
// clang-format on

namespace OreUI {

class RealmsRolesAndPermissionsQueriesFacet
: public ::OreUI::FacetBase<::OreUI::RealmsRolesAndPermissionsQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                        mIsDirty;
    ::ll::TypedStorage<4, 4, ::Realms::PlayerRole>                        mSelectedUserRole;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::PlayerRoleActions>> mSelectedUserActions;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::PlayerRoleWithActionsList>>
                                                                 mCurrentUserRolesAndActionsForAllRealms;
    ::ll::TypedStorage<4, 4, ::Realms::RolesAndPermissionsState> mState;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsRolesAndPermissions>> mRolesAndPermissions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mStateChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsRolesAndPermissionsQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsRolesAndPermissionsQueriesFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsRolesAndPermissionsQueriesFacet(
        ::std::shared_ptr<::Realms::RealmsRolesAndPermissions> rolesAndPermissions
    );

    MCFOLD ::std::vector<::Realms::PlayerRoleWithActionsList> const& getCurrentUserRolesAndActionsForAllRealms() const;

    MCFOLD ::std::vector<::Realms::PlayerRoleActions> const& getSelectedUserActions() const;

    MCFOLD ::Realms::PlayerRole getSelectedUserRole() const;

    MCFOLD ::Realms::RolesAndPermissionsState getState() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsRolesAndPermissions> rolesAndPermissions);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
