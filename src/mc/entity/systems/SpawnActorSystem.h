#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class SpawnActorSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    SpawnActorSystem& operator=(SpawnActorSystem const&);
    SpawnActorSystem(SpawnActorSystem const&);
    SpawnActorSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SpawnActorSystem@@UEAA@XZ
    virtual ~SpawnActorSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@SpawnActorSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
