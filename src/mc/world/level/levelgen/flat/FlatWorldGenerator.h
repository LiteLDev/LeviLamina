#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/biome/source/FixedBiomeSource.h"
#include "mc/world/level/block/BlockVolume.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/world/level/levelgen/WorldGenerator.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FlatWorldGenerator : public ::WorldGenerator {
public:
    std::vector<Block const*>         mPrototypeBlocks; // this+0x188
    BlockVolume                       mPrototype;       // this+0x1A0
    Biome const*                      mBiome;           // this+0x1C8
    std::unique_ptr<FixedBiomeSource> mBiomeSource;     // this+0x1D0

    // prevent constructor by default
    FlatWorldGenerator& operator=(FlatWorldGenerator const&);
    FlatWorldGenerator(FlatWorldGenerator const&);
    FlatWorldGenerator();

public:
    // NOLINTBEGIN
    // vIndex: 37
    virtual void prepareHeights(class BlockVolume&, class ChunkPos const&, bool);

    // vIndex: 38
    virtual void prepareAndComputeHeights(class BlockVolume&, class ChunkPos const&, std::vector<short>&, bool, int);

    // vIndex: 39
    virtual class BiomeArea getBiomeArea(class BoundingBox const&, uint) const;

    // vIndex: 40
    virtual class BiomeSource const& getBiomeSource() const;

    // vIndex: 41
    virtual struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;

    // vIndex: 42
    virtual class BlockPos findSpawnPosition() const;

    // vIndex: 45
    virtual void
    decorateWorldGenLoadChunk(class Biome const&, class LevelChunk&, class BlockVolumeTarget&, class Random&, class ChunkPos const&)
        const;

    // vIndex: 46
    virtual void
    decorateWorldGenPostProcess(class Biome const&, class LevelChunk&, class BlockSource&, class Random&) const;

    // WorldGenerator reload function
    // vIndex: 33
    virtual ::StructureFeatureType findStructureFeatureTypeAt(class BlockPos const&);

    // vIndex: 34
    virtual bool isStructureFeatureTypeAt(class BlockPos const&, ::StructureFeatureType) const;

    // vIndex: 35
    virtual bool
    findNearestStructureFeature(::StructureFeatureType, class BlockPos const&, class BlockPos&, bool, std::optional<HashedString>);

    // vIndex: 36
    virtual void garbageCollectBlueprints(class buffer_span<class ChunkPos>);

    // ChunkSource reload function
    // vIndex: 9
    virtual bool postProcess(class ChunkViewSource& neighborhood);

    // vIndex: 11
    virtual void loadChunk(class LevelChunk& levelchunk, bool forceImmediateReplacementDataLoad);

    MCAPI FlatWorldGenerator(class Dimension& dimension, uint, class Json::Value const& generationOptionsJSON);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _generatePrototypeBlockValues(class FlatWorldGeneratorOptions const& layersDesc, short);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForChunkSource();

    MCAPI static void** $vftableForIPreliminarySurfaceProvider();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void
    decorateWorldGenLoadChunk$(class Biome const&, class LevelChunk&, class BlockVolumeTarget&, class Random&, class ChunkPos const&)
        const;

    MCAPI void
    decorateWorldGenPostProcess$(class Biome const&, class LevelChunk&, class BlockSource&, class Random&) const;

    MCAPI bool
    findNearestStructureFeature$(::StructureFeatureType, class BlockPos const&, class BlockPos&, bool, std::optional<class HashedString>);

    MCAPI class BlockPos findSpawnPosition$() const;

    MCAPI ::StructureFeatureType findStructureFeatureTypeAt$(class BlockPos const&);

    MCAPI void garbageCollectBlueprints$(class buffer_span<class ChunkPos>);

    MCAPI class BiomeArea getBiomeArea$(class BoundingBox const& area, uint scale) const;

    MCAPI class BiomeSource const& getBiomeSource$() const;

    MCAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions$() const;

    MCAPI bool isStructureFeatureTypeAt$(class BlockPos const&, ::StructureFeatureType) const;

    MCAPI void loadChunk$(class LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    MCAPI bool postProcess$(class ChunkViewSource& neighborhood);

    MCAPI void prepareAndComputeHeights$(class BlockVolume&, class ChunkPos const&, std::vector<short>&, bool, int);

    MCAPI void prepareHeights$(class BlockVolume&, class ChunkPos const&, bool);

    // NOLINTEND
};
