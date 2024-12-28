#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab {

class IPlayFabEmitEventRequest {
public:
    // prevent constructor by default
    IPlayFabEmitEventRequest& operator=(IPlayFabEmitEventRequest const&);
    IPlayFabEmitEventRequest(IPlayFabEmitEventRequest const&);
    IPlayFabEmitEventRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPlayFabEmitEventRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace PlayFab
