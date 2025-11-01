#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AgentRenderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk359d55;
    ::ll::UntypedStorage<8, 8> mUnkaf7065;
    // NOLINTEND

public:
    // prevent constructor by default
    AgentRenderData& operator=(AgentRenderData const&);
    AgentRenderData(AgentRenderData const&);
    AgentRenderData();
};
