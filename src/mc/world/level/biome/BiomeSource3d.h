#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BiomeSource3d {

public:
    // prevent constructor by default
    BiomeSource3d& operator=(BiomeSource3d const&) = delete;
    BiomeSource3d(BiomeSource3d const&)            = delete;
    BiomeSource3d()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?fillBiomes\@BiomeSource3d\@\@UEBAXAEAVLevelChunk\@\@AEBVChunkLocalNoiseCache\@\@\@Z
     */
    virtual void fillBiomes(class LevelChunk&, class ChunkLocalNoiseCache const&) const;
    /**
     * @vftbl 2
     * @symbol ?getBiomeArea\@BiomeSource3d\@\@UEBA?AVBiomeArea\@\@AEBVBoundingBox\@\@I\@Z
     */
    virtual class BiomeArea getBiomeArea(class BoundingBox const&, unsigned int) const;
    /**
     * @vftbl 3
     * @symbol ?getBiomeArea\@BiomeSource3d\@\@UEBA?AVBiomeArea\@\@AEBVBoundingBox\@\@IAEBUGetBiomeOptions\@\@\@Z
     */
    virtual class BiomeArea getBiomeArea(class BoundingBox const&, unsigned int, struct GetBiomeOptions const&) const;
    /**
     * @vftbl 4
     * @symbol ?containsOnly\@BiomeSource3d\@\@UEBA_NHHHHV?$span\@$$CB_K$0?0\@gsl\@\@\@Z
     */
    virtual bool containsOnly(int, int, int, int, class gsl::span<uint64_t const>) const;
    /**
     * @vftbl 5
     * @symbol ?getBiome\@BiomeSource3d\@\@UEBAPEBVBiome\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Biome const* getBiome(class BlockPos const&) const;
    /**
     * @vftbl 6
     * @symbol ?getBiome\@BiomeSource3d\@\@UEBAPEBVBiome\@\@AEBUGetBiomeOptions\@\@\@Z
     */
    virtual class Biome const* getBiome(struct GetBiomeOptions const&) const;
    /**
     * @vftbl 7
     * @symbol ?getBiome\@BiomeSource3d\@\@UEBAPEBVBiome\@\@HHH\@Z
     */
    virtual class Biome const* getBiome(int, int, int) const;
    // NOLINTEND
};
