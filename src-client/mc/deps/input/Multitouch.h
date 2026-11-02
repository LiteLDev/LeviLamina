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
    MCNAPI static void reset();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<int[]> _activePointerList();

    MCNAPI static int& _activePointerThisUpdateCount();

    MCNAPI static ::std::add_lvalue_reference_t<int[]> _activePointerThisUpdateList();

    MCNAPI static ::std::vector<::MouseAction>& _inputs();

    MCNAPI static ::std::add_lvalue_reference_t<::MouseDevice[]> _pointers();

    MCNAPI static ::std::add_lvalue_reference_t<bool[]> _wasEdgeTouch();

    MCNAPI static ::std::add_lvalue_reference_t<bool[]> _wasPressed();

    MCNAPI static ::std::add_lvalue_reference_t<bool[]> _wasPressedThisUpdate();

    MCNAPI static ::std::add_lvalue_reference_t<bool[]> _wasReleased();

    MCNAPI static ::std::add_lvalue_reference_t<bool[]> _wasReleasedThisUpdate();
    // NOLINTEND
};
