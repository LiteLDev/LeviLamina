#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/TouchControl.h"
#include "mc/deps/input/TouchTurnControlState.h"
#include "mc/deps/input/TouchTurnState.h"

// auto generated forward declare list
// clang-format off
class InputEventQueue;
class RectangleArea;
class TouchPointResults;
// clang-format on

class TouchTurnInteractControl : public ::TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mCondition;
    ::ll::TypedStorage<8, 64, ::std::function<::std::vector<::RectangleArea>()>> mGetInactiveAreasCallback;
    ::ll::TypedStorage<4, 4, uint const>                                         mTurnInteractButtonId;
    ::ll::TypedStorage<4, 4, uint const>                                         mTapButtonId;
    ::ll::TypedStorage<4, 4, uint const>                                         mHoldButtonId;
    ::ll::TypedStorage<4, 4, float>                                              mHoldSensitivity;
    ::ll::TypedStorage<1, 1, bool>                                               mPersistData;
    ::ll::TypedStorage<8, 32, ::TouchTurnControlState>                           mState;
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>>                mHotbarArea;
    ::ll::TypedStorage<8, 16, ::std::set<int>>                                   mPreviousActivePointers;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchTurnInteractControl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchTurnInteractControl() /*override*/;

    virtual void
    tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TouchTurnInteractControl(
        ::std::function<::RectangleArea()>                area,
        ::std::function<::RectangleArea()>                hotbarArea,
        uint                                              turnInteractButtonId,
        uint                                              tapButtonId,
        uint                                              holdButtonId,
        float                                             holdSensitivity,
        ::std::function<bool()>                           condition,
        ::std::function<::std::vector<::RectangleArea>()> inactiveAreas
    );

    MCAPI void incrementMoveDelta(::InputEventQueue& eventQueue, float x, float y, int yAxisInversionFactor);

    MCAPI void switchState(::InputEventQueue& eventQueue, ::TouchTurnState newState);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::RectangleArea()>                area,
        ::std::function<::RectangleArea()>                hotbarArea,
        uint                                              turnInteractButtonId,
        uint                                              tapButtonId,
        uint                                              holdButtonId,
        float                                             holdSensitivity,
        ::std::function<bool()>                           condition,
        ::std::function<::std::vector<::RectangleArea>()> inactiveAreas
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
    MCAPI void $tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
