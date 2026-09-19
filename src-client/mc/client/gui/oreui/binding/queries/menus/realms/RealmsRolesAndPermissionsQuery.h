#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/realms/FetchAllRealmsRolesAndActionsForCurrentUserState.h"
#include "mc/client/realms/PlayerRole.h"
#include "mc/client/realms/PlayerRoleActions.h"
#include "mc/client/realms/RolesAndPermissionsState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class PlayerRoleWithActionsListData; }
namespace Realms { class RealmsRolesAndPermissions; }
// clang-format on

namespace OreUI {

class RealmsRolesAndPermissionsQuery : public ::OreUI::QueryBase<::OreUI::RealmsRolesAndPermissionsQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsRolesAndPermissions>> mRolesAndPermissions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mStateChangedSubscription;
    ::ll::
        TypedStorage<8, 176, ::OreUI::Property<::Realms::RolesAndPermissionsState, ::Realms::RolesAndPermissionsState>>
                                                                                              mState;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Realms::PlayerRole, ::Realms::PlayerRole>> mSelectedUserRole;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::Realms::PlayerRoleActions, ::Realms::PlayerRoleActions>>
        mSelectedUserActions;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::PlayerRoleWithActionsListData, ::OreUI::PlayerRoleWithActionsListData>>
        mCurrentUserRolesAndActionsForAllRealms;
    ::ll::TypedStorage<
        8,
        176,
        ::OreUI::Property<
            ::Realms::FetchAllRealmsRolesAndActionsForCurrentUserState,
            ::Realms::FetchAllRealmsRolesAndActionsForCurrentUserState>>
        mFetchCurrentUserRolesAndActionsForAllRealmsState;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsRolesAndPermissionsQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsRolesAndPermissionsQuery(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
