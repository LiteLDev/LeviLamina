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
    // member functions
    // NOLINTBEGIN
    MCNAPI int getNewActivePointer(
        ::TouchPointResults&                  touchPointResults,
        ::RectangleArea const&                area,
        float&                                x,
        float&                                y,
        ::std::vector<::RectangleArea> const& areasToIgnore,
        ::std::vector<int> const&             pointerIdsToIgnore,
        bool                                  consumeInput
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint $getHoldButtonId() const;

    MCNAPI int $getActivePointerId() const;

    MCNAPI bool $releaseOnClear() const;

    MCNAPI void $render(::InputRenderContext& context) const;

    MCNAPI void $tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor);

    MCNAPI void $release(::InputEventQueue& eventQueue);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
