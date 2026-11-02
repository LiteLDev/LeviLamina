#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/realms/RealmsMembership.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsMembership; }
// clang-format on

namespace OreUI {

class RealmsMembershipFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsMembershipFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsMembership>>               mRealmsMembership;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                                     mLifeTimeTracker;
    ::ll::TypedStorage<1, 2, ::std::optional<::Realms::RealmsMembership::FetchRealmError>> mFetchRealmError;
    ::ll::TypedStorage<1, 2, ::std::optional<::Realms::RealmsMembership::JoinRealmError>>  mJoinRealmError;
    ::ll::TypedStorage<8, 736, ::OreUI::FacetTaskTracker<::Realms::World>>                 mFetchRealmTaskTracker;
    ::ll::TypedStorage<8, 80, ::OreUI::FacetTaskTracker<::Realms::RealmsMembership::JoinRealmResult>>
                                                                           mJoinRealmTaskTracker;
    ::ll::TypedStorage<1, 1, ::Realms::RealmsMembership::LeaveRealmResult> mLeaveRealmResult;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::std::monostate>> mLeaveRealmTaskTracker;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsMembershipFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsMembershipFacet(::std::shared_ptr<::Realms::RealmsMembership> realmsJoinRealm);

    MCNAPI void clearFetchRealm();

    MCNAPI void clearJoinRealm();

    MCNAPI void clearLeaveRealm();

    MCNAPI void fetchRealm(::std::string const& inviteCode);

    MCNAPI ::std::optional<::Realms::RealmsMembership::FetchRealmError> const& getFetchRealmError() const;

    MCNAPI ::std::optional<::Realms::World> const& getFetchRealmResult() const;

    MCNAPI ::OreUI::FacetTaskState const getFetchRealmTaskProgress() const;

    MCNAPI ::std::optional<::Realms::RealmsMembership::JoinRealmError> const& getJoinRealmError() const;

    MCNAPI ::OreUI::FacetTaskState getJoinRealmTaskProgress() const;

    MCNAPI ::std::string const& getJoinedRealmId() const;

    MCNAPI ::std::string const& getJoinedRealmName() const;

    MCNAPI ::Realms::RealmsMembership::LeaveRealmResult const& getLeaveRealmResult() const;

    MCNAPI ::OreUI::FacetTaskState getLeaveRealmTaskProgress() const;

    MCNAPI void joinRealm(::std::string const& inviteCode);

    MCNAPI void leaveRealm(int64 worldId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::Realms::RealmsMembership> realmsJoinRealm);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
