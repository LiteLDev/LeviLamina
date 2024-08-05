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
    // vIndex: 0
    virtual ~DeregisterTagsFromActorProxy() = default;

    // vIndex: 1
    virtual void deregisterTagsFromActor(class Actor&);

    // NOLINTEND
};
