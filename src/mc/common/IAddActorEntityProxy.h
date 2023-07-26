#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IAddActorEntityProxy {

public:
    // prevent constructor by default
    IAddActorEntityProxy& operator=(IAddActorEntityProxy const&) = delete;
    IAddActorEntityProxy(IAddActorEntityProxy const&)            = delete;
    IAddActorEntityProxy()                                       = delete;
};
