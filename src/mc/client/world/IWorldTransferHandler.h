#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IWorldTransferHandler {
public:
    // prevent constructor by default
    IWorldTransferHandler& operator=(IWorldTransferHandler const&);
    IWorldTransferHandler(IWorldTransferHandler const&);
    IWorldTransferHandler();
};
