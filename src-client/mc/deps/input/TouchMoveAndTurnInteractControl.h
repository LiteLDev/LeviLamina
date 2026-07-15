#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
