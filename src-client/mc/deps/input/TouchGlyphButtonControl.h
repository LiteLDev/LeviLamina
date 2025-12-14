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

class TouchGlyphButtonControl : public ::TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>  mCondition;
    ::ll::TypedStorage<8, 64, ::std::function<float()>> mOpacity;
    ::ll::TypedStorage<4, 4, uint>                      mButtonId;
    ::ll::TypedStorage<1, 1, ::ButtonState>             mButtonState;
    ::ll::TypedStorage<4, 16, ::mce::Color>             mPressedColor;
    ::ll::TypedStorage<4, 16, ::mce::Color>             mReleasedColor;
    ::ll::TypedStorage<4, 4, int>                       mUx;
    ::ll::TypedStorage<4, 4, int>                       mUv;
    ::ll::TypedStorage<4, 4, int>                       mUvWidth;
    ::ll::TypedStorage<4, 4, int>                       mUvHeight;
    ::ll::TypedStorage<4, 4, float>                     mInnerPaddingX;
    ::ll::TypedStorage<4, 4, float>                     mInnerPaddingY;
    ::ll::TypedStorage<4, 4, int>                       mActivePointerId;
    ::ll::TypedStorage<1, 1, bool>                      mPassThrough;
    ::ll::TypedStorage<1, 1, bool>                      mPromiscuous;
    ::ll::TypedStorage<4, 4, int>                       mTouchStateRequirement;
    ::ll::TypedStorage<8, 8, int64>                     mTimeSinceFirstPress;
    ::ll::TypedStorage<1, 1, bool>                      mWaitingForSecondPress;
    ::ll::TypedStorage<1, 1, bool>                      mExtendButtonPressOutsideAreaUntilReleased;
    ::ll::TypedStorage<8, 32, ::std::string>            mIconPath;
    ::ll::TypedStorage<8, 32, ::std::string>            mPressedIconPath;
    ::ll::TypedStorage<4, 4, float>                     mGlyphScale;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchGlyphButtonControl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchGlyphButtonControl() /*override*/;

    virtual uint getHoldButtonId() const /*override*/;

    virtual int getActivePointerId() const /*override*/;

    virtual bool releaseOnClear() const /*override*/;

    virtual void render(::InputRenderContext& context) const /*override*/;

    virtual void
    tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor) /*override*/;

    virtual void release(::InputEventQueue& eventQueue) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TouchGlyphButtonControl(
        ::std::function<::RectangleArea()> area,
        ::std::function<bool()>            condition,
        ::std::function<float()>           opacity,
        uint                               buttonId,
        ::ButtonColors const&              buttonColors,
        int                                ux,
        int                                uv,
        int                                uvWidth,
        int                                uvHeight,
        int                                activePointerId,
        bool                               passThrough,
        int                                touchStateRequirement,
        float                              glyphScale,
        bool                               promiscuous,
        bool                               extendButtonPressOutsideUntilReleased,
        float                              innerPaddingX,
        float                              innerPaddingY
    );

    MCAPI TouchGlyphButtonControl(
        ::std::function<::RectangleArea()> area,
        ::std::function<bool()>            condition,
        ::std::function<float()>           opacity,
        uint                               buttonId,
        ::std::string const&               iconPath,
        ::std::string const&               pressedIconPath,
        ::ButtonColors const&              buttonColors,
        int                                uvWidth,
        int                                uvHeight,
        int                                activePointerId,
        bool                               passThrough,
        int                                touchStateRequirement,
        float                              glyphScale,
        bool                               promiscuous,
        bool                               extendButtonPressOutsideUntilReleased,
        float                              innerPaddingX,
        float                              innerPaddingY
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::RectangleArea()> area,
        ::std::function<bool()>            condition,
        ::std::function<float()>           opacity,
        uint                               buttonId,
        ::ButtonColors const&              buttonColors,
        int                                ux,
        int                                uv,
        int                                uvWidth,
        int                                uvHeight,
        int                                activePointerId,
        bool                               passThrough,
        int                                touchStateRequirement,
        float                              glyphScale,
        bool                               promiscuous,
        bool                               extendButtonPressOutsideUntilReleased,
        float                              innerPaddingX,
        float                              innerPaddingY
    );

    MCAPI void* $ctor(
        ::std::function<::RectangleArea()> area,
        ::std::function<bool()>            condition,
        ::std::function<float()>           opacity,
        uint                               buttonId,
        ::std::string const&               iconPath,
        ::std::string const&               pressedIconPath,
        ::ButtonColors const&              buttonColors,
        int                                uvWidth,
        int                                uvHeight,
        int                                activePointerId,
        bool                               passThrough,
        int                                touchStateRequirement,
        float                              glyphScale,
        bool                               promiscuous,
        bool                               extendButtonPressOutsideUntilReleased,
        float                              innerPaddingX,
        float                              innerPaddingY
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
    MCFOLD uint $getHoldButtonId() const;

    MCAPI int $getActivePointerId() const;

    MCAPI bool $releaseOnClear() const;

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
