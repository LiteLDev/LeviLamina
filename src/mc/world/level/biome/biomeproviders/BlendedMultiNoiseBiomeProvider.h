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
    // symbol:
    // ??0BlendedMultiNoiseBiomeProvider@@QEAA@AEBUOverworldNoises3d@@VParameterList@@AEAVChunkBlenderFactory@@AEBVBiomeRegistry@@@Z
    MCAPI BlendedMultiNoiseBiomeProvider(
        struct OverworldNoises3d const&,
        class ParameterList,
        class ChunkBlenderFactory&,
        class BiomeRegistry const& biomeRegistry
    );

    // symbol: ?tryGetBiome@BlendedMultiNoiseBiomeProvider@@QEBAPEBVBiome@@AEBUGetBiomeOptions@@@Z
    MCAPI class Biome const* tryGetBiome(struct GetBiomeOptions const&) const;

    // symbol:
    // ?tryGetBiome@BlendedMultiNoiseBiomeProvider@@QEBAPEBVBiome@@AEBUGetBiomeOptions@@AEBUCacheEntry@ChunkLocalNoiseCache@@PEAUHint@RTree@@@Z
    MCAPI class Biome const*
    tryGetBiome(struct GetBiomeOptions const&, struct ChunkLocalNoiseCache::CacheEntry const&, struct RTree::Hint*)
        const;

    // symbol: ??1BlendedMultiNoiseBiomeProvider@@QEAA@XZ
    MCAPI ~BlendedMultiNoiseBiomeProvider();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_selectBestFittingBiome@BlendedMultiNoiseBiomeProvider@@AEBAPEBVBiome@@AEBUTargetPoint@@PEAUHint@RTree@@@Z
    MCAPI class Biome const* _selectBestFittingBiome(struct TargetPoint const& current, struct RTree::Hint*) const;

    // NOLINTEND
};
