#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LevelChunkTag : schar {
    Data3D = 43,
    Version = 44,
    Data2D = 45,
    Data2DLegacy = 46,
    SubChunkPrefix = 47,
    LegacyTerrain = 48,
    BlockEntity = 49,
    Entity = 50,
    PendingTicks = 51,
    LegacyBlockExtraData = 52,
    BiomeState = 53,
    FinalizedState = 54,
    ConversionData = 55,
    BorderBlocks = 56,
    HardcodedSpawners = 57,
    RandomTicks = 58,
    CheckSums = 59,
    GenerationSeed = 60,
    GeneratedPreCavesAndCliffsBlending = 61,
    BlendingBiomeHeight = 62,
    MetaDataHash = 63,
    BlendingData = 64,
    ActorDigestVersion = 65,
    LegacyVersion = 118,
    AabbVolumes = 119,
};
