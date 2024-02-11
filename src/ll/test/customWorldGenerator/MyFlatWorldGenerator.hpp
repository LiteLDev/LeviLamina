#pragma once

#include "ll/api/utils/RandomUtils.h"

#include "ll/api/memory/Memory.h"
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
#include "mc/world/level/BlockVolumeTarget.h"
#include "mc/world/level/ChunkBlockPos.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/MolangVariableMap.h"
#include "mc/world/level/WorldBlockTarget.h"
#include "mc/world/level/WorldGenContext.h"
#include "mc/world/level/biome/Biome.h"
#include "mc/world/level/biome/registry/BiomeRegistry.h"
#include "mc/world/level/biome/source/BiomeArea.h"
#include "mc/world/level/biome/source/FixedBiomeSource.h"
#include "mc/world/level/biome/surface/PerlinNoise.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/level/block/BlockVolume.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"
#include "mc/world/level/block/utils/BedrockBlockNames.h"
#include "mc/world/level/block/utils/VanillaBlockTypeIds.h"
#include "mc/world/level/chunk/ChunkViewSource.h"
#include "mc/world/level/chunk/LevelChunk.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/OverworldBrightnessRamp.h"
#include "mc/world/level/levelgen/WorldGenerator.h"
#include "mc/world/level/levelgen/feature/BambooFeature.h"
#include "mc/world/level/levelgen/feature/DesertWellFeature.h"
#include "mc/world/level/levelgen/feature/FlowerFeature.h"
#include "mc/world/level/levelgen/feature/LakeFeature.h"
#include "mc/world/level/levelgen/feature/VanillaTreeFeature.h"
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


class MyFlatWorldGenerator : public WorldGenerator {
public:
    std::vector<Block const*>         mPrototypeBlocks;      // this+0x90
    BlockVolume                       mPrototype;            // this+0xA8
    Biome const*                      mBiome;                // this+0xD0
    std::unique_ptr<FixedBiomeSource> mBiomeSource;          // this+0xD8
    uint                              mSeed;                 // this+0xE0
    int                               mPostProcessCallCount; // this+0xE4

public:
    MyFlatWorldGenerator(Dimension& dimension, uint seed, Json::Value value)
    : WorldGenerator(dimension),
      mSeed(seed),
      mPostProcessCallCount(0) {
        LevelData&                levelData = dimension.getLevel().getLevelData();
        FlatWorldGeneratorOptions generationOptions;

        if (!generationOptions._load(value, levelData)) {
            generationOptions._load(FlatWorldGeneratorOptions::getLayers(levelData), levelData);
        }

        Biome* biome = this->mLevel->getBiomeRegistry().lookupById(generationOptions.mBiomeId);
        if (!biome) {
            biome = this->mLevel->getBiomeRegistry().lookupById(1);
        }

        this->mBiomeSource = std::make_unique<FixedBiomeSource>(*biome);
        this->_generatePrototypeBlockValues(generationOptions, dimension.getMinHeight());
        this->mBiome = biome;
    }

