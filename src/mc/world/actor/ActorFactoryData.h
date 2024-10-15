#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorFactoryData {
public:
    // prevent constructor by default
    ActorFactoryData(ActorFactoryData const&);

public:
    // NOLINTBEGIN
    MCAPI ActorFactoryData();

    MCAPI struct ActorFactoryData& operator=(struct ActorFactoryData const&);

    MCAPI ~ActorFactoryData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
