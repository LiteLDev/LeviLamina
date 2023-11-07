#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class GlobalActorLegacyTickSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    GlobalActorLegacyTickSystem& operator=(GlobalActorLegacyTickSystem const&);
    GlobalActorLegacyTickSystem(GlobalActorLegacyTickSystem const&);
    GlobalActorLegacyTickSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GlobalActorLegacyTickSystem@@UEAA@XZ
    virtual ~GlobalActorLegacyTickSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@GlobalActorLegacyTickSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
