#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/network/realms/OptInState.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

namespace OreUI {

class RealmsStoriesActionsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsStoriesActionsFacet> {
public:
    // RealmsStoriesActionsFacet inner types define
    enum class OptInTelemetryUserState : int {
        CanNotChangeRealmOptIn = 0,
        CanChangeRealmOptIn    = 1,
        IsOwner                = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MainMenuScreenModel>>                mMainMenuScreenModel;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesActionsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesActionsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsStoriesActionsFacet(
        ::std::shared_ptr<::Realms::Stories::FacetStateManager> realmsStoriesProvider,
        ::std::shared_ptr<::MainMenuScreenModel>                mainMenuScreenModel
    );

    MCNAPI void _clearDeleteStatus(::std::string const& feedItemId);

    MCNAPI void _clearEventsStatus();

    MCNAPI void _clearFetchMembersStatus();

    MCNAPI void _clearFetchSessionsStatus();

    MCNAPI void _clearPostCommentStatus();

    MCNAPI void _clearPostStoryStatus();

    MCNAPI void _clearReportToClubOwnerStatus(::std::string const& feedItemId);

    MCNAPI void _clearReportToXboxStatus(::std::string const& feedItemId);

    MCNAPI void _clearSetViewedStatus(::std::string const& feedItemId);

    MCNAPI void _clearSettingsStatus();

    MCNAPI void _clearStoryFeedStatus();

    MCNAPI void _clearToggleLikeStatus(::std::string const& feedItemId);

    MCNAPI void _delete(::std::string const& feedItemId, ::std::string const& feedItemRoot);

    MCNAPI void _fetchEvents();

    MCNAPI void _fetchMembers();

    MCNAPI void _fetchSessions();

    MCNAPI void _fetchStories();

    MCNAPI void _fetchStoriesSettings(::std::string const& realmId);

    MCNAPI void _fetchStoryComments(::std::string const& storyId);

    MCNAPI void _fetchStoryImage(::std::string const& storyId);

    MCNAPI void _initProvider(::std::string const& worldId);

    MCNAPI void _joinRealmFromInvite();

    MCNAPI void _loadStoriesSlice(int fromIndex, int toIndex);

    MCNAPI void _openManageMembersScreen();

    MCNAPI void _postComment();

    MCNAPI void _postStoriesSettings(::std::string const& realmId);

    MCNAPI void _postStoriesSettingsOnExit(::std::string const& realmId);

    MCNAPI void _postStory();

    MCNAPI void _reportFeedItemToXbox(
        ::std::string const& feedItemId,
        ::std::string const& feedItemRoot,
        ::std::string const& reportReason,
        ::std::string const& comment
    );

    MCNAPI void _reportGamertagToXbox(
        ::std::string const& gamertag,
        ::std::string const& feedItemId,
        ::std::string const& feedItemRoot,
        ::std::string const& reportReason,
        ::std::string const& comment
    );

    MCNAPI void _reportToClubOwner(::std::string const& feedItemId, ::std::string const& feedItemRoot);

    MCNAPI void _resetProvider();

    MCNAPI void _setPlayerOptInStatusAndPostWithOptInTelemetry(
        ::std::string const&                                        realmId,
        ::Realms::OptInState                                        state,
        ::std::string const&                                        correlationId,
        ::std::string const&                                        action,
        ::OreUI::RealmsStoriesActionsFacet::OptInTelemetryUserState userState
    );

    MCNAPI void _setRealmEventsState(bool state);

    MCNAPI void _setRealmsCoordinatesState(bool state);

    MCNAPI void _setRealmsNotificationState(bool state);

    MCNAPI void _setRealmsTimelineRequirementState(bool state);

    MCNAPI void _setRealmsTimelineState(bool state);

    MCNAPI void _setViewed(::std::string const& feedItemId, ::std::string const& feedItemRoot);

    MCNAPI void _toggleLike(::std::string const& feedItemId, ::std::string const& feedItemRoot);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::shared_ptr<::Realms::Stories::FacetStateManager> realmsStoriesProvider,
        ::std::shared_ptr<::MainMenuScreenModel>                mainMenuScreenModel
    );
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
