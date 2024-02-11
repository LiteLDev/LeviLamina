#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/components/IDeregisterTagsFromActorProxy.h"

class DeregisterTagsFromActorProxy : public ::IDeregisterTagsFromActorProxy {
public:
    // prevent constructor by default
    DeregisterTagsFromActorProxy& operator=(DeregisterTagsFromActorProxy const&);
    DeregisterTagsFromActorProxy(DeregisterTagsFromActorProxy const&);
    DeregisterTagsFromActorProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DeregisterTagsFromActorProxy@@UEAA@XZ
    virtual ~DeregisterTagsFromActorProxy() = default;

    // vIndex: 1, symbol: ?deregisterTagsFromActor@DeregisterTagsFromActorProxy@@UEAAXAEAVActor@@@Z
    virtual void deregisterTagsFromActor(class Actor&);

    // NOLINTEND
};
