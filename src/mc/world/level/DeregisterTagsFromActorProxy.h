#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IDeregisterTagsFromActorProxy.h"

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
    virtual void deregisterTagsFromActor(class Actor& actor);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void deregisterTagsFromActor$(class Actor& actor);

    // NOLINTEND
};
