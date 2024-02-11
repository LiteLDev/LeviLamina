#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class CelebrateHuntSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    CelebrateHuntSystem& operator=(CelebrateHuntSystem const&);
    CelebrateHuntSystem(CelebrateHuntSystem const&);
    CelebrateHuntSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CelebrateHuntSystem@@UEAA@XZ
    virtual ~CelebrateHuntSystem() = default;

    // vIndex: 2, symbol: ?tick@CelebrateHuntSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
