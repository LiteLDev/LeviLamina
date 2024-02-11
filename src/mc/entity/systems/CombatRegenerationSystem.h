#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class CombatRegenerationSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    CombatRegenerationSystem& operator=(CombatRegenerationSystem const&);
    CombatRegenerationSystem(CombatRegenerationSystem const&);
    CombatRegenerationSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CombatRegenerationSystem@@UEAA@XZ
    virtual ~CombatRegenerationSystem() = default;

    // vIndex: 2, symbol: ?tick@CombatRegenerationSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
