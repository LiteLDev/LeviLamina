#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AgentCapabilities {
public:
    std::optional<bool> mCanModifyBlocks;

    // prevent constructor by default
    AgentCapabilities& operator=(AgentCapabilities const&);
    AgentCapabilities(AgentCapabilities const&);
    AgentCapabilities();
};
