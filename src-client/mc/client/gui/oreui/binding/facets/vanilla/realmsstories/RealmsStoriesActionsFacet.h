#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/network/realms/OptInState.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Realms::Stories { struct FacetStateManager; }
// clang-format on

namespace OreUI {

class RealmsStoriesActionsFacet : public ::OreUI::FacetBase<::OreUI::RealmsStoriesActionsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MainMenuScreenModel>>                mMainMenuScreenModel;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesActionsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _clearDeleteStatus(::std::string const& feedItemId);

    MCAPI void _clearEventsStatus();

    MCAPI void _clearFetchMembersStatus();

    MCAPI void _clearFetchSessionsStatus();

    MCAPI void _clearPostCommentStatus();

    MCAPI void _clearPostStoryStatus();

    MCAPI void _clearReportToClubOwnerStatus(::std::string const& feedItemId);

    MCAPI void _clearReportToXboxStatus(::std::string const& feedItemId);

    MCAPI void _clearSetViewedStatus(::std::string const& feedItemId);

    MCAPI void _clearSettingsStatus();

    MCAPI void _clearStoryFeedStatus();

    MCAPI void _clearToggleLikeStatus(::std::string const& feedItemId);

    MCAPI void _delete(::std::string const& feedItemId, ::std::string const& feedItemRoot);

    MCAPI void _fetchEvents();

    MCAPI void _fetchMembers();

    MCAPI void _fetchSessions();

    MCAPI void _fetchStories();

    MCAPI void _fetchStoriesSettings(::std::string const& realmId);

    MCAPI void _fetchStoryComments(::std::string const& storyId);

    MCAPI void _fetchStoryImage(::std::string const& storyId);

    MCAPI void _initProvider(::std::string const& worldId);

    MCAPI void _joinRealmFromInvite();

    MCAPI void _loadStoriesSlice(int fromIndex, int toIndex);

    MCAPI void _openManageMembersScreen();

    MCAPI void _postComment();

    MCAPI void _postStoriesSettings(::std::string const& realmId);

    MCAPI void _postStoriesSettingsOnExit(::std::string const& realmId);

    MCAPI void _postStory();

    MCAPI void _reportFeedItemToXbox(
        ::std::string const& feedItemId,
        ::std::string const& feedItemRoot,
        ::std::string const& reportReason,
        ::std::string const& comment
    );

    MCAPI void _reportGamertagToXbox(
        ::std::string const& gamertag,
        ::std::string const& feedItemId,
        ::std::string const& feedItemRoot,
        ::std::string const& reportReason,
        ::std::string const& comment
    );

    MCAPI void _reportToClubOwner(::std::string const& feedItemId, ::std::string const& feedItemRoot);

    MCAPI void _resetProvider();

    MCAPI void _setPlayerOptInStatusAndPostWithOptInTelemetry(
        ::std::string const& realmId,
        ::Realms::OptInState state,
        ::std::string const& correlationId,
        ::std::string const& action,
        bool                 isOwner
    );

    MCAPI void _setRealmEventsState(bool state);

    MCAPI void _setRealmsCoordinatesState(bool state);

    MCAPI void _setRealmsNotificationState(bool state);

    MCAPI void _setRealmsTimelineRequirementState(bool state);

    MCAPI void _setRealmsTimelineState(bool state);

    MCAPI void _setViewed(::std::string const& feedItemId, ::std::string const& feedItemRoot);

    MCAPI void _toggleLike(::std::string const& feedItemId, ::std::string const& feedItemRoot);
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
