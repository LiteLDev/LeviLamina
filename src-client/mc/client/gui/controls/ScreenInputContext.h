#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class UIControl;
struct ButtonUpRightOfFirstRefusalRequest;
struct ScreenEvent;
// clang-format on

class ScreenInputContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ScreenEvent>>                        mEvents;
    ::ll::TypedStorage<8, 24, ::std::vector<::ButtonUpRightOfFirstRefusalRequest>> mButtonUpRightOfFirstRefusalRequests;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void requestButtonUpRightOfFirstRefusal(uint id, ::std::weak_ptr<::UIControl> control);

    MCAPI ~ScreenInputContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
