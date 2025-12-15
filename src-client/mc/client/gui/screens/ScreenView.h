#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/CardinalDirection.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/controls/TextCharEventResult.h"
#include "mc/client/gui/screens/ControlCollectionChange.h"
#include "mc/client/gui/screens/ControlCollectionFlag.h"
#include "mc/client/gui/screens/GamepadCursorData.h"
#include "mc/client/gui/screens/TextEditFocusedListener.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/TextboxTextUpdateReason.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/enums/FocusImpact.h"

// auto generated forward declare list
// clang-format off
class KeyboardManager;
class RectangleArea;
class ScreenController;
class ScreenViewProxy;
class UIMeasureStrategy;
class UIPropertyBag;
struct AbstractScene;
struct DataBindingComponent;
struct FocusComponent;
struct FocusManager;
struct ITTSEventManager;
struct LayoutManager;
struct ScreenEvent;
struct ScreenInputContext;
struct ScreenLoadTimeTracker;
struct ScreenRenderBatch;
struct ScreenSettings;
struct SliderComponent;
struct TextEditComponent;
struct TouchPadTouchEventData;
struct UIAnimationController;
struct UIControl;
struct UIControlFactory;
struct UIRenderContext;
struct VisualTree;
namespace Json { class Value; }
// clang-format on

class ScreenView {
public:
    // ScreenView inner types declare
    // clang-format off
    struct DelayedCommand;
    struct TouchPadData;
    // clang-format on

    // ScreenView inner types define
    enum class DelayedCommandLocation : int {
        DirtyVisualTree = 0,
        PostLayout      = 1,
    };

    struct DelayedCommand {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk37ec57;
        ::ll::UntypedStorage<4, 4>  mUnk5da917;
        // NOLINTEND

    public:
        // prevent constructor by default
        DelayedCommand& operator=(DelayedCommand const&);
        DelayedCommand(DelayedCommand const&);
        DelayedCommand();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~DelayedCommand();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct TouchPadData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkf8837f;
        ::ll::UntypedStorage<4, 8> mUnkeb6c41;
        ::ll::UntypedStorage<4, 8> mUnk5de813;
        // NOLINTEND

    public:
        // prevent constructor by default
        TouchPadData& operator=(TouchPadData const&);
        TouchPadData(TouchPadData const&);
        TouchPadData();
    };

    using clock_type = ::std::chrono::steady_clock;

