#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class ExplodeSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    ExplodeSystem& operator=(ExplodeSystem const&);
    ExplodeSystem(ExplodeSystem const&);
    ExplodeSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ExplodeSystem@@UEAA@XZ
    virtual ~ExplodeSystem() = default;

    // vIndex: 2, symbol: ?tick@ExplodeSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
