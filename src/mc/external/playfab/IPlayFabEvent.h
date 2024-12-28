#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab {

class IPlayFabEvent {
public:
    // prevent constructor by default
    IPlayFabEvent& operator=(IPlayFabEvent const&);
    IPlayFabEvent(IPlayFabEvent const&);
    IPlayFabEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPlayFabEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace PlayFab
