#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ISystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISystem() = default;

    virtual void registerEvents(::entt::dispatcher& dispatcher);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $registerEvents(::entt::dispatcher& dispatcher);


    // NOLINTEND
};
