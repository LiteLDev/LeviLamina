#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class ClientConnectionState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkeec7a4;
    ::ll::UntypedStorage<8, 416> mUnk3b38e4;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientConnectionState& operator=(ClientConnectionState const&);
    ClientConnectionState(ClientConnectionState const&);
    ClientConnectionState();
};

} // namespace Social
