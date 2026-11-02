#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Option;
class PauseScreenModel;
class PermissionsScreenController;
class PlayerListEntry;
class SocialButtonScreenController;
class UserDataScreenController;
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class PauseScreenController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>>                    mClientIds;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SocialButtonScreenController>> mSocialButtonScreenController;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                    mCurrentClientId;
    ::ll::TypedStorage<1, 1, bool>                                               mPlayerListInitialized;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UserDataScreenController>>       mUserDataScreenController;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::PermissionsScreenController>>    mPermissionsScreenController;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PauseScreenModel>>             mPauseScreenModel;
    ::ll::TypedStorage<8, 104, ::Social::ProfileImageOptions>                    mProfileImage;
    ::ll::TypedStorage<1, 1, bool>                                               mOldPauseStatus;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mOnPlayerListEntryRemovedSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mPauseOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mTrialModeUpdateSubscription;
    ::ll::TypedStorage<1, 1, bool>                                               mScoreboardShowing;
    ::ll::TypedStorage<1, 1, bool>                                               mErrorButtonHovered;
    ::ll::TypedStorage<4, 4, int>                                                mPreviousMaxPlayerCount;
    ::ll::TypedStorage<4, 4, int>                                                mFeedUnreadCount;
    ::ll::TypedStorage<1, 1, bool>                                               mRefreshScreen;
    ::ll::TypedStorage<1, 1, bool>                                               mIsTrialModeEnabled;
    ::ll::TypedStorage<1, 1, bool>                                               mOverlaySocialDrawerOnce;
    ::ll::TypedStorage<1, 1, bool>                                               mOldUnreadMessagesStatus;
    // NOLINTEND

public:
    // prevent constructor by default
    PauseScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PauseScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual void onInit() /*override*/;

    virtual void onEntered() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void queueTitleNarration() /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PauseScreenController(::std::shared_ptr<::PauseScreenModel> model, bool overlaySocialDrawerOnce);

    MCNAPI bool _isInviteButtonEnabled() const;

    MCNAPI bool _isInviteButtonVisible() const;

    MCNAPI bool _isMultiplayerLocked() const;

    MCNAPI bool _isProfileButtonAEnabled() const;

    MCNAPI bool _isProfileButtonBEnabled() const;

    MCNAPI void _navigateToPermissions(::ActorUniqueID const& id);

    MCNAPI void _onPlayerListEntryRemoved(
        ::PlayerListEntry const&,
        ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const& list
    );

    MCNAPI void _pauseToggleOptionCallback(::Option const& pauseFeatureToggle);

    MCNAPI void _populateClientIds();

    MCNAPI bool _showRealmsButtons() const;

    MCNAPI bool _useMovedInviteButton() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::PauseScreenModel> model, bool overlaySocialDrawerOnce);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onOpen();

    MCNAPI void $onTerminate();

    MCNAPI void $onInit();

    MCNAPI void $onEntered();

    MCNAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCNAPI void $queueTitleNarration();

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification notification);

    MCNAPI ::std::string $_getButtonADescription();
    // NOLINTEND
};