    using duration_sec = ::std::chrono::duration<float, ::std::ratio<1, 1>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                          mLastTime;
    ::ll::TypedStorage<4, 4, float>                                          mTickTime;
    ::ll::TypedStorage<8, 8, double>                                         mLastRawJoystickEventTime;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                    mSize;
    ::ll::TypedStorage<4, 4, int>                                            mMenuUpButtonId;
    ::ll::TypedStorage<4, 4, int>                                            mMenuDownButtonId;
    ::ll::TypedStorage<4, 4, int>                                            mMenuLeftButtonId;
    ::ll::TypedStorage<4, 4, int>                                            mMenuRightButtonId;
    ::ll::TypedStorage<4, 4, int>                                            mMenuTabLeftButtonId;
    ::ll::TypedStorage<4, 4, int>                                            mMenuTabRightButtonId;
    ::ll::TypedStorage<4, 8, ::std::array<uint, 2>>                          mPointerButtonIds;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ScreenController>>         mController;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VisualTree>>                mVisualTree;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mAlwaysBindControls;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mInputControls;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mScrollViewControls;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mOutOfModalScopeScrollViewControls;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mAnimationControls;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mFactoryControls;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mTextEditBoxControls;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mAlwaysListeningInputControls;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mRenderableControls;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mFlyingItemRendererControls;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mSliderControls;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mCustomRendererControls;
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<::std::vector<::std::shared_ptr<::UIControl>>*, ::std::vector<::std::shared_ptr<::UIControl>>>>
                                                                         mControlsToRemove;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScreenRenderBatch>>     mRootRenderBatch;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::UIAnimationController>> mAnimationController;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::std::vector<::std::weak_ptr<::UIControl>>>>
                                                                                        mReservedButtonUpEvents;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                             mSelectedControl;
    ::ll::TypedStorage<4, 4, ::InputMode>                                               mInputMode;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LayoutManager>>                        mLayoutManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FocusManager>>                         mFocusManager;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ITTSEventManager>>                      mTTSEventManager;
    ::ll::TypedStorage<1, 1, bool>                                                      mTextToSpeechEnabled;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mTTSSectionHeader;
    ::ll::TypedStorage<4, 4, float>                                                     mCurrentSliderValue;
    ::ll::TypedStorage<1, 1, bool>                                                      mIsGUIScaleSlider;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::ui::CardinalDirection>>       mControllerStickDirections;
    ::ll::TypedStorage<4, 4, int>                                                       mControllerLastMoved;
    ::ll::TypedStorage<4, 4, int>                                                       mCursorTick;
    ::ll::TypedStorage<4, 4, float const>                                               mControllerXThreshold;
    ::ll::TypedStorage<4, 4, float const>                                               mControllerYThreshold;
    ::ll::TypedStorage<4, 64, ::glm::vec2[8]>                                           mControllerStickValues;
    ::ll::TypedStorage<4, 8, ::GamepadCursorData>                                       mGamepadCursorData;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                               mGamepadCursorPosition;
    ::ll::TypedStorage<1, 1, bool>                                                      mHasSetInitialPosition;
    ::ll::TypedStorage<1, 1, bool>                                                      mGamepadCursorFocusModeEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                      mGamepadCursorMagnetEnabled;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                             mGamepadMagnetControl;
    ::ll::TypedStorage<4, 4, float>                                                     mGamepadMoveTime;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                               mGamepadTrackedDirection;
    ::ll::TypedStorage<1, 1, bool>                                                      mGamepadHasTapped;
    ::ll::TypedStorage<4, 20, ::ScreenView::TouchPadData>                               mTouchPadData;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                               mPointerLocationPrevious;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                   mLastPointInTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                   mCurrentTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                                mTimeAccumulator;
    ::ll::TypedStorage<4, 4, ::std::chrono::duration<float, ::std::ratio<1, 1>> const>  mFixedAnimationUpdateRate;
    ::ll::TypedStorage<4, 4, float>                                                     mKeyboardHeight;
    ::ll::TypedStorage<1, 1, bool>                                                      mShouldShowKeyboard;
    ::ll::TypedStorage<1, 1, bool>                                                      mInitKeyboard;
    ::ll::TypedStorage<4, 4, float>                                                     mCurrentObfuscateTime;
    ::ll::TypedStorage<8, 8, ::KeyboardManager&>                                        mKeyboardManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::RectangleArea>>                           mInputAreas;
    ::ll::TypedStorage<8, 8, ::UIMeasureStrategy&>                                      mMeasureStrategy;
    ::ll::TypedStorage<1, 1, bool>                                                      mCanMoveFocus;
    ::ll::TypedStorage<1, 1, ::FocusImpact>                                             mNextFocusAction;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIControlFactory>>                    mControlFactory;
    ::ll::TypedStorage<8, 40, ::std::queue<::ScreenEvent, ::std::deque<::ScreenEvent>>> mAnimationEvents;
    ::ll::TypedStorage<8, 40, ::std::queue<::ScreenEvent, ::std::deque<::ScreenEvent>>> mCustomRendererEvents;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                               mStartLocation;
    ::ll::TypedStorage<4, 4, float>                                                     mTimeUntilNextPointerHeldEvent;
    ::ll::TypedStorage<4, 4, float>                                                mDelayBetweenEachPointerHeldEvent;
    ::ll::TypedStorage<1, 1, bool>                                                 mShouldSendPointerHeldEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScreenView::DelayedCommand>>         mDelayedCommands;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScreenViewProxy>>                 mProxy;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsExiting;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsEntering;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsInitialized;
    ::ll::TypedStorage<1, 1, bool>                                                 mHasFocus;
    ::ll::TypedStorage<1, 1, bool>                                                 mHasHadFocus;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsTerminating;
    ::ll::TypedStorage<1, 1, bool>                                                 mDirectionalButtonWasPressed;
    ::ll::TypedStorage<1, 1, bool>                                                 mDelayedFocusRefresh;
    ::ll::TypedStorage<1, 1, ::TextEditFocusedListener>                            mTextEditFocusedListener;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ScreenLoadTimeTracker>> mScreenLoadTimeTracker;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                     mFocusChangeSub;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenView& operator=(ScreenView const&);
    ScreenView(ScreenView const&);
    ScreenView();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScreenView(
        ::KeyboardManager&                    keyboardManager,
        ::std::shared_ptr<::ScreenController> controller,
        ::std::unique_ptr<::VisualTree>       visualTree,
        ::std::shared_ptr<::UIControlFactory> controlFactory,
        ::UIMeasureStrategy&                  measureStrategy,
        ::std::unique_ptr<::LayoutManager>    layoutManager,
        ::GamepadCursorData                   gamepadCursorData,
        ::std::weak_ptr<::ITTSEventManager>   ttsEventManager
    );

