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
    MCAPI ScreenInputContext();

    MCAPI void clear();

    MCAPI void enqueueEvent(::ScreenEvent const& screenEvent);

    MCFOLD ::std::vector<::ButtonUpRightOfFirstRefusalRequest> const& getButtonUpRightOfFirstRefusalRequests();

    MCFOLD ::std::vector<::ScreenEvent>& getEventQueue();

    MCAPI void requestButtonUpRightOfFirstRefusal(uint id, ::std::weak_ptr<::UIControl> control);

    MCAPI ~ScreenInputContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
