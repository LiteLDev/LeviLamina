#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class OpenDoorAnnotationSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    OpenDoorAnnotationSystem& operator=(OpenDoorAnnotationSystem const&);
    OpenDoorAnnotationSystem(OpenDoorAnnotationSystem const&);
    OpenDoorAnnotationSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~OpenDoorAnnotationSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@OpenDoorAnnotationSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
