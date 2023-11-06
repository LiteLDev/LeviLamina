#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class DwellerSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    DwellerSystem& operator=(DwellerSystem const&);
    DwellerSystem(DwellerSystem const&);
    DwellerSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~DwellerSystem();

    // vIndex: 1, symbol: ?registerEvents@DwellerSystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: ?tick@DwellerSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
