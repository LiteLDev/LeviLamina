#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/TouchControl.h"

// auto generated forward declare list
// clang-format off
class InputEventQueue;
class RectangleArea;
class TouchPointResults;
// clang-format on

class CustomZoneControl : public ::TouchControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint const>               mZoneName;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>> mCondition;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomZoneControl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    tick(::InputEventQueue& eventQueue, ::TouchPointResults& touchPointResults, int yAxisInversionFactor) /*override*/;

    virtual ~CustomZoneControl() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CustomZoneControl(uint zoneName, ::std::function<::RectangleArea()> area, ::std::function<bool()> condition);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint zoneName, ::std::function<::RectangleArea()> area, ::std::function<bool()> condition);
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
