#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class IActorManagerProxy {
public:
    // prevent constructor by default
    IActorManagerProxy& operator=(IActorManagerProxy const&);
    IActorManagerProxy(IActorManagerProxy const&);
    IActorManagerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IActorManagerProxy();

    // vIndex: 1
    virtual void initializeActor(::Actor&) = 0;

    // vIndex: 2
    virtual bool validate(::Actor const&) = 0;

    // vIndex: 3
    virtual void addActor(::Actor&) = 0;

    // vIndex: 4
    virtual void removeActor(::Actor&) = 0;

    // vIndex: 5
    virtual void removeActorInLevelChunk(::Actor const&) = 0;

    // vIndex: 6
    virtual void deleteActorFromWorldInLevelChunk(::Actor const&) = 0;
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
