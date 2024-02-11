#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class AngerLevelSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AngerLevelSystem& operator=(AngerLevelSystem const&);
    AngerLevelSystem(AngerLevelSystem const&);
    AngerLevelSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AngerLevelSystem@@UEAA@XZ
    virtual ~AngerLevelSystem() = default;

    // vIndex: 2, symbol: ?tick@AngerLevelSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
