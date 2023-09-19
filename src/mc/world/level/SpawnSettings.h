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
    // symbol: ??0SpawnSettings@@QEAA@AEBU0@@Z
    MCAPI SpawnSettings(struct SpawnSettings const&);

    // symbol: ??1SpawnSettings@@QEAA@XZ
    MCAPI ~SpawnSettings();

    // NOLINTEND
};
