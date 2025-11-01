#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class websocket_message_buffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2a212e;
    ::ll::UntypedStorage<4, 4> mUnk1fede4;
    ::ll::UntypedStorage<4, 4> mUnkac4159;
    // NOLINTEND

public:
    // prevent constructor by default
    websocket_message_buffer& operator=(websocket_message_buffer const&);
    websocket_message_buffer(websocket_message_buffer const&);
    websocket_message_buffer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~websocket_message_buffer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace xbox::httpclient
