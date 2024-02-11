#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class TeleportSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    TeleportSystem& operator=(TeleportSystem const&);
    TeleportSystem(TeleportSystem const&);
    TeleportSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TeleportSystem@@UEAA@XZ
    virtual ~TeleportSystem() = default;

    // vIndex: 2, symbol: ?tick@TeleportSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
