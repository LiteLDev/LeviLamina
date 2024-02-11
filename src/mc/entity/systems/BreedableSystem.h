#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class BreedableSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    BreedableSystem& operator=(BreedableSystem const&);
    BreedableSystem(BreedableSystem const&);
    BreedableSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BreedableSystem@@UEAA@XZ
    virtual ~BreedableSystem() = default;

    // vIndex: 2, symbol: ?tick@BreedableSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
