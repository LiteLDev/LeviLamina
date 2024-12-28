#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class ChunkPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
class Vec3;
namespace CaveFeatureUtils { struct CarverConfiguration; }
namespace CaveFeatureUtils { struct CarvingParameters; }
// clang-format on

class CaveFeature : public ::IFeature {
public:
    // CaveFeature inner types declare
    // clang-format off
    struct CachedMetaData;
    // clang-format on

    // CaveFeature inner types define
    struct CachedMetaData {
    public:
        // CachedMetaData inner types declare
        // clang-format off
        struct CarveEllipsoidParams;
        // clang-format on

        // CachedMetaData inner types define
        struct CarveEllipsoidParams {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 12> mUnk888168;
            ::ll::UntypedStorage<4, 4>  mUnk1b1c1f;
            ::ll::UntypedStorage<4, 4>  mUnk9ffee6;
            ::ll::UntypedStorage<4, 24> mUnke9f983;
            ::ll::UntypedStorage<4, 4>  mUnk79e5d4;
            ::ll::UntypedStorage<4, 4>  mUnke8ce81;
            ::ll::UntypedStorage<4, 4>  mUnkab1357;
            // NOLINTEND

        public:
            // prevent constructor by default
            CarveEllipsoidParams& operator=(CarveEllipsoidParams const&);
            CarveEllipsoidParams(CarveEllipsoidParams const&);
            CarveEllipsoidParams();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk169e4e;
        ::ll::UntypedStorage<8, 24> mUnk6ff166;
        // NOLINTEND

