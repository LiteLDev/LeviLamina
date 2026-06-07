#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/IntRange.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BlockPos;
class BlockVolume;
class HeightmapWrapper;
class PerlinSimplexNoise;
class Random;
class SurfaceBuilderData;
struct MountainAttributes;
struct SurfaceMaterialAdjustmentAttributes;
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
        // BuildParameters inner types define
        using GetTemperatureCallback = ::std::function<float(::BlockPos const&, short)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::SurfaceBuilderData const&>                  mSurfaceBuilderData;
        ::ll::TypedStorage<8, 8, ::MountainAttributes const*>                  mMountainAttributes;
        ::ll::TypedStorage<8, 8, ::SurfaceMaterialAdjustmentAttributes const*> mSurfaceMaterialAdjustmentAttributes;
        ::ll::TypedStorage<8, 64, ::std::function<float(::BlockPos const&, short)>> mGetTemperatureCallback;
        ::ll::TypedStorage<8, 8, ::Random&>                                         mRandom;
        ::ll::TypedStorage<8, 8, ::BlockVolume&>                                    mBlocks;
        ::ll::TypedStorage<8, 8, ::BlockPos const&>                                 mPos;
        ::ll::TypedStorage<4, 4, float>                                             mDepthValue;
        ::ll::TypedStorage<2, 2, short>                                             mSeaLevel;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinSimplexNoise> const&>    mMaterialAdjNoise;
        ::ll::TypedStorage<4, 4, ::ISurfaceBuilder::WaterLevelStrategy const>       mWaterLevelStrategy;
        ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange const>                     mHeightRange;
        ::ll::TypedStorage<8, 8, ::HeightmapWrapper const&>                         mPreWorldGenHeightmap;
        ::ll::TypedStorage<1, 1, bool const>                                        mUseCCOrLater;
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
            ::SurfaceBuilderData const&                    surfaceBuilderData,
            ::Random&                                      random,
            ::BlockVolume&                                 blocks,
            ::BlockPos const&                              pos,
            float                                          depthValue,
            short                                          seaLevel,
            ::std::unique_ptr<::PerlinSimplexNoise> const& materialAdjNoise,
            ::ISurfaceBuilder::WaterLevelStrategy          waterLevelStrategy,
            ::SharedTypes::IntRange                        heightRange,
            ::HeightmapWrapper const&                      preWorldGenHeightmap,
            bool                                           useCCOrLater
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            ::Biome const&                                 biome,
            ::SurfaceBuilderData const&                    surfaceBuilderData,
            ::Random&                                      random,
            ::BlockVolume&                                 blocks,
            ::BlockPos const&                              pos,
            float                                          depthValue,
            short                                          seaLevel,
            ::std::unique_ptr<::PerlinSimplexNoise> const& materialAdjNoise,
            ::ISurfaceBuilder::WaterLevelStrategy          waterLevelStrategy,
            ::SharedTypes::IntRange                        heightRange,
            ::HeightmapWrapper const&                      preWorldGenHeightmap,
            bool                                           useCCOrLater
        );
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISurfaceBuilder() = default;

    virtual void initBuilder(uint levelSeed) = 0;

    virtual void initBiomeSurface(::SurfaceBuilderData& surfaceBuilderData) const = 0;

    virtual bool isBestBuilder(::SurfaceBuilderData const& surfaceBuilderData) const = 0;

    virtual void buildSurfaceAt(::ISurfaceBuilder::BuildParameters const& parameters) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
