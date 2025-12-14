#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/levelgen/feature/CaveFeature.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
namespace CaveFeatureUtils { struct CarverConfiguration; }
namespace CaveFeatureUtils { struct CarvingParameters; }
// clang-format on

class NetherCaveFeature : public ::CaveFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3 const> EMPTY_VEC;
    ::ll::TypedStorage<4, 4, int const>     HELL_CAVE_COUNT_BASE_FACTOR;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;

    virtual void addRoom(
        ::IBlockWorldGenAPI&                                                target,
        ::CaveFeatureUtils::CarverConfiguration const&                      configuration,
        ::Random&                                                           random,
        ::ChunkPos const&                                                   chunkPos,
        ::Vec3 const&                                                       startPos,
        ::RenderParams&                                                     renderParams,
        ::CaveFeatureUtils::CarvingParameters const&                        carvingParameters,
        ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const /*override*/;

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
    ) const /*override*/;

    virtual void addFeature(
        ::IBlockWorldGenAPI&                                                target,
        ::ChunkPos const&                                                   pos,
        ::Random&                                                           random,
        ::ChunkPos const&                                                   startChunk,
        ::RenderParams&                                                     renderParams,
        ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const /*override*/;

    virtual ~NetherCaveFeature() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;

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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
