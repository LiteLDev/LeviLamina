#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/WebSocketInterfaceInternal.h"

namespace Bedrock::Http {

class WebSocketInterface_windows : public ::Bedrock::Http::WebSocketInterfaceInternal {
public:
    // prevent constructor by default
    WebSocketInterface_windows& operator=(WebSocketInterface_windows const&);
    WebSocketInterface_windows(WebSocketInterface_windows const&);
    WebSocketInterface_windows();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WebSocketInterface_windows() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
