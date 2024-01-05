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
    // symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    MCVAPI void registerEvents(entt::dispatcher& dispatcher);

    // NOLINTEND
};
