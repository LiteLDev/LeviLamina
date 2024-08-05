#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/biome/SpawnBiomeType.h"

struct SpawnSettings {
public:
    SpawnBiomeType type;
    std::string    userDefinedBiomeName;
    DimensionType  dimension;

    // prevent constructor by default
    SpawnSettings& operator=(SpawnSettings const&);
    SpawnSettings();

public:
    // NOLINTBEGIN
    MCAPI SpawnSettings(struct SpawnSettings const&);

    MCAPI ~SpawnSettings();

    // NOLINTEND
};
