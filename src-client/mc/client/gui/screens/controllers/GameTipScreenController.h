#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/social/IToastEventListener.h"
#include "mc/client/tutorial/game_tip_constants/Interruption.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class GameTip;
class HudContainerManagerController;
class ToastMessage;
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
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameTipScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void handleToastEvent(::IToastEventListener::ToastEventType const, ::ToastMessage const) /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
