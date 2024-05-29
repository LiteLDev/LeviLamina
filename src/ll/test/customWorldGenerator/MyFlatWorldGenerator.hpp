#pragma once

#include "ll/api/utils/RandomUtils.h"

#include "ll/api/memory/Memory.h"
#include "mc/common/wrapper/WeakRef.h"
#include "mc/deps/core/data/DividedPos2d.h"
#include "mc/deps/core/debug/log/ContentLog.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/json/Reader.h"
#include "mc/deps/json/Value.h"
#include "mc/deps/json/Writer.h"
#include "mc/util/Random.h"
#include "mc/util/random/XoroshiroPositionalRandomFactory.h"
#include "mc/world/level/BlockPalette.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/BlockVolumeTarget.h"
#include "mc/world/level/ChunkBlockPos.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/DimensionConversionData.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/MolangVariableMap.h"
#include "mc/world/level/WorldBlockTarget.h"
#include "mc/world/level/WorldGenContext.h"
#include "mc/world/level/biome/Biome.h"
#include "mc/world/level/biome/VanillaBiomeNames.h"
#include "mc/world/level/biome/registry/BiomeRegistry.h"
#include "mc/world/level/biome/source/BiomeArea.h"
#include "mc/world/level/biome/source/FixedBiomeSource.h"
#include "mc/world/level/biome/surface/PerlinNoise.h"
#include "mc/world/level/biome/surface/PerlinSimplexNoise.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/level/block/BlockVolume.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"
#include "mc/world/level/block/utils/BedrockBlockNames.h"
#include "mc/world/level/block/utils/VanillaBlockTypeIds.h"
#include "mc/world/level/chunk/ChunkGeneratorStructureState.h"
#include "mc/world/level/chunk/ChunkViewSource.h"
#include "mc/world/level/chunk/LevelChunk.h"
#include "mc/world/level/chunk/PostprocessingManager.h"
#include "mc/world/level/chunk/VanillaLevelChunkUpgrade.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/DimensionBrightnessRamp.h"
#include "mc/world/level/dimension/OverworldBrightnessRamp.h"
#include "mc/world/level/dimension/VanillaDimensions.h"
#include "mc/world/level/levelgen/WorldGenerator.h"
#include "mc/world/level/levelgen/feature/BambooFeature.h"
#include "mc/world/level/levelgen/feature/DesertWellFeature.h"
#include "mc/world/level/levelgen/feature/FlowerFeature.h"
#include "mc/world/level/levelgen/feature/LakeFeature.h"
#include "mc/world/level/levelgen/feature/VanillaTreeFeature.h"
#include "mc/world/level/levelgen/feature/gamerefs_feature/FeatureRefTraits.h"
#include "mc/world/level/levelgen/feature/helpers/RenderParams.h"
#include "mc/world/level/levelgen/feature/registry/FeatureRegistry.h"
#include "mc/world/level/levelgen/flat/FlatWorldGenerator.h"
#include "mc/world/level/levelgen/flat/FlatWorldGeneratorOptions.h"
#include "mc/world/level/levelgen/structure/StructureFeatureRegistry.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"
#include "mc/world/level/levelgen/v1/Aquifer.h"
#include "mc/world/level/levelgen/v1/ChunkLocalNoiseCache.h"
#include "mc/world/level/levelgen/v1/NetherGenerator.h"
#include "mc/world/level/levelgen/v1/OverworldGenerator2d.h"
#include "mc/world/level/levelgen/v1/OverworldGeneratorMultinoise.h"
#include "mc/world/level/levelgen/v1/WorldGenCache.h"
#include "mc/world/level/storage/LevelData.h"

#include "mc/world/components/FeatureHelper.h"
#include <numeric>

class MyFlatWorldGenerator : public FlatWorldGenerator {
public:
    Random random;

    MyFlatWorldGenerator(Dimension& dimension, uint seed, Json::Value const& generationOptionsJSON)
    : FlatWorldGenerator(dimension, seed, generationOptionsJSON) {
        random.mRandom.mObject._setSeed(seed);

        mBiome       = getLevel().getBiomeRegistry().lookupByHash(VanillaBiomeNames::Plains);
        mBiomeSource = std::make_unique<FixedBiomeSource>(*mBiome);
    }

