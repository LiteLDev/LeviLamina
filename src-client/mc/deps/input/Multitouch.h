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
    MCAPI static void reset();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<int[]> _activePointerList();

    MCAPI static int& _activePointerThisUpdateCount();

    MCAPI static ::std::add_lvalue_reference_t<int[]> _activePointerThisUpdateList();

    MCAPI static ::std::vector<::MouseAction>& _inputs();

    MCAPI static ::std::add_lvalue_reference_t<::MouseDevice[]> _pointers();

    MCAPI static ::std::add_lvalue_reference_t<bool[]> _wasEdgeTouch();

    MCAPI static ::std::add_lvalue_reference_t<bool[]> _wasPressed();

    MCAPI static ::std::add_lvalue_reference_t<bool[]> _wasPressedThisUpdate();

    MCAPI static ::std::add_lvalue_reference_t<bool[]> _wasReleased();

    MCAPI static ::std::add_lvalue_reference_t<bool[]> _wasReleasedThisUpdate();
    // NOLINTEND
};
