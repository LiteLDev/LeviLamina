#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayFab {

class IPlayFabEmitEventResponse {
public:
    // prevent constructor by default
    IPlayFabEmitEventResponse& operator=(IPlayFabEmitEventResponse const&);
    IPlayFabEmitEventResponse(IPlayFabEmitEventResponse const&);
    IPlayFabEmitEventResponse();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPlayFabEmitEventResponse() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PlayFab
