#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    // prevent constructor by default
    FlatWorldGenerator& operator=(FlatWorldGenerator const&);
    FlatWorldGenerator(FlatWorldGenerator const&);
    FlatWorldGenerator();

public:
    // NOLINTBEGIN
    MCVAPI void
    decorateWorldGenLoadChunk(class Biome const&, class LevelChunk&, class BlockVolumeTarget&, class Random&, class ChunkPos const&)
        const;

    MCVAPI void
    decorateWorldGenPostProcess(class Biome const&, class LevelChunk&, class BlockSource&, class Random&) const;

    MCVAPI bool
    findNearestStructureFeature(::StructureFeatureType, class BlockPos const&, class BlockPos&, bool, std::optional<class HashedString>);

    MCVAPI class BlockPos findSpawnPosition() const;

    MCVAPI ::StructureFeatureType findStructureFeatureTypeAt(class BlockPos const&);

    MCVAPI void garbageCollectBlueprints(class buffer_span<class ChunkPos>);

    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const& area, uint scale) const;

    MCVAPI class BiomeSource const& getBiomeSource() const;

    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;

    MCVAPI bool isStructureFeatureTypeAt(class BlockPos const&, ::StructureFeatureType) const;

    MCVAPI void loadChunk(class LevelChunk& lc, bool forceImmediateReplacementDataLoad);

    MCVAPI bool postProcess(class ChunkViewSource& neighborhood);

    MCVAPI void prepareAndComputeHeights(class BlockVolume&, class ChunkPos const&, std::vector<short>&, bool, int);

    MCVAPI void prepareHeights(class BlockVolume&, class ChunkPos const&, bool);

    MCAPI FlatWorldGenerator(class Dimension& dimension, uint, class Json::Value const& generationOptionsJSON);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _generatePrototypeBlockValues(class FlatWorldGeneratorOptions const& layersDesc, short);

    // NOLINTEND
};
