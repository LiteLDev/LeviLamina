#pragma once

#include "mc/_HeaderOutputPredefine.h"

// from https://learn.microsoft.com/en-us/minecraft/creator/documents/actorstorage#non-actor-data-chunk-key-ids

enum class LevelChunkTag : char {
    Data3D = 43,
    Version, // This was moved to the front as needed for the extended heights feature. Old chunks will not have this
             // data.
    Data2D,
    Data2DLegacy,
    SubChunkPrefix,
    LegacyTerrain,
    BlockEntity,
    Entity,
    PendingTicks,
    LegacyBlockExtraData,
    BiomeState,
    FinalizedState,
    ConversionData, // data that the converter provides, that are used at runtime for things like blending
    BorderBlocks,
    HardcodedSpawners,
    RandomTicks,
    CheckSums,
    GenerationSeed,
    GeneratedPreCavesAndCliffsBlending = 61, // not used, DON'T REMOVE
    BlendingBiomeHeight                = 62, // not used, DON'T REMOVE
    MetaDataHash,
    BlendingData,
    ActorDigestVersion,
    LegacyVersion = 118,
};
