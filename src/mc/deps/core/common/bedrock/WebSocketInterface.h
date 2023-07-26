#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class WebSocketInterface {

public:
    // prevent constructor by default
    WebSocketInterface& operator=(WebSocketInterface const&) = delete;
    WebSocketInterface(WebSocketInterface const&)            = delete;
    WebSocketInterface()                                     = delete;
};

}; // namespace Bedrock::Http
