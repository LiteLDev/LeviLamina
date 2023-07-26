#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class WebSocketInterface_windows {

public:
    // prevent constructor by default
    WebSocketInterface_windows& operator=(WebSocketInterface_windows const&) = delete;
    WebSocketInterface_windows(WebSocketInterface_windows const&)            = delete;
    WebSocketInterface_windows()                                             = delete;
};

}; // namespace Bedrock::Http
