#pragma once

#include "ll/api/utils/RandomUtils.h"

#include "mc/common/wrapper/FeatureRefTraits.h"
#include "mc/common/wrapper/WeakRefT.h"
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
#include "mc/world/level/ChunkBlockPos.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/biome/Biome.h"
#include "mc/world/level/biome/registry/BiomeRegistry.h"
#include "mc/world/level/biome/source/BiomeArea.h"
#include "mc/world/level/biome/source/FixedBiomeSource.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/level/block/BlockVolume.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"
#include "mc/world/level/block/utils/VanillaBlockTypeIds.h"
#include "mc/world/level/chunk/ChunkViewSource.h"
#include "mc/world/level/chunk/LevelChunk.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/OverworldBrightnessRamp.h"
#include "mc/world/level/levelgen/WorldGenerator.h"
#include "mc/world/level/levelgen/feature/BambooFeature.h"
#include "mc/world/level/levelgen/feature/FlowerFeature.h"
#include "mc/world/level/levelgen/feature/LakeFeature.h"
#include "mc/world/level/levelgen/feature/registry/FeatureRegistry.h"
#include "mc/world/level/levelgen/flat/FlatWorldGenerator.h"
#include "mc/world/level/levelgen/flat/FlatWorldGeneratorOptions.h"
#include "mc/world/level/levelgen/structure/StructureFeatureRegistry.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"
#include "mc/world/level/levelgen/v1/Aquifer.h"
#include "mc/world/level/levelgen/v1/NetherGenerator.h"
#include "mc/world/level/levelgen/v1/OverworldGenerator2d.h"
#include "mc/world/level/levelgen/v1/OverworldGeneratorMultinoise.h"
#include "mc/world/level/levelgen/v1/WorldGenCache.h"
#include "mc/world/level/storage/LevelData.h"


class MyFlatWorldGenerator : public FlatWorldGenerator {
public:
    uint mSeed;

public:
    MyFlatWorldGenerator(Dimension& dimension, uint seed, Json::Value value)
    : FlatWorldGenerator(dimension, seed, value),
      mSeed(seed) {}

    ~MyFlatWorldGenerator() {}

public:
    virtual bool postProcess(ChunkViewSource& chunkViewSource) {
        BlockSource blockSource(getLevel(), getDimension(), chunkViewSource, 0, 1, 0);
        Random      random;

        // auto r = this->getLevel()
        //              .getFeatureRegistry()
        //              .lookupByName("minecraft:bamboo_feature")
        //              .tryUnwrap<BambooFeature>();
        // if (!r.has_value()) {
        //     ll::logger.error("Error! tryUnwrap<BambooFeature> returned a null value!");
        //     return true;
        // }

        // r->place(blockSource, {14, -60, 14}, random);

        LakeFeature wlakeFeature(
            BlockTypeRegistry::getDefaultBlockState(VanillaBlockTypeIds::Water, 1),
            XoroshiroPositionalRandomFactory{ll::random_utils::rand<uint64>(), ll::random_utils::rand<uint64>()}
        );
        wlakeFeature.place(blockSource, {14, 0, 14}, random);

        LakeFeature llakeFeature(
            BlockTypeRegistry::getDefaultBlockState(VanillaBlockTypeIds::Lava, 1),
            XoroshiroPositionalRandomFactory{ll::random_utils::rand<uint64>(), ll::random_utils::rand<uint64>()}
        );
        llakeFeature.place(blockSource, {-14, 0, -14}, random);

        return true;
    }
};