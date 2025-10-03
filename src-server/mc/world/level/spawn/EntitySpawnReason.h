#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::spawn {

enum class EntitySpawnReason : ushort {
    Natural         = 0,
    ChunkGeneration = 1,
    Spawner         = 2,
    Structure       = 3,
    Breeding        = 4,
    MobSummoned     = 5,
    Jockey          = 6,
    Event           = 7,
    Conversion      = 8,
    Reinforcement   = 9,
    Triggered       = 10,
    Bucket          = 11,
    SpawnEgg        = 12,
    Command         = 13,
    Dispenser       = 14,
    Patrol          = 15,
    TrialSpawner    = 16,
    Load            = 17,
    DimensionTravel = 18,
};

}
