#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/TitleMessage.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/input/vanilla/remapping/ActionEnum.h"
#include "mc/deps/core/timing/Stopwatch.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class GameTipScreenController;
class HudContainerManagerController;
class ScoreboardScreenController;
class UIPropertyBag;
namespace Json { class Value; }
// clang-format on

class HudScreenController : public ::ClientInstanceScreenController {
public:
    // HudScreenController inner types declare
    // clang-format off
    struct ButtonLists;
    struct Tooltip;
    // clang-format on

    // HudScreenController inner types define
    enum class Tooltips : uchar {
        None      = 0,
        LeftTips  = 1,
        RightTips = 2,
    };

    struct ButtonLists {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> chatbuttonList;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> ttsButtonList;
        // NOLINTEND
    };

    struct Tooltip {
    public:
        // Tooltip inner types define
        enum class Type : uchar {
            KeyboardOnly = 0,
            GamepadOnly  = 1,
            Mixed        = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::Remapping::ActionEnum>              action;
        ::ll::TypedStorage<1, 1, ::HudScreenController::Tooltip::Type> type;
        ::ll::TypedStorage<8, 64, ::std::function<::std::string()>>    generateTooltipDescription;
        ::ll::TypedStorage<8, 32, ::std::string>                       keyPostfix;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mOnBossEventWithPacketSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mOnBossEventSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mOnLevelSoundEvent;
    ::ll::TypedStorage<1, 1, bool>                                                mEDUDiscoveryObserved;
    ::ll::TypedStorage<4, 4, int>                                                 mInputDelayTimer;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mPopupItemText;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mPopupJukeboxText;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mTipText;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                         mPlayerPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                         mAgentPos;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>                                     mRecordedDirtyState;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::HudContainerManagerController>> mHudScreenManagerController;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ScoreboardScreenController>>    mScoreboardScreenController;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GameTipScreenController>>       mGameTipScreenController;
    ::ll::TypedStorage<1, 1, bool>                                                mIsPlayerRiding;
    ::ll::TypedStorage<1, 1, bool>                                                mIsCreative;
    ::ll::TypedStorage<1, 1, bool>                                                mIsSpectator;
    ::ll::TypedStorage<1, 1, bool>                                                mIsExpediateEmoteActive;
    ::ll::TypedStorage<1, 1, bool>                                                mHasPresentedInitialChat;
    ::ll::TypedStorage<1, 1, bool>                                                mIsAutoSaving;
    ::ll::TypedStorage<1, 1, bool>                                                mIsAutoSaveTimerDone;
    ::ll::TypedStorage<8, 56, ::Stopwatch>                                        mAutoSaveTimer;
    ::ll::TypedStorage<8, 56, ::Stopwatch>                                        mHUDOpacityTimer;
    ::ll::TypedStorage<4, 4, float>                                               mHUDOpacityOverride;
    ::ll::TypedStorage<1, 1, bool>                                                mOverrideHUDOpacity;
    ::ll::TypedStorage<1, 1, bool>             mShouldFireInitialControlTipsActivationEvent;
    ::ll::TypedStorage<1, 1, bool>             mIsDisplayingGameTip;
    ::ll::TypedStorage<1, 1, bool>             mIsTitleOnDisplay;
    ::ll::TypedStorage<1, 1, bool>             mIsActionBarMessageOnDisplay;
    ::ll::TypedStorage<8, 232, ::TitleMessage> mTitleQueuedData;
    ::ll::TypedStorage<8, 232, ::TitleMessage> mTitleOnDisplayData;
    ::ll::TypedStorage<8, 24, ::std::vector<::HudScreenController::Tooltip>> mLeftTooltips;
    ::ll::TypedStorage<8, 24, ::std::vector<::HudScreenController::Tooltip>> mRightTooltips;
    ::ll::TypedStorage<8, 24, ::std::vector<::HudScreenController::Tooltip>> mEmoteTooltips;
    ::ll::TypedStorage<1, 1, bool>                                           mOnNewDeathScreen;
    ::ll::TypedStorage<1, 1, bool>                                           mShowCursor;
    ::ll::TypedStorage<8, 16, ::std::map<::OptionID, float>>                 mCustomizableFloatOptions;
    ::ll::TypedStorage<8, 16, ::std::set<uint>>                              mPreviouslyActiveControlOptions;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>                                mOnNewDeathScreenDirtyFlag;
    ::ll::TypedStorage<1, 1, bool>                                           mIsNewDeathScreenEnabled;
    ::ll::TypedStorage<1, 1, bool>                                           mProfanityFilterChanged;
    ::ll::TypedStorage<1, 1, bool>                                           mShouldUseFilteredMessage;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mProfanityToggleSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mOnRouteChangedSubscription;
    ::ll::TypedStorage<1, 1, bool>                                           mShouldShowLocatorBarPrev;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mSubtitlePositionSubscription;
    ::ll::TypedStorage<1, 1, bool>                                           mSubtitlePositionChanged;
    // NOLINTEND

public:
    // prevent constructor by default
    HudScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual bool bind(
        ::std::string const& collectionName,
        uint                 collectionNameHash,
        int                  collectionIndex,
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    ) /*override*/;

    virtual bool bind(
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    ) /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual void onInit() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onScreenPushedAbove() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual bool _isStillValid() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit HudScreenController(::std::shared_ptr<::ClientInstanceScreenModel> model);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ROOT_CONTROL_NAME();

    MCAPI static char const*& ROOT_CONTROL_NAME_INCLUDING_NAMESPACE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
