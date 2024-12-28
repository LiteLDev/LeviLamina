#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorRenderData {
public:
    // prevent constructor by default
    ActorRenderData& operator=(ActorRenderData const&);
    ActorRenderData(ActorRenderData const&);
    ActorRenderData();
};
