#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/JoystickState.h"
#include "mc/deps/input/TouchControl.h"
#include "mc/deps/input/TouchMoveAndTurnControlState.h"

// auto generated forward declare list
// clang-format off
class InputEventQueue;
class InputRenderContext;
class RectangleArea;
class TouchPointResults;
// clang-format on

class TouchMoveAndTurnInteractControl : public ::TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mCondition;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mIsLeftHanded;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mJoystickAlwaysVisible;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mAltJoystickAlwaysVisible;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mAltStickEnabled;
    ::ll::TypedStorage<8, 64, ::std::function<float()>>                          mThumbstickOpacity;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mStaticJoystick;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mStaticAltJoystick;
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>>                mDefaultMoveStickArea;
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>>                mDefaultAltStickArea;
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>>                mHotbarArea;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mJoystickVisibleWhenUnused;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mAltJoystickVisibleWhenUnused;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mShowActionButton;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mSprintOnMovement;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mIsInputSprinting;
    ::ll::TypedStorage<8, 64, ::std::function<float()>>                          mClientActivePointer;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mIsInControlEditMode;
    ::ll::TypedStorage<8, 64, ::std::function<::std::vector<::RectangleArea>()>> mGetInactiveAreasCallback;
    ::ll::TypedStorage<4, 4, uint const>                                         mTurnInteractButtonId;
    ::ll::TypedStorage<4, 4, uint const>                                         mTapButtonId;
    ::ll::TypedStorage<4, 4, uint const>                                         mHoldButtonId;
    ::ll::TypedStorage<4, 4, uint const>                                         mSprintButtonId;
    ::ll::TypedStorage<8, 152, ::TouchMoveAndTurnControlState>                   mState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchMoveAndTurnInteractControl() /*override*/ = default;

    virtual void
    tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor) /*override*/;

    virtual void render(::InputRenderContext& context) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _isClientCurrentActivePointer(int processedPointerId) const;

    MCAPI void _renderJoystick(
        ::InputRenderContext&  context,
        ::JoystickState        state,
        bool                   initialized,
        float                  x,
        float                  y,
        float                  x0,
        float                  y0,
        ::RectangleArea const& moveArea,
        ::RectangleArea const& defaultArea,
        float                  radius,
        bool                   staticJoystick,
        bool                   joystickVisibleWhenUnused,
        bool                   joystickAlwaysVisible
    ) const;

    MCAPI void _setPreviousActionPointer(int processedPointerId);

    MCAPI void calibrateMoveDelta(float& dx, float& dy);

    MCAPI void drawJoystick(
        ::InputRenderContext& context,
        ::JoystickState       joystickState,
        float                 x,
        float                 y,
        float                 x0,
        float                 y0,
        float                 joystickRadius
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor);

    MCAPI void $render(::InputRenderContext& context) const;
    // NOLINTEND
};
