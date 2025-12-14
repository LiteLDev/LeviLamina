#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/input/TouchControl.h"
#include "mc/deps/input/enums/ButtonState.h"

// auto generated forward declare list
// clang-format off
class InputEventQueue;
class InputRenderContext;
class RectangleArea;
class TouchPointResults;
struct ButtonColors;
// clang-format on

class TouchTapOrHoldGlyphButtonControl : public ::TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool()>> mCondition;
    ::ll::TypedStorage<4, 4, uint>                     mTapButtonId;
    ::ll::TypedStorage<4, 4, uint>                     mHoldButtonId;
    ::ll::TypedStorage<1, 1, ::ButtonState>            mButtonState;
    ::ll::TypedStorage<4, 16, ::mce::Color>            mPressedColor;
    ::ll::TypedStorage<4, 16, ::mce::Color>            mReleasedColor;
    ::ll::TypedStorage<4, 4, int>                      mUx;
    ::ll::TypedStorage<4, 4, int>                      mUv;
    ::ll::TypedStorage<4, 4, int>                      mUvWidth;
    ::ll::TypedStorage<4, 4, int>                      mUvHeight;
    ::ll::TypedStorage<4, 4, int>                      mActivePointerId;
    ::ll::TypedStorage<8, 8, double>                   mStartTime;
    ::ll::TypedStorage<1, 1, bool>                     mIsHolding;
    ::ll::TypedStorage<4, 4, float>                    mGlyphScale;
    ::ll::TypedStorage<8, 32, ::std::string>           mIconPath;
    ::ll::TypedStorage<8, 32, ::std::string>           mPressedIconPath;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchTapOrHoldGlyphButtonControl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchTapOrHoldGlyphButtonControl() /*override*/;

    virtual void render(::InputRenderContext& context) const /*override*/;

    virtual void
    tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor) /*override*/;

    virtual void release(::InputEventQueue& eventQueue) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TouchTapOrHoldGlyphButtonControl(
        ::std::function<::RectangleArea()> area,
        ::std::function<bool()>            condition,
        uint                               tapButtonId,
        uint                               holdButtonId,
        ::std::string const&               iconPath,
        ::std::string const&               pressedIconPath,
        ::ButtonColors const&              buttonColors,
        int                                uvWidth,
        int                                uvHeight,
        float                              glyphScale
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::RectangleArea()> area,
        ::std::function<bool()>            condition,
        uint                               tapButtonId,
        uint                               holdButtonId,
        ::std::string const&               iconPath,
        ::std::string const&               pressedIconPath,
        ::ButtonColors const&              buttonColors,
        int                                uvWidth,
        int                                uvHeight,
        float                              glyphScale
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
    MCAPI void $render(::InputRenderContext& context) const;

    MCAPI void $tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor);

    MCAPI void $release(::InputEventQueue& eventQueue);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
