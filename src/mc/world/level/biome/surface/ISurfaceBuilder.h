#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ISurfaceBuilder {
public:
    // ISurfaceBuilder inner types declare
    // clang-format off
    struct BuildParameters;
    // clang-format on

    // ISurfaceBuilder inner types define
    enum class WaterLevelStrategy {};

    struct BuildParameters {
    public:
        // prevent constructor by default
        BuildParameters& operator=(BuildParameters const&);
        BuildParameters(BuildParameters const&);
        BuildParameters();

    public:
        // NOLINTBEGIN
        // symbol:
        // ??0BuildParameters@ISurfaceBuilder@@QEAA@AEBVBiome@@AEAVRandom@@AEAVBlockVolume@@AEBVBlockPos@@MFAEBV?$unique_ptr@VPerlinSimplexNoise@@U?$default_delete@VPerlinSimplexNoise@@@std@@@std@@W4WaterLevelStrategy@1@HAEBVHeightmapWrapper@@_N@Z
        MCAPI BuildParameters(
            class Biome const&                               biome,
            class Random&                                    random,
            class BlockVolume&                               blocks,
            class BlockPos const&                            pos,
            float                                            depthValue,
            short                                            seaLevel,
            std::unique_ptr<class PerlinSimplexNoise> const& materialAdjNoise,
            ::ISurfaceBuilder::WaterLevelStrategy,
            int,
            class HeightmapWrapper const&,
            bool
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ISurfaceBuilder& operator=(ISurfaceBuilder const&);
    ISurfaceBuilder(ISurfaceBuilder const&);
    ISurfaceBuilder();
};
