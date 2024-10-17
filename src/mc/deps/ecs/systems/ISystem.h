#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ISystem {
public:
    // prevent constructor by default
    ISystem& operator=(ISystem const&);
    ISystem(ISystem const&);
    ISystem();

public:
    // NOLINTBEGIN
    MCVAPI void registerEvents(entt::dispatcher& dispatcher);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void registerEvents$(entt::dispatcher& dispatcher);

    // NOLINTEND
};
