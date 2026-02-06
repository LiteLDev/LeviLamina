#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/CredentialsObserver.h"
#include "mc/certificates/identity/edu/GenericCredentialsEvent.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/services/messaging/MessageData.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/client/social/UserListObserver.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class SocialButtonScreenController;
struct ButtonArtSurface;
struct GatheringConfig;
struct IEntitlementManager;
namespace Json { class Value; }
namespace Social { struct User; }
namespace edu::auth { struct CredsAuthComplete; }
// clang-format on

class StartMenuScreenController : public ::MainMenuScreenController, public ::edu::auth::CredentialsObserver {
public:
    // StartMenuScreenController inner types declare
    // clang-format off
    class SignOutObserver;
    // clang-format on

    // StartMenuScreenController inner types define
    class SignOutObserver : public ::Social::UserListObserver {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::StartMenuScreenController>> mStartMenuScreenController;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void onUserRemoved(::std::shared_ptr<::Social::User> const& user) /*override*/;

        virtual ~SignOutObserver() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI void $onUserRemoved(::std::shared_ptr<::Social::User> const& user);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SocialButtonScreenController>>    mSocialButtonScreenController;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>> mEntitlementManager;
    ::ll::TypedStorage<1, 1, bool>                                                  mDirty;
    ::ll::TypedStorage<4, 4, int>                                                   mPendingInvites;
    ::ll::TypedStorage<1, 1, bool>                                                  mSigningIn;
    ::ll::TypedStorage<1, 1, bool>                                                  mNewStoreOffersAvailable;
    ::ll::TypedStorage<1, 1, bool>                                                  mErrorButtonHovered;
    ::ll::TypedStorage<4, 4, int>                                                   mAnimationCount;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mAnimatedMessage;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>               mLastSigningInAnimation;
    ::ll::TypedStorage<8, 8, int64>                                                 mNextContentFetchTime;
    ::ll::TypedStorage<8, 8, int64>                                                 mNextImportTime;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                              mExistenceTracker;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::StartMenuScreenController::SignOutObserver>> mSignOutObserver;
    ::ll::TypedStorage<8, 72, ::Social::ProfileImageOptions>                                  mProfileImage;
    ::ll::TypedStorage<1, 1, bool>                                                            mSetFocusToSignInButton;
    ::ll::TypedStorage<1, 1, bool>                                                            mCapabilitiesChanged;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                                   mTaskGroup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ButtonArtSurface>>                 mStoreButtonArtSurface;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ButtonArtSurface>>                 mPlayButtonArtSurface;
    ::ll::TypedStorage<8, 640, ::std::optional<::MessageData>>                                mStoreButtonArtData;
    ::ll::TypedStorage<8, 640, ::std::optional<::MessageData>>                                mPlayButtonArtData;
    ::ll::TypedStorage<1, 1, bool>                                                            mStoreButtonHovered;
    ::ll::TypedStorage<1, 1, bool>                                                            mPlayButtonHovered;
    ::ll::TypedStorage<4, 4, int>                                                             mUnreadInvites;
    ::ll::TypedStorage<1, 1, bool>                                        mInitialInboxAnimationPlayed;
    ::ll::TypedStorage<1, 1, bool>                                        mShowingNewPlayerFlowButtons;
    ::ll::TypedStorage<1, 1, bool>                                        mNeedToPlayMainButtonsShowAnimation;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GatheringConfig const>> mActiveGathering;
    ::ll::TypedStorage<1, 1, bool>                                        mOwnsRealmsSubscription;
    ::ll::TypedStorage<1, 1, bool>                                        mRealmsFetched;
    ::ll::TypedStorage<4, 4, ::Realms::GenericStatus>                     mRealmsStatus;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mPendingInviteCountSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mPrimaryUserSignInSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mTrialModeUpdateSubscription;
    ::ll::TypedStorage<1, 1, bool>                                        mIsTrialModeEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    StartMenuScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StartMenuScreenController() /*override*/;

    virtual void handleLicenseChanged() /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual void onCreation() /*override*/;

    virtual void queueTitleNarration() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onEntered() /*override*/;

    virtual void onInit() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification) /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void
    onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsAuthComplete> const& state) /*override*/;

    virtual ::std::string _getButtonYDescription() /*override*/;

    virtual ::std::string _getButtonXDescription() /*override*/;

    virtual ::ui::ViewRequest promptConnect(
        bool                                                          signInOnSuccess,
        ::std::function<void(::Social::UserPlatformConnectionResult)> signInCallback
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StartMenuScreenController(
        ::std::shared_ptr<::MainMenuScreenModel>             model,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager
    );

    MCAPI bool _YHelperVisible() const;

    MCAPI void _createProxy();

    MCFOLD void _displayOpenExternalBrowserDialog(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void _fetchRealms();

    MCAPI void _fetchUserOrientedContent(bool signInFailed);

    MCAPI bool _hasAnimatedGatheringBadge() const;

    MCAPI bool _hasValidGathering() const;

    MCAPI bool _isProfileButtonBEnabled() const;

    MCAPI bool _isSignInVisible();

    MCAPI bool _isUserSigningIn() const;

    MCAPI ::ui::ViewRequest _navigateToProfileScreen();

    MCAPI bool _realmsPromoEnabled() const;

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _registerGatheringBindings();

    MCAPI void _registerPlayButtonArtBindings();

    MCAPI void _registerSilentSignInCallbacks();

    MCAPI void _registerStoreButtonArtBindings();

    MCAPI void _tryImportPacks();

    MCAPI void _updateButtonArt();

    MCAPI void _updateGatherings();

    MCAPI void _updateProfileImage();

    MCAPI void _updateUnreadMessageCount();

    MCAPI void resetInboxAnimation();

    MCAPI void startInboxAnimation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>             model,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager
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
    MCAPI void $handleLicenseChanged();

    MCAPI ::ui::SceneType $getSceneType() const;

    MCAPI void $onCreation();

    MCAPI void $queueTitleNarration();

    MCAPI void $onOpen();

    MCAPI void $onEntered();

    MCAPI void $onInit();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsAuthComplete> const& state);

    MCAPI ::std::string $_getButtonYDescription();

    MCAPI ::std::string $_getButtonXDescription();

    MCAPI ::ui::ViewRequest
    $promptConnect(bool signInOnSuccess, ::std::function<void(::Social::UserPlatformConnectionResult)> signInCallback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftable();
    // NOLINTEND
};