    MCAPI void _addToControlCollection(::UIControl& control, ::ControlCollectionFlag flag);

    MCAPI void _adjustFocusedControlToScrollRegion(bool isRightStickScrolling);

    MCAPI void _adjustScrollToControl(::UIControl& control);

    MCAPI void
    _adjustScrollToFocusedControl(::UIControl& focusedControl, bool selectNearestControl, bool isRightStickScrolling);

    MCAPI void _adjustScrollToIncludePosition(
        ::UIControl& parent,
        ::glm::vec2  position,
        ::glm::vec2  size,
        bool         isRightStickScrolling
    );

    MCAPI void _adjustScrollToTopPosition();

    MCAPI void _advanceToNextToggleInNavigationTabGroup(bool right);

    MCAPI void _bindData(bool doAllBinds);

    MCAPI void
    _changeInputControlCollection(::UIControl& control, ::ControlCollectionChange change, bool isRemoveCallback);

    MCAPI void _clearTTSQueue();

    MCAPI void _consumeFocusImpact(::FocusImpact focusImpact);

    MCAPI void _debugRenderControl(::UIRenderContext& context, ::UIControl const& control) const;

    MCAPI void _debugRenderFocusControl(
        ::UIRenderContext&                 context,
        ::UIControl const&                 control,
        ::std::vector<::UIControl const*>& visited
    ) const;

    MCAPI void _deselectControl(bool forceDeselect, bool hoverAfterDeselect);

    MCAPI void _executeDelayedCommands(::ScreenView::DelayedCommandLocation location);

    MCAPI void _findAndSetFocusOnFocusableControlNotClippedVertical(
        ::std::shared_ptr<::UIControl> rootControl,
        bool                           searchUpwards,
        bool                           isRightScrolling
    );

    MCAPI void _fireSelectedStateChangeEvent(::TextEditComponent const& textEditComponent, bool state);

    MCAPI void _fireTextChangedEvent(
        bool                  finished,
        ::TextCharEventResult result,
        uint                  id,
        int                   index,
        ::UIPropertyBag*      propertyBag
    );

    MCAPI void _fireTextChangedEventTextEditControl(
        ::TextEditComponent const& textEditComponent,
        bool                       finished,
        ::TextCharEventResult      result
    );

    MCAPI void _focusChangeCallback(
        ::std::weak_ptr<::UIControl> previousFocusControl,
        ::std::weak_ptr<::UIControl> currentFocusControl
    );

    MCAPI void _focusControl(::UIControl& control);

    MCAPI void _forwardEventToAnimationControls(::ScreenEvent const& screenEvent);

    MCAPI ::std::shared_ptr<::UIControl> _getGamepadCursorFocusedControl() const;

    MCAPI ::ScreenSettings const* _getScreenComponent() const;

    MCAPI void _handleDirtyVisualTree(bool overrideFocusControl, bool doAllBinds);

    MCAPI void _handlePointerLocation(
        ::glm::vec2 const& position,
        ::FocusImpact      focusImpact,
        bool               forceHandleWhenMotionless,
        bool               isRightStickScrolling
    );

    MCAPI bool _handleScreenViewRefresh();

    MCAPI void _handleSliderMovement();

    MCAPI void _handleStickScrolling(::DirectionId directionId);

    MCAPI void
    _handleTTSOnSliderMovement(::SliderComponent* sliderComponent, ::std::shared_ptr<::UIControl>& focusedControl);

    MCAPI bool _hasAnimationWithPlayAndEndEventId(uint playEventId, uint endEventId) const;

    MCAPI bool _hasVisibleAnimationWithEndEventId(uint id) const;

    MCAPI bool _isFocusable(::FocusComponent const& focus) const;

    MCAPI bool _isTouchTTSEnabled() const;

    MCAPI bool _notifyLayoutChange();

    MCAPI void _passViewCommand();

    MCAPI void _prepResevedButtonUpLists(::ScreenInputContext& context);

    MCAPI void _processControllerCursorMove(::DirectionId directionId);

    MCAPI void _processControllerDirection(::DirectionId directionId);

    MCAPI void _processControllerFocusChange(::DirectionId directionId);

    MCAPI void _processEvents(::ScreenInputContext& context);

