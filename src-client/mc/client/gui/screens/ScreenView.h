#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/CardinalDirection.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/GamepadCursorData.h"
#include "mc/client/gui/screens/ScreenEvent.h"
#include "mc/client/gui/screens/TextEditFocusedListener.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/FocusImpact.h"

// auto generated forward declare list
// clang-format off
class FocusManager;
class ITTSEventManager;
class KeyboardManager;
class LayoutManager;
class RectangleArea;
class ScreenController;
class ScreenLoadTimeTracker;
class ScreenRenderBatch;
class ScreenSettings;
class ScreenViewProxy;
class UIAnimationController;
class UIControl;
class UIControlFactory;
class UIMeasureStrategy;
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
    MCAPI ::ScreenSettings const* _getScreenComponent() const;

    MCAPI void _passViewCommand();

    MCAPI void _selectControl(::UIControl& control, bool isHandlingTextChar);

    MCAPI void _setupControlFactoryCallbacks();

    MCAPI bool isGamepadDeflectionModeEnabled() const;

    MCAPI void setInitialized();

    MCAPI ~ScreenView();
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
