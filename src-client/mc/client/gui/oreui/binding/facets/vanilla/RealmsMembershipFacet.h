#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/realms/RealmsMembership.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsMembership; }
// clang-format on

namespace OreUI {

class RealmsMembershipFacet : public ::OreUI::FacetBase<::OreUI::RealmsMembershipFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsMembership>>               mRealmsMembership;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                                     mLifeTimeTracker;
    ::ll::TypedStorage<1, 2, ::std::optional<::Realms::RealmsMembership::FetchRealmError>> mFetchRealmError;
    ::ll::TypedStorage<1, 2, ::std::optional<::Realms::RealmsMembership::JoinRealmError>>  mJoinRealmError;
    ::ll::TypedStorage<8, 672, ::OreUI::FacetTaskTracker<::Realms::World>>                 mFetchRealmTaskTracker;
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

    virtual ~RealmsMembershipFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsMembershipFacet(::std::shared_ptr<::Realms::RealmsMembership> realmsJoinRealm);

    MCAPI void clearFetchRealm();

    MCAPI void clearJoinRealm();

    MCAPI void clearLeaveRealm();

    MCAPI void fetchRealm(::std::string const& inviteCode);

    MCFOLD ::std::optional<::Realms::RealmsMembership::FetchRealmError> const& getFetchRealmError() const;

    MCFOLD ::std::optional<::Realms::World> const& getFetchRealmResult() const;

    MCFOLD ::OreUI::FacetTaskState const getFetchRealmTaskProgress() const;

    MCAPI ::std::optional<::Realms::RealmsMembership::JoinRealmError> const& getJoinRealmError() const;

    MCAPI ::OreUI::FacetTaskState getJoinRealmTaskProgress() const;

    MCAPI ::std::string const& getJoinedRealmId() const;

    MCAPI ::std::string const& getJoinedRealmName() const;

    MCAPI ::Realms::RealmsMembership::LeaveRealmResult const& getLeaveRealmResult() const;

    MCFOLD ::OreUI::FacetTaskState getLeaveRealmTaskProgress() const;

    MCAPI void joinRealm(::std::string const& inviteCode);

    MCAPI void leaveRealm(int64 worldId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsMembership> realmsJoinRealm);
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