    public:
        // prevent constructor by default
        CachedMetaData& operator=(CachedMetaData const&);
        CachedMetaData(CachedMetaData const&);
        CachedMetaData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkb22c58;
    ::ll::UntypedStorage<8, 216> mUnk517d2c;
    ::ll::UntypedStorage<4, 4>   mUnkc4a96b;
    ::ll::UntypedStorage<4, 4>   mUnk309cc7;
    ::ll::UntypedStorage<4, 8>   mUnkc49fd4;
    ::ll::UntypedStorage<4, 8>   mUnkfcde6a;
    ::ll::UntypedStorage<4, 8>   mUnk7fcf24;
    ::ll::UntypedStorage<4, 8>   mUnkd31917;
    ::ll::UntypedStorage<4, 4>   mUnk981efd;
    ::ll::UntypedStorage<4, 4>   mUnk92ad90;
    ::ll::UntypedStorage<4, 4>   mUnkfe575b;
    ::ll::UntypedStorage<4, 4>   mUnk2cca96;
    ::ll::UntypedStorage<4, 4>   mUnk1f73a7;
    ::ll::UntypedStorage<4, 4>   mUnk1b5461;
    ::ll::UntypedStorage<4, 4>   mUnkc07cc0;
    ::ll::UntypedStorage<4, 4>   mUnk2d5fac;
    ::ll::UntypedStorage<4, 4>   mUnkb74db5;
    ::ll::UntypedStorage<8, 32>  mUnk2b3090;
    ::ll::UntypedStorage<8, 64>  mUnk72d7de;
    ::ll::UntypedStorage<8, 80>  mUnkd9c652;
    ::ll::UntypedStorage<4, 4>   mUnk31fc06;
    ::ll::UntypedStorage<1, 1>   mUnke54e3a;
    // NOLINTEND

public:
    // prevent constructor by default
    CaveFeature& operator=(CaveFeature const&);
    CaveFeature(CaveFeature const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CaveFeature() /*override*/;

    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const
        /*override*/;

    // vIndex: 2
    virtual bool isValidPlacement(::std::string const& pass) /*override*/;

    // vIndex: 4
    virtual void addRoom(
        ::IBlockWorldGenAPI&                                                target,
        ::CaveFeatureUtils::CarverConfiguration const&                      configuration,
        ::Random&                                                           random,
        ::ChunkPos const&                                                   chunkPos,
        ::Vec3 const&                                                       startPos,
        ::RenderParams&                                                     renderParams,
        ::CaveFeatureUtils::CarvingParameters const&                        carvingParameters,
        ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const;

    // vIndex: 5
    virtual void addTunnel(
        ::IBlockWorldGenAPI&                                                target,
        ::CaveFeatureUtils::CarverConfiguration const&                      configuration,
        ::Random&                                                           random,
        ::ChunkPos const&                                                   chunkPos,
        ::Vec3 const&                                                       startPos,
        float                                                               thickness,
        float                                                               horizontalRotation,
        float                                                               verticalRotation,
        int                                                                 step,
        int                                                                 dist,
        float                                                               yScale,
        ::RenderParams&                                                     renderParams,
        ::CaveFeatureUtils::CarvingParameters const&                        carvingParameters,
        ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const;

    // vIndex: 6
    virtual bool carveEllipsoidVolume(
        ::IBlockWorldGenAPI&                           target,
        ::CaveFeatureUtils::CarverConfiguration const& configuration,
        ::Random&                                      random,
        ::ChunkPos const&                              chunkPos,
        ::Vec3 const&                                  startPos,
        ::BoundingBox const&                           volume,
        float                                          rad,
        float                                          yRad,
        ::CaveFeatureUtils::CarvingParameters const&   carvingParameters
    ) const;

    // vIndex: 7
    virtual void addFeature(
        ::IBlockWorldGenAPI&                                                target,
        ::ChunkPos const&                                                   pos,
        ::Random&                                                           random,
        ::ChunkPos const&                                                   startChunk,
        ::RenderParams&                                                     renderParams,
        ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CaveFeature();

    MCAPI bool carveBlock(
        ::IBlockWorldGenAPI&                           target,
        ::CaveFeatureUtils::CarverConfiguration const& configuration,
        ::BlockPos                                     currentBlockPos,
        bool*                                          hasGrass,
        bool                                           carved,
        ::Vec3 const&                                  originalStartPos,
        int                                            currentYIndex,
        ::BlockPos                                     worldPos
    ) const;

    MCAPI bool carveEllipsoid(
        ::IBlockWorldGenAPI&                           target,
        ::CaveFeatureUtils::CarverConfiguration const& configuration,
        ::Random&                                      random,
        ::ChunkPos const&                              chunkPos,
        ::Vec3 const&                                  startPos,
        float                                          horizontalRadius,
        float                                          verticalRadius,
        ::CaveFeatureUtils::CarvingParameters const&   carvingParameters
    ) const;

    MCAPI bool detectWater(::IBlockWorldGenAPI& target, ::BoundingBox const& volume) const;

    MCAPI float getWidthModifier(::RenderParams& renderParams) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool shouldSkipCarving(float yd, float xd_sq, float yd_sq, float zd_sq, float floorLevel);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos>
    $place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const;

    MCAPI bool $isValidPlacement(::std::string const& pass);

    MCAPI void $addRoom(
        ::IBlockWorldGenAPI&                                                target,
        ::CaveFeatureUtils::CarverConfiguration const&                      configuration,
        ::Random&                                                           random,
        ::ChunkPos const&                                                   chunkPos,
        ::Vec3 const&                                                       startPos,
        ::RenderParams&                                                     renderParams,
        ::CaveFeatureUtils::CarvingParameters const&                        carvingParameters,
        ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const;

    MCAPI void $addTunnel(
        ::IBlockWorldGenAPI&                                                target,
        ::CaveFeatureUtils::CarverConfiguration const&                      configuration,
        ::Random&                                                           random,
        ::ChunkPos const&                                                   chunkPos,
        ::Vec3 const&                                                       startPos,
        float                                                               thickness,
        float                                                               horizontalRotation,
        float                                                               verticalRotation,
        int                                                                 step,
        int                                                                 dist,
        float                                                               yScale,
        ::RenderParams&                                                     renderParams,
        ::CaveFeatureUtils::CarvingParameters const&                        carvingParameters,
        ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const;

    MCAPI bool $carveEllipsoidVolume(
        ::IBlockWorldGenAPI&                           target,
        ::CaveFeatureUtils::CarverConfiguration const& configuration,
        ::Random&                                      random,
        ::ChunkPos const&                              chunkPos,
        ::Vec3 const&                                  startPos,
        ::BoundingBox const&                           volume,
        float                                          rad,
        float                                          yRad,
        ::CaveFeatureUtils::CarvingParameters const&   carvingParameters
    ) const;

    MCAPI void $addFeature(
        ::IBlockWorldGenAPI&                                                target,
        ::ChunkPos const&                                                   pos,
        ::Random&                                                           random,
        ::ChunkPos const&                                                   startChunk,
        ::RenderParams&                                                     renderParams,
        ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
