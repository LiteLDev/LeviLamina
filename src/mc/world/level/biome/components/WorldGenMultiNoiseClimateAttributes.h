#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorldGenMultiNoiseClimateAttributes {
public:
    // prevent constructor by default
    WorldGenMultiNoiseClimateAttributes& operator=(WorldGenMultiNoiseClimateAttributes const&);
    WorldGenMultiNoiseClimateAttributes(WorldGenMultiNoiseClimateAttributes const&);
    WorldGenMultiNoiseClimateAttributes();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldGenMultiNoiseClimateAttributes() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
