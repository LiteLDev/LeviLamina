#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDeregisterTagsFromActorProxy {
public:
    // prevent constructor by default
    IDeregisterTagsFromActorProxy& operator=(IDeregisterTagsFromActorProxy const&);
    IDeregisterTagsFromActorProxy(IDeregisterTagsFromActorProxy const&);
    IDeregisterTagsFromActorProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IDeregisterTagsFromActorProxy@@UEAA@XZ
    virtual ~IDeregisterTagsFromActorProxy() = default;

    // vIndex: 1, symbol: ?deregisterTagsFromActor@DeregisterTagsFromActorProxy@@UEAAXAEAVActor@@@Z
    virtual void deregisterTagsFromActor(class Actor&) = 0;

    // NOLINTEND
};
