#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/RealmPlayer.h"
#include "mc/client/network/realms/RealmsAPI.h"
#include "mc/client/network/realms/World.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class DropdownScreenController;
class MainMenuScreenModel;
class PlatformMultiplayerRestrictions;
struct ProgressHandler;
struct UIPropertyBag;
namespace Json { class Value; }
namespace Realms { struct Player; }
namespace Social { struct PlatformUserProfileData; }
// clang-format on

class RealmsAllowListScreenController : public ::MainMenuScreenController {
public:
    // RealmsAllowListScreenController inner types define
    enum class SearchState : int {};

    enum class RealmPlayerList : int {};

    using InviteList = ::std::map<::std::string, ::RealmsAPI::InviteAction>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::RealmPlayer>                                      EMPTY_PLAYER;
    ::ll::TypedStorage<1, 1, bool>                                                 mLoading;
    ::ll::TypedStorage<1, 1, bool>                                                 mListsLoaded;
    ::ll::TypedStorage<1, 1, bool>                                                 mFromExistingWorld;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                             mFollowUpActionAfterCreation;
    ::ll::TypedStorage<1, 1, bool>                                                 mRefreshUI;
    ::ll::TypedStorage<1, 1, bool>                                                 mClickedRefresh;
    ::ll::TypedStorage<8, 656, ::Realms::World>                                    mWorld;
    ::ll::TypedStorage<1, 1, bool>                                                 mInvitesSent;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>              mLastRefreshUpdate;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>              mLastFriendListUpdate;
    ::ll::TypedStorage<1, 1, bool>                                                 mNewWorld;
    ::ll::TypedStorage<1, 1, bool>                                                 mPermissionsDirty;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>              mLastTryJoin;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ProgressHandler>>                 mProgressHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::DropdownScreenController>>       mMembersDropdownController;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::DropdownScreenController>>       mInvitedFriendsDropdownController;
    ::ll::TypedStorage<4, 4, int>                                                  mUninvitedFriendsPageIndex;
    ::ll::TypedStorage<4, 4, int>                                                  mInvitedFriendsPageIndex;
    ::ll::TypedStorage<4, 4, int>                                                  mMembersPageIndex;
    ::ll::TypedStorage<4, 4, int>                                                  mBlockedPlayersPageIndex;
    ::ll::TypedStorage<1, 1, ::PlayerPermissionLevel>                              mDefaultPermission;
    ::ll::TypedStorage<1, 1, ::PlayerPermissionLevel>                              mDefaultPermissionOld;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mUninvitedFriendsLastFilter;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mInvitedFriendsLastFilter;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mMembersLastFilter;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mBlockedPlayersLastFilter;
    ::ll::TypedStorage<4, 4, int>                                                  mPreviousMembersPageIndex;
    ::ll::TypedStorage<4, 4, int>                                                  mPreviousInvitedFriendsPageIndex;
    ::ll::TypedStorage<4, 4, int>                                                  mPreviousUninvitedFriendsPageIndex;
    ::ll::TypedStorage<4, 4, int>                                                  mPreviousBlockedPlayersPageIndex;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::RealmPlayer>>  mCompleteWorldPlayerList;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Social::PlatformUserProfileData>>
                                                                   mLinkedPlatformAccounts;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>>                  mLinkedAccountLoadCounter;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        mCurrentMembersList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        mFullMembersList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        mFilteredMembersList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        mCurrentInvitedFriendsList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        mFullInvitedFriendsList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        mFilteredInvitedFriendsList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        mCurrentUninvitedFriendsList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        mFullUninvitedFriendsList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        mFilteredUninvitedFriendsList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        mCurrentBlockedPlayersList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        mFullBlockedPlayersList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        mFilteredBlockedPlayersList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        mPendingXuidsForLinkedAccounts;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>> mPreviouslyObservedXboxLiveFriends;
    ::ll::TypedStorage<8, 32, ::std::string>                       mSharePopupBButtonDescription;
    ::ll::TypedStorage<4, 4, uint>                                 mCurrentUpdatedPlayers;
    ::ll::TypedStorage<1, 1, bool>                                 mShowLinkedAccounts;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsAllowListScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsAllowListScreenController() /*override*/;

    virtual void onLeave() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::std::string _getButtonBDescription() /*override*/;

    virtual bool _getGamepadHelperVisible() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsAllowListScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::Realms::World const&                   world,
        bool const&                              fromExistingWorld,
        ::std::function<void()>                  followUpCallbackAfterCreation,
        bool                                     fromSettingsOrAllowListEntryPoint
    );

    MCAPI void _buildPlayerList();

    MCAPI void _clearFromFriendLists(::std::string const& xuid);

    MCAPI void _clearMemberList();

    MCAPI void _finalizeLinkedAccountLoading();

    MCAPI void _getBlocklistProfiles(::std::vector<::std::string> allXuids, ::std::vector<::std::string> blockList);

    MCAPI ::std::map<::std::string, ::RealmsAPI::InviteAction> _getInvitesToSend() const;

    MCAPI ::RealmPlayer*
    _getRealmPlayerAtIndex(int index, ::RealmsAllowListScreenController::RealmPlayerList realmPlayerList);

    MCAPI ::RealmPlayer* _getRealmPlayerFromXuid(::std::string const& xuid);

    MCAPI ::RealmsAllowListScreenController::RealmPlayerList const
    _getRealmPlayerListFromCollection(::UIPropertyBag const* bag) const;

    MCAPI void _handlePlayerInvite(::RealmPlayer& player);

    MCAPI void _handleUpdateFailed(::std::function<void()> callback);

    MCAPI void _initializeLinkedAccounts(
        ::std::vector<::std::string>&                           platformIds,
        ::std::vector<::Social::PlatformUserProfileData> const& platformProfiles
    );

    MCAPI void _initializePlayerList(::std::function<void()> callback);

    MCAPI bool _isFriend(::std::string const& xuid);

    MCAPI void _joinRealm();

    MCAPI void _markStatusNoLongerChanged(::std::map<::std::string, ::RealmsAPI::InviteAction> const& changed);

    MCAPI void _refreshOrExit(::std::function<void()> callback);

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _requestPlatformGamerpic(::Social::PlatformUserProfileData const& platformEntry);

    MCAPI void _sendInvites(::std::function<void()> callback);

    MCAPI bool _shouldUpdateFriendsList();

    MCAPI void _sortPlayerList();

    MCAPI void _updateAllListModels();

    MCAPI void _updateFriendsList();

    MCAPI void _updateLinkedAccountLoading();

    MCAPI void _updatePlayerList(
        ::std::vector<::Realms::Player> const& newPlayers,
        ::std::vector<::Realms::Player> const& newBlockList
    );

    MCAPI void _updatePlayerlistModel(
        ::std::string const&                               filter,
        ::RealmsAllowListScreenController::RealmPlayerList realmPlayerList,
        bool                                               forceUpdate
    );

    MCAPI void sendDefaultPermission(::PlayerPermissionLevel const& permission);

    MCAPI void sendInvitesWithProgress(::std::function<void()> callback);

    MCAPI void sendUserPermission(
        ::std::string const&    xuid,
        ::PlayerPermissionLevel permission,
        ::PlayerPermissionLevel oldPermission
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::Realms::World const&                   world,
        bool const&                              fromExistingWorld,
        ::std::function<void()>                  followUpCallbackAfterCreation,
        bool                                     fromSettingsOrAllowListEntryPoint
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onLeave();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI ::std::string $_getButtonBDescription();

    MCFOLD bool $_getGamepadHelperVisible() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
