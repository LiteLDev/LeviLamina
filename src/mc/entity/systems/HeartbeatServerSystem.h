#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class HeartbeatServerSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    HeartbeatServerSystem& operator=(HeartbeatServerSystem const&);
    HeartbeatServerSystem(HeartbeatServerSystem const&);
    HeartbeatServerSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~HeartbeatServerSystem();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@HeartbeatServerSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
