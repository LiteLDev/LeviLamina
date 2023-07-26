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
        BuildParameters& operator=(BuildParameters const&) = delete;
        BuildParameters(BuildParameters const&)            = delete;
        BuildParameters()                                  = delete;

    public:
        /**
         * @symbol
         * ??0BuildParameters\@ISurfaceBuilder\@\@QEAA\@AEBVBiome\@\@AEAVRandom\@\@AEAVBlockVolume\@\@AEBVBlockPos\@\@MFAEBV?$unique_ptr\@VPerlinSimplexNoise\@\@U?$default_delete\@VPerlinSimplexNoise\@\@\@std\@\@\@std\@\@W4WaterLevelStrategy\@1\@HAEBVHeightmapWrapper\@\@_N\@Z
         */
        MCAPI BuildParameters(
            class Biome const&,
            class Random&,
            class BlockVolume&,
            class BlockPos const&,
            float,
            short,
            std::unique_ptr<class PerlinSimplexNoise> const&,
            enum class ISurfaceBuilder::WaterLevelStrategy,
            int,
            class HeightmapWrapper const&,
            bool
        ); // NOLINT
    };

public:
    // prevent constructor by default
    ISurfaceBuilder& operator=(ISurfaceBuilder const&) = delete;
    ISurfaceBuilder(ISurfaceBuilder const&)            = delete;
    ISurfaceBuilder()                                  = delete;
};
