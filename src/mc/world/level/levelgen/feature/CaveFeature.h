#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
namespace CaveFeatureUtils { struct CarverConfiguration; }
namespace CaveFeatureUtils { struct CarvingParameters; }
// clang-format on

class CaveFeature : public ::IFeature {
public:
    // CaveFeature inner types declare
    // clang-format off
    class CachedMetaData;
    // clang-format on

    // CaveFeature inner types define
    class CachedMetaData {
    public:
        // CachedMetaData inner types declare
        // clang-format off
        struct CarveEllipsoidParams;
        // clang-format on

        // CachedMetaData inner types define
        struct CarveEllipsoidParams {
        public:
            // prevent constructor by default
            CarveEllipsoidParams& operator=(CarveEllipsoidParams const&);
            CarveEllipsoidParams(CarveEllipsoidParams const&);
            CarveEllipsoidParams();
        };

    public:
        // prevent constructor by default
        CachedMetaData& operator=(CachedMetaData const&);
        CachedMetaData(CachedMetaData const&);
        CachedMetaData();
    };

public:
    // prevent constructor by default
    CaveFeature& operator=(CaveFeature const&);
    CaveFeature(CaveFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CaveFeature();

    // vIndex: 1
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2
    virtual bool isValidPlacement(std::string const& pass);

    // vIndex: 3
    virtual void addRoom(
        class IBlockWorldGenAPI&                                               target,
        struct CaveFeatureUtils::CarverConfiguration const&                    configuration,
        class Random&                                                          random,
        class ChunkPos const&                                                  chunkPos,
        class Vec3 const&                                                      startPos,
        class RenderParams&                                                    renderParams,
        struct CaveFeatureUtils::CarvingParameters const&                      carvingParameters,
        std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const;

    // vIndex: 4
    virtual void addTunnel(
        class IBlockWorldGenAPI&                                               target,
        struct CaveFeatureUtils::CarverConfiguration const&                    configuration,
        class Random&                                                          random,
        class ChunkPos const&                                                  chunkPos,
        class Vec3 const&                                                      startPos,
        float                                                                  thickness,
        float                                                                  horizontalRotation,
        float                                                                  verticalRotation,
        int                                                                    step,
        int                                                                    dist,
        float                                                                  yScale,
        class RenderParams&                                                    renderParams,
        struct CaveFeatureUtils::CarvingParameters const&                      carvingParameters,
        std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const;

    // vIndex: 5
    virtual bool carveEllipsoidVolume(
        class IBlockWorldGenAPI&                            target,
        struct CaveFeatureUtils::CarverConfiguration const& configuration,
        class Random&                                       random,
        class ChunkPos const&                               chunkPos,
        class Vec3 const&                                   startPos,
        class BoundingBox const&                            volume,
        float                                               rad,
        float                                               yRad,
        struct CaveFeatureUtils::CarvingParameters const&   carvingParameters
    ) const;

    // vIndex: 6
    virtual void addFeature(
        class IBlockWorldGenAPI&                                               target,
        class ChunkPos const&                                                  pos,
        class Random&                                                          random,
        class ChunkPos const&                                                  startChunk,
        class RenderParams&                                                    renderParams,
        std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const;

    MCAPI CaveFeature();

    MCAPI float getWidthModifier(class RenderParams& renderParams) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool carveBlock(
        class IBlockWorldGenAPI&                            target,
        struct CaveFeatureUtils::CarverConfiguration const& configuration,
        class BlockPos                                      currentBlockPos,
        bool*                                               hasGrass,
        bool                                                carved,
        class Vec3 const&                                   originalStartPos,
        int                                                 currentYIndex,
        class BlockPos                                      pos
    ) const;

    MCAPI bool carveEllipsoid(
        class IBlockWorldGenAPI&                            target,
        struct CaveFeatureUtils::CarverConfiguration const& configuration,
        class Random&                                       random,
        class ChunkPos const&                               chunkPos,
        class Vec3 const&                                   startPos,
        float                                               horizontalRadius,
        float                                               verticalRadius,
        struct CaveFeatureUtils::CarvingParameters const&   carvingParameters
    ) const;

    MCAPI bool detectWater(class IBlockWorldGenAPI& target, class BoundingBox const& volume) const;

    MCAPI static bool shouldSkipCarving(float yd, float xd_sq, float yd_sq, float zd_sq, float floorLevel);

    // NOLINTEND
};
