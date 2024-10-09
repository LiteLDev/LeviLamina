#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HC_WEBSOCKET {
public:
    // prevent constructor by default
    HC_WEBSOCKET& operator=(HC_WEBSOCKET const&);
    HC_WEBSOCKET(HC_WEBSOCKET const&);
    HC_WEBSOCKET();
};
