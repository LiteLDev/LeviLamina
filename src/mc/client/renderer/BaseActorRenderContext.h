#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseActorRenderContext {
public:
    // prevent constructor by default
    BaseActorRenderContext& operator=(BaseActorRenderContext const&);
    BaseActorRenderContext(BaseActorRenderContext const&);
    BaseActorRenderContext();
};
