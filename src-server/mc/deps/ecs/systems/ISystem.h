#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ISystem {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISystem() = default;

    // vIndex: 1
    virtual void registerEvents(::entt::dispatcher& dispatcher);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $registerEvents(::entt::dispatcher& dispatcher);
    // NOLINTEND

};
