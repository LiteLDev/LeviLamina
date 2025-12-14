#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MouseAction;
class MouseDevice;
// clang-format on

class Multitouch {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static void commit();

    MCAPI_C static void feed(char actionButtonId, char buttonData, short x, short y, int pointerId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI_C static int& _activePointerCount();

    MCAPI_C static ::std::add_lvalue_reference_t<int[]> _activePointerList();

    MCAPI_C static int& _activePointerThisUpdateCount();

    MCAPI_C static ::std::add_lvalue_reference_t<int[]> _activePointerThisUpdateList();

    MCAPI_C static ::std::vector<::MouseAction>& _inputs();

    MCAPI_C static ::std::add_lvalue_reference_t<::MouseDevice[]> _pointers();

    MCAPI_C static ::std::add_lvalue_reference_t<bool[]> _wasEdgeTouch();

    MCAPI_C static ::std::add_lvalue_reference_t<bool[]> _wasPressed();

    MCAPI_C static ::std::add_lvalue_reference_t<bool[]> _wasPressedThisUpdate();

    MCAPI_C static ::std::add_lvalue_reference_t<bool[]> _wasReleased();

    MCAPI_C static ::std::add_lvalue_reference_t<bool[]> _wasReleasedThisUpdate();
    // NOLINTEND
};
