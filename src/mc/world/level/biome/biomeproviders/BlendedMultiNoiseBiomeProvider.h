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
        struct OverworldNoises3d const&,
        class ParameterList,
        class ChunkBlenderFactory&,
        class BiomeRegistry const& biomeRegistry
    );

    MCAPI bool hasBiome(uint64) const;

    MCAPI bool hasBiomeByHashId(uint64) const;

    MCAPI class Biome const* tryGetBiome(struct GetBiomeOptions const&) const;

    MCAPI class Biome const*
    tryGetBiome(struct GetBiomeOptions const&, struct ChunkLocalNoiseCache::CacheEntry const&, struct RTree::Hint*)
        const;

    MCAPI ~BlendedMultiNoiseBiomeProvider();

    // NOLINTEND
};
