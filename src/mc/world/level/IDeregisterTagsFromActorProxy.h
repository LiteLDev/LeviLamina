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
    // vIndex: 0
    virtual ~IDeregisterTagsFromActorProxy() = default;

    // vIndex: 1
    virtual void deregisterTagsFromActor(class Actor& actor) = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
