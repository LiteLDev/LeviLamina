#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientFrameUpdateContext {
public:
    // prevent constructor by default
    ClientFrameUpdateContext& operator=(ClientFrameUpdateContext const&);
    ClientFrameUpdateContext(ClientFrameUpdateContext const&);
    ClientFrameUpdateContext();
};
