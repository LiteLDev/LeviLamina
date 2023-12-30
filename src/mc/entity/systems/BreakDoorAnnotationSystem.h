#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class BreakDoorAnnotationSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    BreakDoorAnnotationSystem& operator=(BreakDoorAnnotationSystem const&);
    BreakDoorAnnotationSystem(BreakDoorAnnotationSystem const&);
    BreakDoorAnnotationSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BreakDoorAnnotationSystem@@UEAA@XZ
    virtual ~BreakDoorAnnotationSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@BreakDoorAnnotationSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
