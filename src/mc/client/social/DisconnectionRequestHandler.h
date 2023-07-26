#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DisconnectionRequestHandler {

public:
    // prevent constructor by default
    DisconnectionRequestHandler& operator=(DisconnectionRequestHandler const&) = delete;
    DisconnectionRequestHandler(DisconnectionRequestHandler const&)            = delete;
    DisconnectionRequestHandler()                                              = delete;
};
