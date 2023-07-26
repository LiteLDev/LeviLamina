#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WebSocketPerformInfo {

public:
    // prevent constructor by default
    WebSocketPerformInfo& operator=(WebSocketPerformInfo const&) = delete;
    WebSocketPerformInfo(WebSocketPerformInfo const&)            = delete;
    WebSocketPerformInfo()                                       = delete;
};
