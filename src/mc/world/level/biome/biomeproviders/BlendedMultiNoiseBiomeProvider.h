#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/RTree.h"
#include "mc/world/level/levelgen/v1/ChunkLocalNoiseCache.h"

class BlendedMultiNoiseBiomeProvider {
public:
    // prevent constructor by default
    BlendedMultiNoiseBiomeProvider& operator=(BlendedMultiNoiseBiomeProvider const&);
    BlendedMultiNoiseBiomeProvider(BlendedMultiNoiseBiomeProvider const&);
    BlendedMultiNoiseBiomeProvider();

public:
    // NOLINTBEGIN
    MCAPI BlendedMultiNoiseBiomeProvider(
        struct OverworldNoises3d const& overworldNoises,
        class ParameterList             parameterList,
        class ChunkBlenderFactory&      attenuatorFactory,
        class BiomeRegistry const&      biomeRegistry
    );

    MCAPI bool hasBiome(uint64 id) const;

    MCAPI bool hasBiomeByHashId(uint64 id) const;

    MCAPI class Biome const* tryGetBiome(struct GetBiomeOptions const& getBiomeOptions) const;

    MCAPI class Biome const* tryGetBiome(
        struct GetBiomeOptions const&                  getBiomeOptions,
        struct ChunkLocalNoiseCache::CacheEntry const& xzCacheEntry,
        struct RTree::Hint*                            hint
    ) const;

    MCAPI ~BlendedMultiNoiseBiomeProvider();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        struct OverworldNoises3d const& overworldNoises,
        class ParameterList             parameterList,
        class ChunkBlenderFactory&      attenuatorFactory,
        class BiomeRegistry const&      biomeRegistry
    );

    MCAPI void dtor$();

    // NOLINTEND
};
