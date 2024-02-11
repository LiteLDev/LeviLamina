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
    // vIndex: 0, symbol: __gen_??1OpenDoorAnnotationSystem@@UEAA@XZ
    virtual ~OpenDoorAnnotationSystem() = default;

    // vIndex: 2, symbol: ?tick@OpenDoorAnnotationSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
