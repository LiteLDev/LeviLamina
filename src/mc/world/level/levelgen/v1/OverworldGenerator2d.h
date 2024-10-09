#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/biome/surface/PerlinNoise.h"
#include "mc/world/level/biome/surface/PerlinSimplexNoise.h"
#include "mc/world/level/levelgen/v1/BeardKernel.h"

// auto generated inclusion list
#include "mc/util/MultidimensionalArray.h"
#include "mc/world/level/levelgen/v1/OverworldGenerator.h"

class Biome;

class OverworldGenerator2d : public ::OverworldGenerator {
public:
    std::unique_ptr<PerlinNoise>        mMinLimitPerlinNoise; // this+0x170
    std::unique_ptr<PerlinNoise>        mMaxLimitPerlinNoise; // this+0x178
    std::unique_ptr<PerlinNoise>        mMainPerlinNoise;     // this+0x180
    std::unique_ptr<PerlinSimplexNoise> mSurfaceNoise;        // this+0x188
    std::unique_ptr<PerlinNoise>        mScaleNoise;          // this+0x190
    std::unique_ptr<PerlinNoise>        mDepthNoise;          // this+0x198
    std::unique_ptr<PerlinNoise>        mForestNoise;         // this+0x1A0
    std::unique_ptr<PerlinSimplexNoise> mMaterialAdjNoise;    // this+0x1A8
    BeardKernel*                        mBeardKernel;         // this+0x1B0
    std::unique_ptr<BiomeSource>        mBiomeSource;         // this+0xD9B0

    // prevent constructor by default
    OverworldGenerator2d& operator=(OverworldGenerator2d const&);
    OverworldGenerator2d(OverworldGenerator2d const&);
    OverworldGenerator2d();

public:
    // NOLINTBEGIN
    // vIndex: 55
    virtual void _prepareHeights(
        class BlockVolume&                                                    box,
        class ChunkPos const&                                                 chunkPos,
        class WorldGenCache const&                                            worldGenCache,
        class Aquifer*                                                        aquiferPtr,
        std::function<void(class BlockPos const&, class Block const&, int)>&& tickUpdateFn,
        bool                                                                  factorInBeardsAndShavers,
        std::vector<short>*                                                   ZXheights,
        int                                                                   skipTopN
    );

    // vIndex: 46
    virtual void decorateWorldGenPostProcess(
        class Biome const& biome,
        class LevelChunk&  lc,
        class BlockSource& source,
        class Random&      random
    ) const;

    // vIndex: 42
    virtual class BlockPos findSpawnPosition() const;

    // vIndex: 47
    virtual class Util::MultidimensionalArray<float, 5, 5, 41>
    generateDensityCellsForChunk(class ChunkPos const& chunkPos) const;

    // vIndex: 40
    virtual class BiomeSource const& getBiomeSource() const;

    // vIndex: 48
    virtual int getLevelGenHeight() const;

    // vIndex: 54
    virtual std::unique_ptr<class PerlinSimplexNoise> const& getMaterialAdjNoise() const;

    // vIndex: 53
    virtual class PerlinSimplexNoise const& getSurfaceNoise();

    // vIndex: 49
    virtual std::optional<class XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const;

    MCAPI
    OverworldGenerator2d(class Dimension& dimension, uint seed, bool isLegacyWorld, class Biome const* biomeOverride);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Util::MultidimensionalArray<float, 5, 5, 41>
    _generateDensityCellsForChunk(class ChunkPos const& chunkPos) const;

    // NOLINTEND
};
