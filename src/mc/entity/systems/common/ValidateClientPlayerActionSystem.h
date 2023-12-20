#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ValidateClientPlayerActionSystem {
public:
    // prevent constructor by default
    ValidateClientPlayerActionSystem& operator=(ValidateClientPlayerActionSystem const&);
    ValidateClientPlayerActionSystem(ValidateClientPlayerActionSystem const&);
    ValidateClientPlayerActionSystem();

public:
    // NOLINTBEGIN
    // symbol: ?registerSystems@ValidateClientPlayerActionSystem@@SAXAEAVEntitySystems@@_N@Z
    MCAPI static void registerSystems(class EntitySystems&, bool);

    // NOLINTEND
};
