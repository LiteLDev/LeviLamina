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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
