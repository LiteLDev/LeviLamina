#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorldTransferAgent {
public:
    // prevent constructor by default
    WorldTransferAgent& operator=(WorldTransferAgent const&);
    WorldTransferAgent(WorldTransferAgent const&);
    WorldTransferAgent();
};
