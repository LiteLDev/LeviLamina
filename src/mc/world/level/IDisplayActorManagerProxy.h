#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class IDisplayActorManagerProxy {
public:
    // prevent constructor by default
    IDisplayActorManagerProxy& operator=(IDisplayActorManagerProxy const&);
    IDisplayActorManagerProxy(IDisplayActorManagerProxy const&);
    IDisplayActorManagerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IDisplayActorManagerProxy();

    // vIndex: 1
    virtual void initializeActor(::Actor&) const = 0;

    // vIndex: 2
    virtual void unregisterDisplayEntityFromDimension(::Actor const&) const = 0;
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
};
