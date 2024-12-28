#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class IDeregisterTagsFromActorProxy {
public:
    // prevent constructor by default
    IDeregisterTagsFromActorProxy& operator=(IDeregisterTagsFromActorProxy const&);
    IDeregisterTagsFromActorProxy(IDeregisterTagsFromActorProxy const&);
    IDeregisterTagsFromActorProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IDeregisterTagsFromActorProxy();

    // vIndex: 1
    virtual void deregisterTagsFromActor(::Actor&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
