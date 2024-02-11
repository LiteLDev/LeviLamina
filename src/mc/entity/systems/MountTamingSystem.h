#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class MountTamingSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    MountTamingSystem& operator=(MountTamingSystem const&);
    MountTamingSystem(MountTamingSystem const&);
    MountTamingSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MountTamingSystem@@UEAA@XZ
    virtual ~MountTamingSystem() = default;

    // vIndex: 2, symbol: ?tick@MountTamingSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
