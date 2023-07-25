#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/RTree.h"
#include "mc/world/level/levelgen/v1/ChunkLocalNoiseCache.h"

class BlendedMultiNoiseBiomeProvider {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLENDEDMULTINOISEBIOMEPROVIDER
public:
    BlendedMultiNoiseBiomeProvider& operator=(BlendedMultiNoiseBiomeProvider const&) = delete;
    BlendedMultiNoiseBiomeProvider(BlendedMultiNoiseBiomeProvider const&)            = delete;
    BlendedMultiNoiseBiomeProvider()                                                 = delete;
#endif

public:
    /**
     * @symbol
     * ??0BlendedMultiNoiseBiomeProvider\@\@QEAA\@AEBUOverworldNoises3d\@\@VParameterList\@\@AEAVChunkBlenderFactory\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI
    BlendedMultiNoiseBiomeProvider(struct OverworldNoises3d const&, class ParameterList, class ChunkBlenderFactory&, class BiomeRegistry const&);
    /**
     * @symbol
     * ?tryGetBiome\@BlendedMultiNoiseBiomeProvider\@\@QEBAPEBVBiome\@\@AEBUGetBiomeOptions\@\@AEBUCacheEntry\@ChunkLocalNoiseCache\@\@PEAUHint\@RTree\@\@\@Z
     */
    MCAPI class Biome const*
    tryGetBiome(struct GetBiomeOptions const&, struct ChunkLocalNoiseCache::CacheEntry const&, struct RTree::Hint*)
        const;
    /**
     * @symbol ?tryGetBiome\@BlendedMultiNoiseBiomeProvider\@\@QEBAPEBVBiome\@\@AEBUGetBiomeOptions\@\@\@Z
     */
    MCAPI class Biome const* tryGetBiome(struct GetBiomeOptions const&) const;
    /**
     * @symbol ??1BlendedMultiNoiseBiomeProvider\@\@QEAA\@XZ
     */
    MCAPI ~BlendedMultiNoiseBiomeProvider();

    // private:
    /**
     * @symbol
     * ?_selectBestFittingBiome\@BlendedMultiNoiseBiomeProvider\@\@AEBAPEBVBiome\@\@AEBUTargetPoint\@\@PEAUHint\@RTree\@\@\@Z
     */
    MCAPI class Biome const* _selectBestFittingBiome(struct TargetPoint const&, struct RTree::Hint*) const;

private:
};
