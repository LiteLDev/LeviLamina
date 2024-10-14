#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorEventResponseFactory {
public:
    // prevent constructor by default
    ActorEventResponseFactory& operator=(ActorEventResponseFactory const&);
    ActorEventResponseFactory(ActorEventResponseFactory const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorEventResponseFactory();

    MCAPI ActorEventResponseFactory();

    MCAPI void initSchema();

    MCAPI void initializeFactory(class Experiments const& experiments);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
