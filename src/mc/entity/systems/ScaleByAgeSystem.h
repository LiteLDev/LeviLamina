#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class ScaleByAgeSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    ScaleByAgeSystem& operator=(ScaleByAgeSystem const&);
    ScaleByAgeSystem(ScaleByAgeSystem const&);
    ScaleByAgeSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ScaleByAgeSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@ScaleByAgeSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
