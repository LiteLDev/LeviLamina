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
};
