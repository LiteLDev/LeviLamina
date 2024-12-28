#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientInputHandler {
public:
    // prevent constructor by default
    ClientInputHandler& operator=(ClientInputHandler const&);
    ClientInputHandler(ClientInputHandler const&);
    ClientInputHandler();
};