    MCAPI void _queueTextToSpeechIfEnabled(
        ::std::shared_ptr<::UIControl> focusedControl,
        bool                           excludeControlHeader,
        bool                           notInterruptible
    );

    MCAPI void _queueTextToSpeechTextboxCharacter(::std::string const& inputStr);

    MCAPI void _removeFromControlCollection(::UIControl& control, ::ControlCollectionFlag flag);

    MCAPI void _renderBatches(::UIRenderContext& context, ::ScreenRenderBatch& screenRenderBatch, float deltaTime);

    MCAPI void _resetFocusedControl();

    MCAPI void _scrollToGridItem(::UIControl* gridControl, int itemIndex, int numItems);

    MCAPI void _selectControl(::UIControl& control, bool isHandlingTextChar);

    MCAPI void _selectNextFocusObject(
        ::ui::CardinalDirection direction,
        bool                    overrideOrigin,
        ::glm::vec2             overridePos,
        bool                    isRightStickScrolling
    );

    MCAPI void _sendScrollEvent(::UIControl& parent, float delta) const;

    MCAPI void _setGamepadCursorFocusMode(bool focusModeEnabled);

    MCAPI void _setKeyboardHeight(float height);

    MCAPI void _setupControlFactoryCallbacks();

    MCAPI void _switchTabToTargetIndex(::std::vector<::std::shared_ptr<::UIControl>>& tabControls, int targetIndex);

    MCAPI void _update();

    MCAPI bool _updateControlCollections(bool overrideFocusControl);

    MCAPI void
    _updateFocusControl(bool forceUpdate, bool forceFocusToAdjust, bool isRightStickScrolling, bool isHandlingTextChar);

    MCAPI void _updateInputAreas();

    MCAPI void _updateKeyboardVisibility();

    MCAPI bool _updateSelectedControl(::ScreenInputContext& context, uint buttonId, ::ButtonState buttonState);

    MCAPI void cleanInputComponents();

    MCAPI ::std::string getRoute() const;

    MCAPI ::std::string getScreenName() const;

    MCAPI ::std::string getScreenTelemetryName() const;

    MCAPI void handleButtonEvent(uint buttonId, ::ButtonState buttonState, ::FocusImpact focusImpact);

    MCAPI void handleControlEvent(::ScreenEvent screenEvent);

    MCAPI void handleDirection(::DirectionId directionId, float x, float y, ::FocusImpact focusImpact);

    MCAPI void handleInputModeChanged(::InputMode inputMode);

    MCAPI bool
    handlePointerLocation(::glm::vec2 const& position, bool forceMotionlessPointer, ::FocusImpact focusImpact);

    MCAPI void handleTextChar(::std::string const& inputUtf8, bool keepImePosition, ::FocusImpact focusImpact);

    MCAPI void handleTouchPadTouch(::TouchPadTouchEventData const& touchEventData, ::FocusImpact focusImpact);

    MCAPI bool isGamepadDeflectionModeEnabled() const;

    MCAPI void onFocusGained();

    MCAPI void onGameEventNotification(::ui::GameEventNotification notification);

    MCAPI void onScreenEntrance(bool isRevisiting, bool doScreenTransitions);

    MCAPI void onScreenExit(bool isPopping, bool doScreenTransitions, ::std::shared_ptr<::AbstractScene> pushedScene);

    MCAPI void reload(::Json::Value const& globalVars);

    MCAPI void render(::UIRenderContext& uiRenderContext);

    MCAPI void resize();

    MCAPI void setInitialized();

    MCAPI void setScreenLoadTimeTracker(::Bedrock::NonOwnerPointer<::ScreenLoadTimeTracker> tracker);

    MCAPI void setTextboxText(::std::string const& text, ::TextboxTextUpdateReason reason);

    MCAPI ~ScreenView();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _shouldBindChildren(bool doAllBinds, ::UIControl& control, ::DataBindingComponent& dataBinding);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool& sIsDebuggingFocus();

    MCAPI static bool& sRenderDebugControls();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::KeyboardManager&                    keyboardManager,
        ::std::shared_ptr<::ScreenController> controller,
        ::std::unique_ptr<::VisualTree>       visualTree,
        ::std::shared_ptr<::UIControlFactory> controlFactory,
        ::UIMeasureStrategy&                  measureStrategy,
        ::std::unique_ptr<::LayoutManager>    layoutManager,
        ::GamepadCursorData                   gamepadCursorData,
        ::std::weak_ptr<::ITTSEventManager>   ttsEventManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
