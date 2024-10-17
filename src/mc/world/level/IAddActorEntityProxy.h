#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IAddActorEntityProxy {
public:
    // prevent constructor by default
    IAddActorEntityProxy& operator=(IAddActorEntityProxy const&);
    IAddActorEntityProxy(IAddActorEntityProxy const&);
    IAddActorEntityProxy();
};
