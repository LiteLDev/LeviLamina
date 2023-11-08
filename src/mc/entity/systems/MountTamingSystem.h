#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class MountTamingSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    MountTamingSystem& operator=(MountTamingSystem const&);
    MountTamingSystem(MountTamingSystem const&);
    MountTamingSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MountTamingSystem@@UEAA@XZ
    virtual ~MountTamingSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@MountTamingSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
