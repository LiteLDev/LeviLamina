#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class WebSocketInterface {
public:
    // prevent constructor by default
    WebSocketInterface& operator=(WebSocketInterface const&);
    WebSocketInterface(WebSocketInterface const&);
    WebSocketInterface();
};

}; // namespace Bedrock::Http
