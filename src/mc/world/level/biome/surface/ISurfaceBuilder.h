#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/Random.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/biome/Biome.h"
#include "mc/world/level/block/BlockVolume.h"
#include "mc/world/level/chunk/HeightmapWrapper.h"
#include "mc/world/level/levelgen/synth/PerlinSimplexNoise.h"

class ISurfaceBuilder {
public:
    // ISurfaceBuilder inner types declare
    // clang-format off
    struct BuildParameters;
    // clang-format on

    // ISurfaceBuilder inner types define
    enum class WaterLevelStrategy : int {
        LOCAL  = 0,
        GLOBAL = 1,
    };

    struct BuildParameters {
    public:
        Biome const&                              mBiome;
        Random&                                   mRandom;
        BlockVolume&                              mBlocks;
        BlockPos const&                           mPos;
        float                                     mDepthValue;
        short                                     mSeaLevel;
        std::unique_ptr<PerlinSimplexNoise>       mMaterialAdjNoise;
        ISurfaceBuilder::WaterLevelStrategy const mWaterLevelStrategy;
        int const                                 mLowerLimit;
        HeightmapWrapper const&                   mPreWorldGenHeightmap;
        bool const                                mUseCCOrLater;

    public:
        // prevent constructor by default
        BuildParameters& operator=(BuildParameters const&);
        BuildParameters(BuildParameters const&);
        BuildParameters();

    public:
        // NOLINTBEGIN
        MCAPI BuildParameters(
            class Biome const&                               biome,
            class Random&                                    random,
            class BlockVolume&                               blocks,
            class BlockPos const&                            pos,
            float                                            depthValue,
            short                                            seaLevel,
            std::unique_ptr<class PerlinSimplexNoise> const& materialAdjNoise,
            ::ISurfaceBuilder::WaterLevelStrategy            waterLevelStrategy,
            int                                              lowerLimit,
            class HeightmapWrapper const&                    preWorldGenHeightmap,
            bool                                             useCCOrLater
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ISurfaceBuilder& operator=(ISurfaceBuilder const&);
    ISurfaceBuilder(ISurfaceBuilder const&);
    ISurfaceBuilder();

public:
    virtual ~ISurfaceBuilder();
};