    virtual ~MyFlatWorldGenerator() {}

public:
    virtual bool postProcess(ChunkViewSource& chunkViewSource) {
        // BlockSource blockSource(getLevel(), getDimension(), chunkViewSource, 0, 1, 0);
        // Random      random;

        // if (mPostProcessCallCount < 1) {
        //     mPostProcessCallCount++;
        //     MolangVariableMap MolangVariableMap;
        //     WorldGenContext   worldGenContext;
        //     RenderParams      renderParams;

        //    // VanillaTreeFeature(IFeature)
        //    // BDS1.20.51 CherrySaplingBlock::_growTree
        //    BlockPos cherryTreeGeneratePos{1, 0, 1};
        //    // /*crash*/ renderParams = FeatureHelper::makeFeatureRenderParams(blockSource, cherryTreeGeneratePos,
        //    // MolangVariableMap);
        //    blockSource.setBlockNoUpdate(
        //        cherryTreeGeneratePos.x,
        //        cherryTreeGeneratePos.y,
        //        cherryTreeGeneratePos.z,
        //        BlockTypeRegistry::getDefaultBlockState(BedrockBlockNames::Air, 1)
        //    );
        //    WorldBlockTarget worldBlockTargetForCherryTree(blockSource, worldGenContext);
        //    auto             cherryTree = this->getLevel()
        //                          .getFeatureRegistry()
        //                          .lookupByName("minecraft:cherry_tree_feature")
        //                          .tryUnwrap<VanillaTreeFeature>();
        //    if (!cherryTree.has_value()) {
        //        ll::logger.error("Error! tryUnwrap<VanillaTreeFeature> returned a null value!");
        //        return true;
        //    }
        //    cherryTree->place(worldBlockTargetForCherryTree, cherryTreeGeneratePos, random, renderParams);

        //    //// BambooFeature(Feature)
        //    // auto bamboo =
        //    //
        //    this->getLevel().getFeatureRegistry().lookupByName("minecraft:bamboo_feature").tryUnwrap<BambooFeature>();
        //    // if (!bamboo.has_value()) {
        //    //     ll::logger.error("Error! tryUnwrap<BambooFeature> returned a null value!");
        //    //     return true;
        //    // }

        //    // bamboo->place(blockSource, {24, 0, 24}, random);

        //    //// LakeFeature(Feature)
        //    // LakeFeature wlakeFeature(
        //    //     BlockTypeRegistry::getDefaultBlockState(VanillaBlockTypeIds::Water, 1),
        //    //     XoroshiroPositionalRandomFactory{ll::random_utils::rand<uint64>(),
        //    ll::random_utils::rand<uint64>()}
        //    //);
        //    // wlakeFeature.place(blockSource, {14, 0, 14}, random);

        //    // LakeFeature llakeFeature(
        //    //     BlockTypeRegistry::getDefaultBlockState(VanillaBlockTypeIds::Lava, 1),
        //    //     XoroshiroPositionalRandomFactory{ll::random_utils::rand<uint64>(),
        //    ll::random_utils::rand<uint64>()}
        //    //);
        //    // llakeFeature.place(blockSource, {-14, 0, -14}, random);
        //}
        return true;
    }

public:
    virtual void prepareHeights(BlockVolume&, const ChunkPos&, bool) {}

    virtual void
    prepareAndComputeHeights(BlockVolume&, const ChunkPos&, std::vector<short>&, bool, int) {}

    virtual BiomeArea getBiomeArea(const BoundingBox& area, uint scale) const {
        return mBiomeSource->getBiomeArea(area, scale);
    }

    virtual const BiomeSource& getBiomeSource() const { return *mBiomeSource; }

    virtual WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const {
        return {mPrototype.mWidth, mPrototype.mDepth, mPrototype.mHeight};
    }

    virtual BlockPos findSpawnPosition() const { return {0, 0x7FFF}; }

    virtual void decorateWorldGenLoadChunk(Biome&, LevelChunk&, BlockVolumeTarget&, Random&, const ChunkPos&) const {}

    virtual void decorateWorldGenPostProcess(Biome&, LevelChunk&, BlockSource&, Random&) const {}

public:
    virtual void loadChunk(LevelChunk& levelchunk, bool forceImmediateReplacementDataLoad) {
        levelchunk.setBlockVolume(mPrototype, 0);
        levelchunk.recomputeHeightMap(0);

        if (!levelchunk.getGenerator()) {
            levelchunk._setGenerator(this);
        }

        ChunkLocalNoiseCache chunkLocalNoiseCache;
        mBiomeSource->fillBiomes(levelchunk, chunkLocalNoiseCache);

        levelchunk.setSaved();
        levelchunk.changeState(ChunkState::Generating, ChunkState::Generated);
    }

public:
    void _generatePrototypeBlockValues(FlatWorldGeneratorOptions const& layersDesc, short minHeight) {
        /**
         * @note The following code restoration is incorrect and awaits correction by someone with the opportunity.
         */
        // Block const* defaultBlockState = &BlockTypeRegistry::getDefaultBlockState(BedrockBlockNames::Air, 1);
        //
        // int n = 0;
        //
        // for (const auto& layer : layersDesc.mBlockLayers) {
        //     for (int i = 0; i < layer.mNumLayers; ++i) {
        //         mPrototypeBlocks.push_back(layer.mBlock);
        //     }
        //     n += layer.mNumLayers;
        // }
        // buffer_span_mut<Block const*> buffer;
        // buffer.mBegin = &mPrototypeBlocks[0];
        // buffer.mEnd   = &mPrototypeBlocks.back();
        // BlockVolume blockVolume(buffer, 16, n, 16, *defaultBlockState, minHeight);
        // mPrototype = blockVolume;

        LL_SYMBOL_CALL(
            "?_generatePrototypeBlockValues@FlatWorldGenerator@@AEAAXAEBVFlatWorldGeneratorOptions@@F@Z",
            void,
            MyFlatWorldGenerator*,
            FlatWorldGeneratorOptions const&,
            short
        )
        (this, layersDesc, minHeight);
    }
};