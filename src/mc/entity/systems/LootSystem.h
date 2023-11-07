#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class LootSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    LootSystem& operator=(LootSystem const&);
    LootSystem(LootSystem const&);
    LootSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~LootSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@LootSystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // symbol: ?tick@LootSystem@@UEAAXAEAVEntityRegistry@@@Z
    MCVAPI void tick(class EntityRegistry&);

    // NOLINTEND
};
