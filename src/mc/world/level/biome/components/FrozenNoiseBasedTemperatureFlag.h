#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

struct FrozenNoiseBasedTemperatureFlag : public ::BiomeComponentBase {
public:
    // prevent constructor by default
    FrozenNoiseBasedTemperatureFlag& operator=(FrozenNoiseBasedTemperatureFlag const&);
    FrozenNoiseBasedTemperatureFlag(FrozenNoiseBasedTemperatureFlag const&);
    FrozenNoiseBasedTemperatureFlag();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FrozenNoiseBasedTemperatureFlag() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