    bool postProcess(ChunkViewSource& neighborhood) {
        ChunkPos chunkPos;
        chunkPos.x      = neighborhood.getArea().mBounds.min.x;
        chunkPos.z      = neighborhood.getArea().mBounds.min.z;
        auto levelChunk = neighborhood.getExistingChunk(chunkPos);
        auto seed       = getLevel().getSeed();

        auto lockChunk =
            levelChunk->getDimension().mPostProcessingManager->tryLock(levelChunk->getPosition(), neighborhood);

        if (!lockChunk) {
            return false;
        }
        BlockSource blockSource(getLevel(), neighborhood.getDimension(), neighborhood, false, true, true);
        auto        chunkPosL = levelChunk->getPosition();
        random.mRandom.mObject._setSeed(seed);
        auto one = 2 * (random.nextInt() / 2) + 1;
        auto two = 2 * (random.nextInt() / 2) + 1;
        random.mRandom.mObject._setSeed(seed ^ (chunkPosL.x * one + chunkPosL.z * two));

        WorldGenerator::postProcessStructureFeatures(blockSource, random, chunkPosL.x, chunkPosL.z);
        WorldGenerator::postProcessStructures(blockSource, random, chunkPosL.x, chunkPosL.z);
        return true;
    }

    void loadChunk(LevelChunk& levelchunk, bool /*forceImmediateReplacementDataLoad*/) {
        auto chunkPos = levelchunk.getPosition();

        auto            blockPos = BlockPos(chunkPos, 0);
        DividedPos2d<4> dividedPos2D;
        dividedPos2D.x = (blockPos.x >> 31) - ((blockPos.x >> 31) - blockPos.x) / 4;
        dividedPos2D.z = (blockPos.z >> 31) - ((blockPos.z >> 31) - blockPos.z) / 4;

        WorldGenerator::preProcessStructures(getDimension(), chunkPos, getBiomeSource());
        WorldGenerator::prepareStructureFeatureBlueprints(getDimension(), chunkPos, getBiomeSource(), *this);

        levelchunk.setBlockVolume(mPrototype, 0);

        levelchunk.recomputeHeightMap(0);
        ChunkLocalNoiseCache chunkLocalNoiseCache(dividedPos2D, 8);
        mBiomeSource->fillBiomes(levelchunk, chunkLocalNoiseCache);
        levelchunk.setSaved();
        levelchunk.changeState(ChunkState::Generating, ChunkState::Generated);
    }

    std::optional<short> getPreliminarySurfaceLevel(DividedPos2d<4> /*worldPos*/) const { return -61; }

    void prepareAndComputeHeights(
        BlockVolume& /*box*/,
        ChunkPos const& /*chunkPos*/,
        std::vector<short>& ZXheights,
        bool /*factorInBeardsAndShavers*/,
        int /*skipTopN*/
    ) {
        auto heightMap = mPrototype.computeHeightMap();
        ZXheights.assign(heightMap->begin(), heightMap->end());
    }

    void prepareHeights(BlockVolume& box, ChunkPos const& /*chunkPos*/, bool /*factorInBeardsAndShavers*/) {
        box = mPrototype;
    };

    StructureFeatureType findStructureFeatureTypeAt(BlockPos const& blockPos) {
        return WorldGenerator::findStructureFeatureTypeAt(blockPos);
    };

    bool isStructureFeatureTypeAt(const BlockPos& blockPos, ::StructureFeatureType type) const {
        return WorldGenerator::isStructureFeatureTypeAt(blockPos, type);
    }

    bool findNearestStructureFeature(
        ::StructureFeatureType      type,
        BlockPos const&             blockPos,
        BlockPos&                   blockPos1,
        bool                        mustBeInNewChunks,
        std::optional<HashedString> hash
    ) {
        return WorldGenerator::findNearestStructureFeature(type, blockPos, blockPos1, mustBeInNewChunks, hash);
    };

    void garbageCollectBlueprints(buffer_span<ChunkPos> activeChunks) {
        return WorldGenerator::garbageCollectBlueprints(activeChunks);
    };

    BlockPos findSpawnPosition() const { return {0, 16, 0}; };
};