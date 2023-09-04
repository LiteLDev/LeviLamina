#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class BreakDoorAnnotationSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    BreakDoorAnnotationSystem& operator=(BreakDoorAnnotationSystem const&) = delete;
    BreakDoorAnnotationSystem(BreakDoorAnnotationSystem const&)            = delete;
    BreakDoorAnnotationSystem()                                            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@BreakDoorAnnotationSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
