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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~CelebrateHuntSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@CelebrateHuntSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
