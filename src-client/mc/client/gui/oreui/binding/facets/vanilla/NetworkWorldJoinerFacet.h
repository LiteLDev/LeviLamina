#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/screens/ProgressScreenNavigation.h"
#include "mc/client/network/realms/FailureReason.h"
#include "mc/client/world/JoinRealmWorldResult.h"
#include "mc/client/world/JoinServerWorldResult.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class PlatformMultiplayerRestrictions;
struct IEntitlementManager;
namespace World { class NetworkWorldJoiner; }
namespace World { struct RealmsJoinData; }
// clang-format on

namespace OreUI {

class NetworkWorldJoinerFacet : public ::OreUI::FacetBase<::OreUI::NetworkWorldJoinerFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::NetworkWorldJoiner&>                         mNetworkWorldJoiner;
    ::ll::TypedStorage<8, 64, ::ui::ProgressScreenNavigation>                      mProgressScreenNavigation;
    ::ll::TypedStorage<8, 8, ::DateManager const&>                                 mDateManager;
    ::ll::TypedStorage<8, 8, ::IEntitlementManager&>                               mEntitlementManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<bool()>>                 mIsUsingUnifiedJoinRealmFlow;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsDirty;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::JoinServerWorldResult>> mJoinThirdPartyServerTask;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::JoinServerWorldResult>> mJoinExternalServerTask;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::JoinRealmWorldResult>>  mJoinRealmTask;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::JoinServerWorldResult>> mJoinFriendServerTask;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::JoinServerWorldResult>> mJoinLANServerTask;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkWorldJoinerFacet& operator=(NetworkWorldJoinerFacet const&);
    NetworkWorldJoinerFacet(NetworkWorldJoinerFacet const&);
    NetworkWorldJoinerFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~NetworkWorldJoinerFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkWorldJoinerFacet(
        ::World::NetworkWorldJoiner&                         networkWorldJoiner,
        ::ui::ProgressScreenNavigation                       progressScreenNavigation,
        ::DateManager const&                                 dateManager,
        ::IEntitlementManager&                               entitlementManager,
        ::std::unique_ptr<::PlatformMultiplayerRestrictions> platformMultiplayerRestrictions,
        ::brstd::move_only_function<bool()>                  isUsingUnifiedJoinRealmFlow
    );

    MCAPI void _joinRealmWorld(::std::string const& realmIdString, ::IMinecraftEventing::RealmConnectionFlow fromFlow);

    MCAPI void _onRealmJoinedConnectionHandler(
        ::IMinecraftEventing::RealmConnectionResult result,
        ::std::optional<::Realms::FailureReason>    failureReason,
        ::std::optional<::World::RealmsJoinData>    realmsJoinData,
        ::std::optional<::std::string>              realmId
    );

    MCAPI void clearJoinExternalServerTaskState();

    MCAPI void clearJoinFriendServerTaskState();

    MCAPI void clearJoinLANServerTaskState();

    MCAPI void clearJoinRealmTaskState();

    MCAPI void clearJoinThirdPartyServerTaskState();

    MCAPI ::std::optional<::World::JoinServerWorldResult> const& getJoinExternalServerResult() const;

    MCFOLD ::OreUI::FacetTaskState getJoinExternalServerTaskState() const;

    MCAPI ::std::optional<::World::JoinServerWorldResult> const& getJoinFriendServerResult();

    MCFOLD ::OreUI::FacetTaskState const getJoinFriendServerTaskState();

    MCAPI ::std::optional<::World::JoinServerWorldResult> const& getJoinLANServerResult();

    MCAPI ::OreUI::FacetTaskState const getJoinLANServerTaskState();

    MCAPI ::std::optional<::World::JoinRealmWorldResult> const& getJoinRealmResult() const;

    MCFOLD ::OreUI::FacetTaskState getJoinRealmTaskState() const;

    MCAPI ::std::optional<::World::JoinServerWorldResult> const& getJoinThirdPartyServerResult() const;

    MCFOLD ::OreUI::FacetTaskState getJoinThirdPartyServerTaskState() const;

    MCAPI void joinExternalServer(::std::string const& serverID);

    MCAPI void joinFriendServer(::std::string const& serverID);

    MCAPI void joinLanServer(::std::string const& serverID);

    MCAPI void joinRealmWorld(::std::string const& realmIdString, ::IMinecraftEventing::RealmConnectionFlow fromFlow);

    MCAPI void joinThirdPartyServer(::std::string const& serverID);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::World::NetworkWorldJoiner&                         networkWorldJoiner,
        ::ui::ProgressScreenNavigation                       progressScreenNavigation,
        ::DateManager const&                                 dateManager,
        ::IEntitlementManager&                               entitlementManager,
        ::std::unique_ptr<::PlatformMultiplayerRestrictions> platformMultiplayerRestrictions,
        ::brstd::move_only_function<bool()>                  isUsingUnifiedJoinRealmFlow
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
