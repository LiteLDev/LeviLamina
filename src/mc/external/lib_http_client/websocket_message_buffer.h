#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct websocket_message_buffer {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~websocket_message_buffer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace xbox::httpclient
