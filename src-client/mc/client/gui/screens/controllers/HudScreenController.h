#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/ControlOptionType.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/TitleMessage.h"
#include "mc/client/gui/oreui/routing/RouterAction.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/input/vanilla/remapping/ActionEnum.h"
#include "mc/deps/core/timing/Stopwatch.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/world/ContainerID.h"
#include "mc/world/actor/ai/util/BossBarColor.h"
#include "mc/world/actor/ai/util/BossEventUpdateType.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BossEventPacket;
class ClientInstanceScreenModel;
class GamePadRemappingLayout;
class GameTipScreenController;
class HudContainerManagerController;
class Keymapping;
class RemappingLayout;
class ScoreboardScreenController;
struct ActorUniqueID;
struct UIPropertyBag;
namespace Bedrock::Safety { class RedactableString; }
namespace Json { class Value; }
namespace OreUI { struct RouterLocation; }
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
    enum class Tooltips : uchar {};

    struct ButtonLists {};

    struct Tooltip {
    public:
        // Tooltip inner types define
        enum class Type : uchar {};
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mOnBossEventWithPacketSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mOnBossEventSubscription;
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
    // NOLINTEND

public:
    // prevent constructor by default
    HudScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudScreenController() /*override*/;

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

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification) /*override*/;

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

    MCAPI void _bindActionIconForGamepad(
        ::Remapping::ActionEnum action,
        ::std::string const&    bindingNameOverride,
        ::UIPropertyBag&        bag
    ) const;

    MCAPI void _bindInventoryPromptsFlyout(
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    ) const;

    MCAPI bool _bindKeyboardTooltip(
        ::HudScreenController::Tooltip const& tip,
        uint                                  bindingNameHash,
        ::std::string const&                  bindingNameOverride,
        ::UIPropertyBag&                      bag
    ) const;

    MCAPI void
    _bindMenuPromptsFlyout(uint bindingNameHash, ::std::string const& bindingNameOverride, ::UIPropertyBag& bag) const;

    MCAPI void _bindTooltipCollection(
        ::std::vector<::HudScreenController::Tooltip> const& tooltips,
        int                                                  collectionIndex,
        uint                                                 bindingNameHash,
        ::std::string const&                                 bindingNameOverride,
        ::UIPropertyBag&                                     bag,
        ::HudScreenController::Tooltips                      tooltipType
    ) const;

    MCAPI void
    _bindTooltipFlyout(uint bindingNameHash, ::std::string const& bindingNameOverride, ::UIPropertyBag& bag) const;

    MCAPI void _checkEduDiscoveryReachable();

    MCAPI void _fireInitialControlTipsActivationEvent() const;

    MCAPI ::std::string _formatButtonList(::std::vector<::std::string> buttonList) const;

    MCAPI ::mce::Color _getBossColorValue(::BossBarColor barColor) const;

    MCAPI ::std::string _getContextAttackButton() const;

    MCAPI ::std::string _getContextChat() const;

    MCAPI ::std::string _getContextCodeBuilder() const;

    MCAPI ::std::string _getContextCraftingButton() const;

    MCAPI ::std::string _getContextDescendButton() const;

    MCAPI ::std::string _getContextDismountButton() const;

    MCAPI ::std::string _getContextDropItemButton() const;

    MCAPI ::std::string _getContextEmoteButton() const;

    MCAPI ::std::string _getContextImmersiveReader() const;

    MCAPI ::std::string _getContextInventoryButton() const;

    MCAPI ::std::string _getContextJumpButton() const;

    MCAPI ::std::string _getContextToggleFlight() const;

    MCAPI ::std::string _getContextUseButton() const;

    MCAPI void _getCustomizableOptionValues();

    MCAPI ::ui::DirtyFlag _getDirtyFlag(::ui::DirtyFlag returnValue);

    MCAPI ::std::string _getEmoteName(int slot);

    MCAPI void _getFloatCustomizableOptionValue(::OptionID optionID);

    MCAPI ::GamePadRemappingLayout const& _getGamepadLayout() const;

    MCAPI ::Keymapping const& _getGamepadMapping(::Remapping::ActionEnum action) const;

    MCAPI float _getHudAlpha();

    MCAPI ::Keymapping const& _getKeyboardMapping(::Remapping::ActionEnum action) const;

    MCAPI ::Keymapping const& _getMapping(::Remapping::ActionEnum action, ::RemappingLayout const& layout) const;

    MCAPI void _handleChatMessages();

    MCAPI void _handleClearTitle();

    MCAPI void _handleNewActionBarMessage();

    MCAPI void _handleNewPopupItemText();

    MCAPI void _handleNewTipText();

    MCAPI void _handleSlotSelection(int slot, ::ContainerID containerId);

    MCAPI bool _isHudHidden() const;

    MCAPI bool
    _isToolTipsHidden(::HudScreenController::Tooltips tooltipType, ::HudScreenController::Tooltip const* tip) const;

    MCAPI bool _isTouchActive() const;

    MCAPI void _leaveControlCustomizationScreen();

    MCAPI void _onBossEvent(::BossEventUpdateType type, ::ActorUniqueID const& id, ::BossEventPacket const& packet);

    MCAPI void _pushExistingChatMessages();

    MCAPI void _pushNewChatMessage(::std::string const& message, float time);

    MCAPI void _refreshChatMessages();

    MCAPI void _registerEventHandlers();

    MCAPI void _registerSubControllers();

    MCAPI void _registerTooltips();

    MCAPI bool _shouldShowControlTips() const;

    MCAPI bool _shouldShowLocatorBar() const;

    MCAPI bool _shouldShowTags() const;

    MCAPI bool _showClassicUI() const;

    MCAPI bool _showPaperDoll() const;

    MCAPI bool _showPocketUI() const;

    MCAPI bool _showSurvivalUI() const;

    MCAPI void _updateTitleText();

    MCAPI void
    addBossUI(::ActorUniqueID const& id, ::Bedrock::Safety::RedactableString name, float percent, ::BossBarColor color);

    MCAPI void displayOpenEmoteInstructions(::HudScreenController::ButtonLists const& buttonLists) const;

    MCAPI ::HudScreenController::ButtonLists const getButtonLists() const;

    MCAPI ::std::string const getFormattedOpenChatMessage(::std::vector<::std::string> const& buttonList) const;

    MCAPI ::std::string const getFormattedOpenEmoteMessage(::std::vector<::std::string> const& buttonList) const;

    MCAPI ::HudScreenController::ButtonLists const getGamepadEmoteButtonLists() const;

    MCAPI ::HudScreenController::ButtonLists const getKeyboardEmoteButtonLists() const;

    MCAPI void onRouteChanged(
        ::std::optional<::OreUI::RouterLocation> const& previousLocation,
        ::std::optional<::OreUI::RouterLocation> const& currentLocation,
        ::OreUI::RouterAction
    );

    MCAPI void setupControlCustomizationCallbacksForOptions(::ControlOptionType controlOptionType);

    MCAPI bool shouldChatAndEmoteInfoBeDisplayed() const;
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI bool $bind(
        ::std::string const& collectionName,
        uint                 collectionNameHash,
        int                  collectionIndex,
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    MCAPI bool $bind(
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    MCAPI void $onInit();

    MCAPI void $onOpen();

    MCAPI void $onScreenPushedAbove();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCFOLD ::ui::SceneType $getSceneType() const;

    MCAPI bool $_isStillValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
