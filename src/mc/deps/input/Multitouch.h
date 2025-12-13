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
    MCNAPI_C static void commit();

    MCNAPI_C static void feed(char actionButtonId, char buttonData, short x, short y, int pointerId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static int& _activePointerCount();

    MCNAPI_C static ::std::add_lvalue_reference_t<int[]> _activePointerList();

    MCNAPI_C static int& _activePointerThisUpdateCount();

    MCNAPI_C static ::std::add_lvalue_reference_t<int[]> _activePointerThisUpdateList();

    MCNAPI_C static ::std::vector<::MouseAction>& _inputs();

    MCNAPI_C static ::std::add_lvalue_reference_t<::MouseDevice[]> _pointers();

    MCNAPI_C static ::std::add_lvalue_reference_t<bool[]> _wasEdgeTouch();

    MCNAPI_C static ::std::add_lvalue_reference_t<bool[]> _wasPressed();

    MCNAPI_C static ::std::add_lvalue_reference_t<bool[]> _wasPressedThisUpdate();

    MCNAPI_C static ::std::add_lvalue_reference_t<bool[]> _wasReleased();

    MCNAPI_C static ::std::add_lvalue_reference_t<bool[]> _wasReleasedThisUpdate();
    // NOLINTEND
};
