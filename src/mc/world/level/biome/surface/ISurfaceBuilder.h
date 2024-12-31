#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BlockPos;
class BlockVolume;
class HeightmapWrapper;
class PerlinSimplexNoise;
class Random;
// clang-format on

class ISurfaceBuilder {
public:
    // ISurfaceBuilder inner types declare
    // clang-format off
    struct BuildParameters;
    // clang-format on

    // ISurfaceBuilder inner types define
    enum class WaterLevelStrategy : int {
        Local  = 0,
        Global = 1,
    };

    struct BuildParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Biome const&>                                 mBiome;
        ::ll::TypedStorage<8, 8, ::Random&>                                      mRandom;
        ::ll::TypedStorage<8, 8, ::BlockVolume&>                                 mBlocks;
        ::ll::TypedStorage<8, 8, ::BlockPos const&>                              mPos;
        ::ll::TypedStorage<4, 4, float>                                          mDepthValue;
        ::ll::TypedStorage<2, 2, short>                                          mSeaLevel;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinSimplexNoise> const&> mMaterialAdjNoise;
        ::ll::TypedStorage<4, 4, ::ISurfaceBuilder::WaterLevelStrategy const>    mWaterLevelStrategy;
        ::ll::TypedStorage<4, 4, int const>                                      mLowerLimit;
        ::ll::TypedStorage<8, 8, ::HeightmapWrapper const&>                      mPreWorldGenHeightmap;
        ::ll::TypedStorage<1, 1, bool const>                                     mUseCCOrLater;
        // NOLINTEND

    public:
        // prevent constructor by default
        BuildParameters& operator=(BuildParameters const&);
        BuildParameters(BuildParameters const&);
        BuildParameters();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI BuildParameters(
            ::Biome const&                                 biome,
            ::Random&                                      random,
            ::BlockVolume&                                 blocks,
            ::BlockPos const&                              pos,
            float                                          depthValue,
            short                                          seaLevel,
            ::std::unique_ptr<::PerlinSimplexNoise> const& materialAdjNoise,
            ::ISurfaceBuilder::WaterLevelStrategy          waterLevelStrategy,
            int                                            lowerLimit,
            ::HeightmapWrapper const&                      preWorldGenHeightmap,
            bool                                           useCCOrLater
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            ::Biome const&                                 biome,
            ::Random&                                      random,
            ::BlockVolume&                                 blocks,
            ::BlockPos const&                              pos,
            float                                          depthValue,
            short                                          seaLevel,
            ::std::unique_ptr<::PerlinSimplexNoise> const& materialAdjNoise,
            ::ISurfaceBuilder::WaterLevelStrategy          waterLevelStrategy,
            int                                            lowerLimit,
            ::HeightmapWrapper const&                      preWorldGenHeightmap,
            bool                                           useCCOrLater
        );
        // NOLINTEND
    };

public:
    // prevent constructor by default
    ISurfaceBuilder& operator=(ISurfaceBuilder const&);
    ISurfaceBuilder(ISurfaceBuilder const&);
    ISurfaceBuilder();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISurfaceBuilder() = default;

    // vIndex: 1
    virtual void init(::Biome&, uint) = 0;

    // vIndex: 2
    virtual void buildSurfaceAt(::ISurfaceBuilder::BuildParameters const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
