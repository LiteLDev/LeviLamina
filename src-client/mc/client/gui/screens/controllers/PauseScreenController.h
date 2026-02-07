#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
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
namespace Realms { struct World; }
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
    ::ll::TypedStorage<8, 72, ::Social::ProfileImageOptions>                     mProfileImage;
    ::ll::TypedStorage<1, 1, bool>                                               mOldPauseStatus;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mOnPlayerListEntryRemovedSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mPauseOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mTrialModeUpdateSubscription;
    ::ll::TypedStorage<1, 1, bool>                                               mScoreboardShowing;
    ::ll::TypedStorage<1, 1, bool>                                               mPersonaEnabled;
    ::ll::TypedStorage<1, 1, bool>                                               mErrorButtonHovered;
    ::ll::TypedStorage<4, 4, int>                                                mPreviousMaxPlayerCount;
    ::ll::TypedStorage<4, 4, int>                                                mFeedUnreadCount;
    ::ll::TypedStorage<1, 1, bool>                                               mRefreshScreen;
    ::ll::TypedStorage<1, 1, bool>                                               mIsTrialModeEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    PauseScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PauseScreenController() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual void onInit() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification) /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PauseScreenController(::std::shared_ptr<::PauseScreenModel> model);

    MCFOLD void _displayOpenExternalBrowserDialog(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void _getUnreadCount(::Realms::World const& world);

    MCAPI bool _isInviteButtonEnabled() const;

    MCAPI bool _isInviteButtonVisible() const;

    MCAPI bool _isMultiplayerLocked() const;

    MCAPI bool _isProfileButtonAEnabled() const;

    MCAPI bool _isProfileButtonBEnabled() const;

    MCAPI bool _isScreenshotButtonVisible() const;

    MCAPI void _navigateToInviteScreen();

    MCAPI void _navigateToPermissions(::ActorUniqueID const& id);

    MCAPI ::ui::ViewRequest _navigateToProfileOrSkinsScreen();

    MCAPI void _onPlayerListEntryRemoved(
        ::PlayerListEntry const&,
        ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const& list
    );

    MCAPI void _pauseToggleOptionCallback(::Option const& pauseFeatureToggle);

    MCAPI void _populateClientIds();

    MCAPI void _registerBindings();

    MCAPI void _registerConnectors();

    MCAPI void _registerEventHandlers();

    MCAPI void _registerSubControllers();

    MCAPI void _setScreenPauseIntent(bool intent);

    MCAPI void _updateProfileImage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::PauseScreenModel> model);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI void $onTerminate();

    MCAPI void $onInit();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCFOLD ::ui::SceneType $getSceneType() const;

    MCAPI ::ui::DirtyFlag $tick();

    MCFOLD ::std::string $_getButtonADescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
