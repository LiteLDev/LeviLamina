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
#include "mc/client/social/UserListObserver.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct IEntitlementManager;
struct MainMenuScreenModel;
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
        ::ll::UntypedStorage<8, 16> mUnkfc90bb;
        // NOLINTEND

    public:
        // prevent constructor by default
        SignOutObserver& operator=(SignOutObserver const&);
        SignOutObserver(SignOutObserver const&);
        SignOutObserver();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void onUserRemoved(::std::shared_ptr<::Social::User> const& user) /*override*/;

        virtual ~SignOutObserver() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $onUserRemoved(::std::shared_ptr<::Social::User> const& user);
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
    ::ll::UntypedStorage<8, 16>  mUnkfb1ae6;
    ::ll::UntypedStorage<8, 24>  mUnkee2b55;
    ::ll::UntypedStorage<1, 1>   mUnkead9e7;
    ::ll::UntypedStorage<4, 4>   mUnk8df4cf;
    ::ll::UntypedStorage<1, 1>   mUnkae1e69;
    ::ll::UntypedStorage<1, 1>   mUnk6f63ba;
    ::ll::UntypedStorage<1, 1>   mUnkda940b;
    ::ll::UntypedStorage<4, 4>   mUnk8fa435;
    ::ll::UntypedStorage<8, 32>  mUnk999f6e;
    ::ll::UntypedStorage<8, 8>   mUnk2c619a;
    ::ll::UntypedStorage<8, 8>   mUnk7e9fa8;
    ::ll::UntypedStorage<8, 8>   mUnk1717cc;
    ::ll::UntypedStorage<8, 16>  mUnk330f79;
    ::ll::UntypedStorage<8, 8>   mUnk9af8a3;
    ::ll::UntypedStorage<8, 72>  mUnk87c88d;
    ::ll::UntypedStorage<1, 1>   mUnk3144fa;
    ::ll::UntypedStorage<1, 1>   mUnkd7b80b;
    ::ll::UntypedStorage<8, 336> mUnk8d5d3d;
    ::ll::UntypedStorage<8, 24>  mUnk356acd;
    ::ll::UntypedStorage<8, 24>  mUnkfac3ef;
    ::ll::UntypedStorage<8, 640> mUnkf5e79a;
    ::ll::UntypedStorage<8, 640> mUnk1a01e4;
    ::ll::UntypedStorage<1, 1>   mUnk2b5ff2;
    ::ll::UntypedStorage<1, 1>   mUnkcdb60d;
    ::ll::UntypedStorage<4, 4>   mUnkd19229;
    ::ll::UntypedStorage<1, 1>   mUnk7f1b8a;
    ::ll::UntypedStorage<1, 1>   mUnke51a51;
    ::ll::UntypedStorage<1, 1>   mUnk6c9060;
    ::ll::UntypedStorage<8, 16>  mUnkfcd5dd;
    ::ll::UntypedStorage<1, 1>   mUnk30d692;
    ::ll::UntypedStorage<1, 1>   mUnk3022ce;
    ::ll::UntypedStorage<4, 4>   mUnkd4c4ff;
    ::ll::UntypedStorage<8, 16>  mUnkef4eac;
    ::ll::UntypedStorage<8, 16>  mUnk62c01d;
    ::ll::UntypedStorage<8, 16>  mUnkd976d6;
    ::ll::UntypedStorage<1, 1>   mUnk6ac2e9;
    // NOLINTEND

public:
    // prevent constructor by default
    StartMenuScreenController& operator=(StartMenuScreenController const&);
    StartMenuScreenController(StartMenuScreenController const&);
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
