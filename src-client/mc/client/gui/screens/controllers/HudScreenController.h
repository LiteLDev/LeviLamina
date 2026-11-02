#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/ControlOptionType.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/SoundDirection.h"
#include "mc/client/gui/TitleMessage.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/input/vanilla/remapping/ActionEnum.h"
#include "mc/deps/core/timing/Stopwatch.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/world/ContainerID.h"
#include "mc/world/actor/ai/util/BossBarColor.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class ClientInstanceScreenModel;
class GameTipScreenController;
class HudContainerManagerController;
class ScoreboardScreenController;
class UIPropertyBag;
namespace Json { class Value; }
namespace mce { class Color; }
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
    ::ll::TypedStorage<1, 1, bool>                                                mEduDiscoveryObserved;
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
    MCNAPI explicit HudScreenController(::std::shared_ptr<::ClientInstanceScreenModel> model);

    MCNAPI void _bindActionIconForGamepad(
        ::Remapping::ActionEnum action,
        ::std::string const&    bindingNameOverride,
        ::UIPropertyBag&        bag
    ) const;

    MCNAPI void _bindInventoryPromptsFlyout(
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    ) const;

    MCNAPI bool _bindKeyboardTooltip(
        ::HudScreenController::Tooltip const& tip,
        uint                                  bindingNameHash,
        ::std::string const&                  bindingNameOverride,
        ::UIPropertyBag&                      bag
    ) const;

    MCNAPI void
    _bindMenuPromptsFlyout(uint bindingNameHash, ::std::string const& bindingNameOverride, ::UIPropertyBag& bag) const;

    MCNAPI void _bindTooltipCollection(
        ::std::vector<::HudScreenController::Tooltip> const& tooltips,
        int                                                  collectionIndex,
        uint                                                 bindingNameHash,
        ::std::string const&                                 bindingNameOverride,
        ::UIPropertyBag&                                     bag,
        ::HudScreenController::Tooltips                      tooltipType
    ) const;

    MCNAPI void
    _bindTooltipFlyout(uint bindingNameHash, ::std::string const& bindingNameOverride, ::UIPropertyBag& bag) const;

    MCNAPI void _fireInitialControlTipsActivationEvent() const;

    MCNAPI ::std::string _formatButtonList(::std::vector<::std::string> buttonList) const;

    MCNAPI ::mce::Color _getBossColorValue(::BossBarColor barColor) const;

    MCNAPI ::std::string _getContextAttackButton() const;

    MCNAPI ::std::string _getContextChat() const;

    MCNAPI ::std::string _getContextCodeBuilder() const;

    MCNAPI ::std::string _getContextCraftingButton() const;

    MCNAPI ::std::string _getContextDescendButton() const;

    MCNAPI ::std::string _getContextDismountButton() const;

    MCNAPI ::std::string _getContextDropItemButton() const;

    MCNAPI ::std::string _getContextEmoteButton() const;

    MCNAPI ::std::string _getContextImmersiveReader() const;

    MCNAPI ::std::string _getContextInventoryButton() const;

    MCNAPI ::std::string _getContextJumpButton() const;

    MCNAPI ::std::string _getContextToggleFlight() const;

    MCNAPI ::std::string _getContextUseButton() const;

    MCNAPI ::std::string _getEmoteName(int slot);

    MCNAPI void _getFloatCustomizableOptionValue(::OptionID optionID);

    MCNAPI float _getHudAlpha();

    MCNAPI void _handleNewActionBarMessage();

    MCNAPI void _handleSlotSelection(int slot, ::ContainerID containerId);

    MCNAPI bool _isAutoSaveIconVisible();

    MCNAPI bool
    _isToolTipsHidden(::HudScreenController::Tooltips tooltipType, ::HudScreenController::Tooltip const* tip) const;

    MCNAPI bool _isTouchActive() const;

    MCNAPI void _leaveControlCustomizationScreen();

    MCNAPI void _pushNewChatMessage(::std::string const& message, float time);

    MCNAPI void _pushNewSubtitleMessage(
        ::std::string const& message,
        float                timeSec,
        ::SoundDirection     direction,
        bool                 isLocalPlayer
    );

    MCNAPI void _recreateSubtitleContainer();

    MCNAPI void _refreshSubtitleMessages();

    MCNAPI bool _shouldShowLocatorBar() const;

    MCNAPI bool _shouldShowTags() const;

    MCNAPI bool _showClassicUI() const;

    MCNAPI bool _showPaperDoll() const;

    MCNAPI bool _showPocketUI() const;

    MCNAPI bool _showSurvivalUI() const;

    MCNAPI void displayOpenEmoteInstructions(::HudScreenController::ButtonLists const& buttonLists) const;

    MCNAPI ::HudScreenController::ButtonLists const getButtonLists() const;

    MCNAPI ::std::string const getFormattedOpenChatMessage(::std::vector<::std::string> const& buttonList) const;

    MCNAPI ::std::string const getFormattedOpenEmoteMessage(::std::vector<::std::string> const& buttonList) const;

    MCNAPI ::HudScreenController::ButtonLists const getGamepadEmoteButtonLists() const;

    MCNAPI ::HudScreenController::ButtonLists const getKeyboardEmoteButtonLists() const;

    MCNAPI void setupControlCustomizationCallbacksForOptions(::ControlOptionType controlOptionType);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _shouldShowDefaultUseTooltip(::Block const& block);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ROOT_CONTROL_NAME();

    MCNAPI static char const*& ROOT_CONTROL_NAME_INCLUDING_NAMESPACE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI bool $bind(
        ::std::string const& collectionName,
        uint                 collectionNameHash,
        int                  collectionIndex,
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    MCNAPI bool $bind(
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification notification);

    MCNAPI void $onInit();

    MCNAPI void $onOpen();

    MCNAPI void $onScreenPushedAbove();

    MCNAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI bool $_isStillValid() const;
    // NOLINTEND
};
