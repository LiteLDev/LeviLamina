#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class WebSocketInterface {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_WEBSOCKETINTERFACE
public:
    WebSocketInterface& operator=(WebSocketInterface const&) = delete;
    WebSocketInterface(WebSocketInterface const&)            = delete;
    WebSocketInterface()                                     = delete;
#endif

public:
};

}; // namespace Bedrock::Http
