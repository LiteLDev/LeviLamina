#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FrozenNoiseBasedTemperatureFlag {
public:
    // prevent constructor by default
    FrozenNoiseBasedTemperatureFlag& operator=(FrozenNoiseBasedTemperatureFlag const&);
    FrozenNoiseBasedTemperatureFlag(FrozenNoiseBasedTemperatureFlag const&);
    FrozenNoiseBasedTemperatureFlag();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FrozenNoiseBasedTemperatureFlag() = default;

    // NOLINTEND
};
