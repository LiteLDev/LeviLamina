#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/social/IToastEventListener.h"
#include "mc/client/tutorial/game_tip_constants/Animation.h"
#include "mc/client/tutorial/game_tip_constants/Interruption.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class HudContainerManagerController;
class Option;
class ToastMessage;
struct GameTip;
struct UIPropertyBag;
// clang-format on

class GameTipScreenController : public ::ClientInstanceScreenController, public ::IToastEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::HudContainerManagerController>>     mHudContainerManagerController;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::GameTip>>>            mAvailableTips;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::GameTip>>                             mActiveNowTip;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::GameTip>>                             mInterruptedTip;
    ::ll::TypedStorage<4, 4, float>                                                   mActiveNowTipGuiScale;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                         mActiveDisplayFactoryName;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::GameTipConstants::Interruption>> mInterruptions;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds>                                  mCooldownAfterStoppedDisplaying;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds>                                  mCooldownAfterInterruption;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                 mLastTipStoppedDisplayingTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                 mLastInterruptionFinishedTime;
    ::ll::TypedStorage<4, 4, ::InputMode>                                             mInputModeLastTick;
    ::ll::TypedStorage<1, 1, bool>                                                    mFirstTick;
    ::ll::TypedStorage<1, 1, bool>                                                    mUpdateBinds;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mGametipOptionSubscription;
    ::ll::TypedStorage<1, 1, bool>                                                    mShowGameTipsAnimations;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTipScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameTipScreenController() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void
    handleToastEvent(::IToastEventListener::ToastEventType const eventType, ::ToastMessage const msg) /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameTipScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel>     model,
        ::std::shared_ptr<::HudContainerManagerController> mHudScreenManagerController
    );

    MCAPI void _addActiveTipArrowProperties(::UIPropertyBag& bag);

    MCAPI void _addInterruption(::GameTipConstants::Interruption interruption);

    MCAPI void _cleanUpFinishedTips();

    MCAPI void _destroyActiveTip();

    MCAPI void _displayActiveTip(::GameTipConstants::Animation animation);

    MCAPI void _displayNewTip(::std::shared_ptr<::GameTip> const& tip);

    MCAPI void _gametipOptionCallback(::Option const& gametipEnabled);

    MCAPI ::std::string _getActiveTipAnimationFileName(::InputMode inputMode);

    MCAPI ::std::string _getActiveTipLocalizationText(::InputMode inputMode) const;

    MCAPI ::std::array<::std::string, 2> _getActiveTipOffset() const;

    MCAPI void _handleInterruptions();

    MCAPI void _handleMobsNearbyInterruption();

    MCAPI void _instantiateTips();

    MCAPI void _maybeUpdateActiveNowTip();

    MCAPI void _removeInterruption(::GameTipConstants::Interruption interruption);

    MCAPI void _stopDisplayingActiveTip();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel>     model,
        ::std::shared_ptr<::HudContainerManagerController> mHudScreenManagerController
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
    MCAPI void $onOpen();

    MCFOLD void $onTerminate();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $handleToastEvent(::IToastEventListener::ToastEventType const eventType, ::ToastMessage const msg);

    MCAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification notification);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftable();
    // NOLINTEND
};
