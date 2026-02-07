#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class PlatformMultiplayerRestrictions;
// clang-format on

class LateJoinPreGameScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                             mUserReadyToJoinCallback;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsSigningIn;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsUserReady;
    ::ll::TypedStorage<1, 1, bool>                                                 mShouldPromptForPlatformConnection;
    ::ll::TypedStorage<1, 1, bool>                                                 mShouldCheckPremiumPlatformAccess;
    ::ll::TypedStorage<1, 1, bool>                                                 mCheckingPremiumPlatformAccess;
    ::ll::TypedStorage<1, 1, bool>                                                 mAutoXBLSignInAttempted;
    ::ll::TypedStorage<1, 1, bool>                                                 mShowingWarning;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsAnimatingTextVisible;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mAnimatedMessage;
    ::ll::TypedStorage<4, 4, int>                                                  mAnimationCount;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>              mLastAnimatingTextUpdate;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<1, 1, bool>                                                 mHasXBLBroadcast;
    // NOLINTEND

public:
    // prevent constructor by default
    LateJoinPreGameScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LateJoinPreGameScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string _getButtonBDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LateJoinPreGameScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::function<void()> const&            userReadyCallback,
        bool                                      hasXBLBroadcast
    );

    MCAPI void _checkPremiumAccessAndShowUpsell(::std::function<void(bool)> callback);

    MCAPI void _handleUserReadyToJoinGame();

    MCAPI void _promptForPlatformConnection();

    MCAPI bool _tickAnimatingText(bool updateBaseText);

    MCAPI bool _tickUserState();

    MCAPI void _warnLockedSkin();

    MCAPI void _warnRestrictedPlatformMultiplayer();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::chrono::seconds const& ANIMATION_INTERVAL();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::function<void()> const&            userReadyCallback,
        bool                                      hasXBLBroadcast
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI ::std::string $_getButtonBDescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
