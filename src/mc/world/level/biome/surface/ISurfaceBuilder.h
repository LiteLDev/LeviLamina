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
class LevelSeed64;
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
    struct GlobalParameters;
    struct PerColumnParameters;
    struct SurfaceBuilderParameters;
    // clang-format on

    // ISurfaceBuilder inner types define
    enum class WaterLevelStrategy : int {
        Local  = 0,
        Global = 1,
    };

    struct GlobalParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Random&>                                   mRandom;
        ::ll::TypedStorage<8, 8, ::PerlinSimplexNoise const&>                 mMaterialAdjNoise;
        ::ll::TypedStorage<4, 4, ::ISurfaceBuilder::WaterLevelStrategy const> mWaterLevelStrategy;
        ::ll::TypedStorage<2, 2, short>                                       mSeaLevel;
        ::ll::TypedStorage<1, 1, bool const>                                  mUseCCOrLater;
        // NOLINTEND

    public:
        // prevent constructor by default
        GlobalParameters& operator=(GlobalParameters const&);
        GlobalParameters(GlobalParameters const&);
        GlobalParameters();
    };

    struct PerColumnParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockVolume&>                mBlocks;
        ::ll::TypedStorage<8, 8, ::BlockPos const&>             mPos;
        ::ll::TypedStorage<4, 4, float>                         mDepthValue;
        ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange const> mHeightRange;
        ::ll::TypedStorage<8, 8, ::HeightmapWrapper const&>     mPreWorldGenHeightmap;
        // NOLINTEND

    public:
        // prevent constructor by default
        PerColumnParameters& operator=(PerColumnParameters const&);
        PerColumnParameters(PerColumnParameters const&);
        PerColumnParameters();
    };

    struct SurfaceBuilderParameters {
    public:
        // SurfaceBuilderParameters inner types define
        using GetTemperatureCallback = ::std::function<float(::BlockPos const&, short)>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::SurfaceBuilderData const*>                  mSurfaceBuilderData;
        ::ll::TypedStorage<8, 8, ::ISurfaceBuilder const*>                     mSurfaceBuilder;
        ::ll::TypedStorage<8, 8, ::MountainAttributes const*>                  mMountainAttributes;
        ::ll::TypedStorage<8, 8, ::SurfaceMaterialAdjustmentAttributes const*> mSurfaceMaterialAdjustmentAttributes;
        ::ll::TypedStorage<8, 64, ::std::function<float(::BlockPos const&, short)>> mGetTemperatureCallback;
        // NOLINTEND

    public:
        // prevent constructor by default
        SurfaceBuilderParameters();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI SurfaceBuilderParameters(::Biome const& biome, ::SurfaceBuilderData const* surfaceBuilderData);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::Biome const& biome, ::SurfaceBuilderData const* surfaceBuilderData);
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISurfaceBuilder() = default;

    virtual void initBuilder(::LevelSeed64 levelSeed) = 0;

    virtual void initBiomeSurface(::SurfaceBuilderData& surfaceBuilderData) const = 0;

    virtual bool isBestBuilder(::SurfaceBuilderData const& surfaceBuilderData) const = 0;

    virtual void buildSurfaceAt(
        ::ISurfaceBuilder::GlobalParameters const&         globalParams,
        ::ISurfaceBuilder::SurfaceBuilderParameters const& surfaceBuilderParams,
        ::ISurfaceBuilder::PerColumnParameters const&      columnParams
    ) const = 0;

    virtual bool getUsesDepthValue() const = 0;
    // NOLINTEND
};
