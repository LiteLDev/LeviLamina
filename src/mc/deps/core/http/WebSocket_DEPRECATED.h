#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/WebSocket.h"

namespace Bedrock::Http {

class WebSocket_DEPRECATED : public ::Bedrock::Http::WebSocket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk63bb4e;
    // NOLINTEND

public:
    // prevent constructor by default
    WebSocket_DEPRECATED& operator=(WebSocket_DEPRECATED const&);
    WebSocket_DEPRECATED(WebSocket_DEPRECATED const&);
    WebSocket_DEPRECATED();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WebSocket_DEPRECATED() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Http
