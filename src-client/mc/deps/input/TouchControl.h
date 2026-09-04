#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class InputEventQueue;
class InputRenderContext;
class RectangleArea;
class TouchPointResults;
// clang-format on

class TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>> mArea;
    ::ll::TypedStorage<4, 4, int>                                 mScreenWidth;
    ::ll::TypedStorage<4, 4, int>                                 mScreenHeight;
    ::ll::TypedStorage<8, 32, ::std::string>                      mCurrentLabel;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchControl();

    virtual uint getHoldButtonId() const;

    virtual int getActivePointerId() const;

    virtual bool releaseOnClear() const;

    virtual void render(::InputRenderContext& context) const;

    virtual void tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor);

    virtual void release(::InputEventQueue& eventQueue);
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

    MCFOLD int $getActivePointerId() const;

    MCFOLD bool $releaseOnClear() const;

    MCFOLD void $render(::InputRenderContext& context) const;

    MCFOLD void $tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor);

    MCFOLD void $release(::InputEventQueue& eventQueue);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
