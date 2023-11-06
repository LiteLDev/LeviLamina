#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class VibrationListenerSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    VibrationListenerSystem& operator=(VibrationListenerSystem const&);
    VibrationListenerSystem(VibrationListenerSystem const&);
    VibrationListenerSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~VibrationListenerSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@VibrationListenerSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
