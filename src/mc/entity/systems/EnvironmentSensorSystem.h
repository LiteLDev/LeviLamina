#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class EnvironmentSensorSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    EnvironmentSensorSystem& operator=(EnvironmentSensorSystem const&);
    EnvironmentSensorSystem(EnvironmentSensorSystem const&);
    EnvironmentSensorSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EnvironmentSensorSystem@@UEAA@XZ
    virtual ~EnvironmentSensorSystem() = default;

    // vIndex: 2, symbol: ?tick@EnvironmentSensorSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
