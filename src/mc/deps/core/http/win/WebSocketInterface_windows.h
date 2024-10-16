#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class WebSocketInterface_windows {
public:
    // prevent constructor by default
    WebSocketInterface_windows& operator=(WebSocketInterface_windows const&);
    WebSocketInterface_windows(WebSocketInterface_windows const&);
    WebSocketInterface_windows();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WebSocketInterface_windows() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};

}; // namespace Bedrock::Http
