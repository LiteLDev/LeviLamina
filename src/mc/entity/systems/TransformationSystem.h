#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class TransformationSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    TransformationSystem& operator=(TransformationSystem const&);
    TransformationSystem(TransformationSystem const&);
    TransformationSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TransformationSystem@@UEAA@XZ
    virtual ~TransformationSystem() = default;

    // vIndex: 2, symbol: ?tick@TransformationSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
