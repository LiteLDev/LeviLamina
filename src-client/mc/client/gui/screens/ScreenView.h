#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/CardinalDirection.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/controls/TextCharEventResult.h"
#include "mc/client/gui/screens/ControlCollectionChange.h"
#include "mc/client/gui/screens/GamepadCursorData.h"
#include "mc/client/gui/screens/ScreenEvent.h"
#include "mc/client/gui/screens/TextEditFocusedListener.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/enums/FocusImpact.h"

// auto generated forward declare list
// clang-format off
class DataBindingComponent;
class FocusManager;
class ITTSEventManager;
class InputComponent;
class KeyboardManager;
class LayoutManager;
class RectangleArea;
class ScreenController;
class ScreenInputContext;
class ScreenLoadTimeTracker;
class ScreenRenderBatch;
class ScreenSettings;
class ScreenViewProxy;
class TextEditComponent;
class UIAnimationController;
class UIControl;
class UIControlFactory;
class UIMeasureStrategy;
class UIPropertyBag;
class UIRenderContext;
class VisualTree;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
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
        // DelayedCommand inner types define
        using Result = ::std::pair<::ui::DirtyFlag, bool>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::function<::std::pair<::ui::DirtyFlag, bool>()>> mAction;
        ::ll::TypedStorage<4, 4, ::ScreenView::DelayedCommandLocation>                   location;
        // NOLINTEND
    };

    struct TouchPadData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>         mTouchId;
        ::ll::TypedStorage<4, 8, ::glm::vec2> mPreviousPosition;
        ::ll::TypedStorage<4, 8, ::glm::vec2> mCurrentPosition;
        // NOLINTEND
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
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mCustomFrameUpdateControls;
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
    ::ll::TypedStorage<4, 72, ::glm::vec2[9]>                                           mControllerStickValues;
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
    ::ll::TypedStorage<4, 4, float>                                        mDelayBetweenEachPointerHeldEvent;
    ::ll::TypedStorage<1, 1, bool>                                         mShouldSendPointerHeldEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScreenView::DelayedCommand>> mDelayedCommands;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScreenViewProxy>>         mProxy;
    ::ll::TypedStorage<8, 40, ::std::queue<::std::string, ::std::deque<::std::string>>> mQueuedTextChange;
    ::ll::TypedStorage<1, 1, bool>                                                      mIsExiting;
    ::ll::TypedStorage<1, 1, bool>                                                      mIsEntering;
    ::ll::TypedStorage<1, 1, bool>                                                      mIsInitialized;
    ::ll::TypedStorage<1, 1, bool>                                                      mHasFocus;
    ::ll::TypedStorage<1, 1, bool>                                                      mHasHadFocus;
    ::ll::TypedStorage<1, 1, bool>                                                      mIsTerminating;
    ::ll::TypedStorage<1, 1, bool>                                                      mDirectionalButtonWasPressed;
    ::ll::TypedStorage<1, 1, bool>                                                      mDelayedFocusRefresh;
    ::ll::TypedStorage<1, 1, ::TextEditFocusedListener>                                 mTextEditFocusedListener;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ScreenLoadTimeTracker>>      mScreenLoadTimeTracker;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                          mFocusChangeSub;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenView& operator=(ScreenView const&);
    ScreenView(ScreenView const&);
    ScreenView();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _adjustScrollToControl(::UIControl& control);

    MCAPI void
    _adjustScrollToFocusedControl(::UIControl& focusedControl, bool selectNearestControl, bool isRightStickScrolling);

    MCAPI void _advanceToNextTab(bool right);

    MCAPI void _bindData(bool doAllBinds);

    MCAPI void
    _changeInputControlCollection(::UIControl& control, ::ControlCollectionChange change, bool const isRemoveCallback);

    MCAPI void _debugRenderControl(::UIRenderContext& context, ::UIControl const& control) const;

    MCAPI void _debugRenderFocusControl(
        ::UIRenderContext&                 context,
        ::UIControl const&                 control,
        ::std::vector<::UIControl const*>& visited
    ) const;

    MCAPI void _deselectControl(bool forceDeselect, bool hoverAfterDeselect);

    MCAPI void _executeDelayedCommands(::ScreenView::DelayedCommandLocation location);

    MCAPI void _fireSelectedStateChangeEvent(::TextEditComponent const& textEditComponent, bool state);

    MCAPI void _fireTextChangedEvent(
        bool                  finished,
        ::TextCharEventResult result,
        uint                  id,
        int                   index,
        ::UIPropertyBag*      propertyBag
    );

    MCAPI void _focusChangeCallback(
        ::std::weak_ptr<::UIControl> previousFocusControl,
        ::std::weak_ptr<::UIControl> currentFocusControl
    );

    MCAPI void _forwardEventToAnimationControls(::ScreenEvent const& screenEvent);

    MCAPI ::std::shared_ptr<::UIControl> _getGamepadCursorFocusedControl() const;

    MCAPI ::ScreenSettings const* _getScreenComponent() const;

    MCAPI void _handleDirtyVisualTree(bool overrideFocusControl, bool doAllBinds);

    MCAPI void _handleStickScrolling(::DirectionId directionId);

    MCAPI bool _isFocusEnabled(::std::shared_ptr<::UIControl> const& control) const;

    MCAPI bool _isFocusMagnetEnabled(::std::shared_ptr<::UIControl> const& control) const;

    MCAPI void _passViewCommand();

    MCAPI void _processControllerCursorMove(::DirectionId directionId);

    MCAPI void _processControllerDirection(::DirectionId directionId);

    MCAPI void _processEvents(::ScreenInputContext& context);

    MCAPI void _queueTextToSpeechIfEnabled(
        ::std::shared_ptr<::UIControl> focusedControl,
        bool                           excludeControlHeader,
        bool                           notInterruptible
    );

    MCAPI void _queueTextToSpeechTextboxCharacter(::std::string const& inputStr);

    MCAPI void _resetFocusedControl();

    MCAPI void
    _resetInputControl(::UIControl& control, ::InputComponent* const inputComponent, bool const handleModalChange);

    MCAPI void _scrollToGridItem(::UIControl* gridControl, int itemIndex, int numItems);

    MCAPI void _selectControl(::UIControl& control, bool isHandlingTextChar);

    MCAPI void _sendScrollEvent(::UIControl& parent, float delta) const;

    MCAPI void _setGamepadCursorFocusMode(bool focusModeEnabled);

    MCAPI void _setKeyboardHeight(float height);

    MCAPI void _setupControlFactoryCallbacks();

    MCAPI void _switchTabToTargetIndex(::std::vector<::std::shared_ptr<::UIControl>>& tabControls, int targetIndex);

    MCAPI bool _updateControlCollections(bool overrideFocusControl);

    MCAPI void
    _updateFocusControl(bool forceUpdate, bool forceFocusToAdjust, bool isRightStickScrolling, bool isHandlingTextChar);

    MCAPI void _updateInputAreas();

    MCAPI void _updateKeyboardVisibility();

    MCAPI void cleanInputComponents();

    MCAPI ::std::string getRoute() const;

    MCAPI ::std::string getScreenName() const;

    MCAPI void handleButtonEvent(uint buttonId, ::ButtonState buttonState, ::FocusImpact focusImpact);

    MCAPI bool isGamepadDeflectionModeEnabled() const;

    MCAPI void render(::UIRenderContext& uiRenderContext);

    MCAPI void resize();

    MCAPI void setInitialized();

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
    MCAPI static ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>&
    mDebugChangePublisher();

    MCAPI static bool& sIsDebuggingFocus();

    MCAPI static bool& sRenderDebugControls();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
