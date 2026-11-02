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
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/services/messaging/MessageData.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/network/ExperiencePromotion.h"
#include "mc/services/flighting/InboxIconFlightingState.h"

// auto generated forward declare list
// clang-format off
class ButtonArtSurface;
class IEntitlementManager;
class InboxSurface;
class MainMenuScreenModel;
class SocialButtonScreenController;
namespace Json { class Value; }
namespace edu::auth { struct CredsAuthComplete; }
// clang-format on

class StartMenuScreenController : public ::MainMenuScreenController, public ::edu::auth::CredentialsObserver {
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
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                              mExistenceTracker;
    ::ll::TypedStorage<8, 104, ::Social::ProfileImageOptions>                       mProfileImage;
    ::ll::TypedStorage<1, 1, bool>                                                  mProfileImageLoaded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                      mProfileImageChangedSubscription;
    ::ll::TypedStorage<1, 1, bool>                                                  mSetFocusToSignInButton;
    ::ll::TypedStorage<1, 1, bool>                                                  mCapabilitiesChanged;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                         mTaskGroup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ButtonArtSurface>>       mStoreButtonArtSurface;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ButtonArtSurface>>       mPlayButtonArtSurface;
    ::ll::TypedStorage<8, 848, ::std::optional<::MessageData>>                      mStoreButtonArtData;
    ::ll::TypedStorage<8, 848, ::std::optional<::MessageData>>                      mPlayButtonArtData;
    ::ll::TypedStorage<1, 1, bool>                                                  mStoreButtonHovered;
    ::ll::TypedStorage<1, 1, bool>                                                  mPlayButtonHovered;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::InboxSurface>>           mInboxSurface;
    ::ll::TypedStorage<4, 4, int>                                                   mUnreadInvites;
    ::ll::TypedStorage<1, 1, bool>                                                  mInitialInboxAnimationPlayed;
    ::ll::TypedStorage<1, 1, bool>                                                  mShowingNewPlayerFlowButtons;
    ::ll::TypedStorage<4, 4, ::InboxIconFlightingState>                             mInboxIconState;
    ::ll::TypedStorage<1, 1, bool>                                                  mNeedToPlayMainButtonsShowAnimation;
    ::ll::TypedStorage<8, 248, ::std::optional<::ExperiencePromotion>>              mActivePromotion;
    ::ll::TypedStorage<1, 1, bool>                                                  mOwnsRealmsSubscription;
    ::ll::TypedStorage<1, 1, bool>                                                  mRealmsFetched;
    ::ll::TypedStorage<4, 4, ::Realms::GenericStatus>                               mRealmsStatus;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                      mPendingInviteCountSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                      mPrimaryUserSignInSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                      mTrialModeUpdateSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                      mInboxIconStateSubscription;
    ::ll::TypedStorage<1, 1, bool>                                                  mIsTrialModeEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    StartMenuScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StartMenuScreenController() /*override*/ = default;

    virtual void handleLicenseChanged() /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual void onCreation() /*override*/;

    virtual void queueTitleNarration() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onEntered() /*override*/;

    virtual void onInit() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;

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

    MCNAPI bool _YHelperVisible() const;

    MCNAPI void _fetchUserOrientedContent(bool const signInFailed);

    MCNAPI bool _isProfileButtonAEnabled() const;

    MCNAPI bool _isProfileButtonBEnabled() const;

    MCNAPI bool _isSignInVisible();

    MCNAPI bool _realmsPromoEnabled() const;

    MCNAPI void resetInboxAnimation();

    MCNAPI void startInboxAnimation();
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $handleLicenseChanged();

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCAPI void $onCreation();

    MCNAPI void $queueTitleNarration();

    MCAPI void $onOpen();

    MCNAPI void $onEntered();

    MCNAPI void $onInit();

    MCAPI ::ui::DirtyFlag $tick();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification notification);

    MCNAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<::edu::auth::CredsAuthComplete> const& state);

    MCNAPI ::std::string $_getButtonYDescription();

    MCNAPI ::std::string $_getButtonXDescription();

    MCNAPI ::ui::ViewRequest
    $promptConnect(bool signInOnSuccess, ::std::function<void(::Social::UserPlatformConnectionResult)> signInCallback);
    // NOLINTEND
};
