#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class AngrySystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AngrySystem& operator=(AngrySystem const&);
    AngrySystem(AngrySystem const&);
    AngrySystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~AngrySystem();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@AngrySystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickComponent@AngrySystem@@CAXAEAVEntityContext@@AEAVAngryComponent@@@Z
    MCAPI static void _tickComponent(class EntityContext&, class AngryComponent&);

    // NOLINTEND
};
