#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/CaveFeature.h"

// auto generated forward declare list
// clang-format off
namespace CaveFeatureUtils { struct CarverConfiguration; }
namespace CaveFeatureUtils { struct CarvingParameters; }
// clang-format on

class NetherCaveFeature : public ::CaveFeature {
public:
    // prevent constructor by default
    NetherCaveFeature& operator=(NetherCaveFeature const&);
    NetherCaveFeature(NetherCaveFeature const&);
    NetherCaveFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetherCaveFeature() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 3
    virtual void addRoom(
        class IBlockWorldGenAPI&                                               blocks,
        struct CaveFeatureUtils::CarverConfiguration const&                    configuration,
        class Random&                                                          random,
        class ChunkPos const&                                                  chunkPos,
        class Vec3 const&                                                      room,
        class RenderParams&                                                    renderParams,
        struct CaveFeatureUtils::CarvingParameters const&                      carveValues,
        std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const;

    // vIndex: 4
    virtual void addTunnel(
        class IBlockWorldGenAPI&                                               blocks,
        struct CaveFeatureUtils::CarverConfiguration const&                    configuration,
        class Random&                                                          _random,
        class ChunkPos const&                                                  chunkPos,
        class Vec3 const&                                                      startPos,
        float                                                                  thickness,
        float                                                                  yRot,
        float                                                                  xRot,
        int                                                                    step,
        int                                                                    dist,
        float                                                                  yScale,
        class RenderParams&                                                    renderParams,
        struct CaveFeatureUtils::CarvingParameters const&                      carveValues,
        std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const;

    // vIndex: 6
    virtual void addFeature(
        class IBlockWorldGenAPI&                                               blocks,
        class ChunkPos const&                                                  chunkPos,
        class Random&                                                          random,
        class ChunkPos const&                                                  startChunk,
        class RenderParams&                                                    renderParams,
        std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void addFeature$(
        class IBlockWorldGenAPI&                                               blocks,
        class ChunkPos const&                                                  chunkPos,
        class Random&                                                          random,
        class ChunkPos const&                                                  startChunk,
        class RenderParams&                                                    renderParams,
        std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const;

    MCAPI void addRoom$(
        class IBlockWorldGenAPI&                                               blocks,
        struct CaveFeatureUtils::CarverConfiguration const&                    configuration,
        class Random&                                                          random,
        class ChunkPos const&                                                  chunkPos,
        class Vec3 const&                                                      room,
        class RenderParams&                                                    renderParams,
        struct CaveFeatureUtils::CarvingParameters const&                      carveValues,
        std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const;

    MCAPI void addTunnel$(
        class IBlockWorldGenAPI&                                               blocks,
        struct CaveFeatureUtils::CarverConfiguration const&                    configuration,
        class Random&                                                          _random,
        class ChunkPos const&                                                  chunkPos,
        class Vec3 const&                                                      startPos,
        float                                                                  thickness,
        float                                                                  yRot,
        float                                                                  xRot,
        int                                                                    step,
        int                                                                    dist,
        float                                                                  yScale,
        class RenderParams&                                                    renderParams,
        struct CaveFeatureUtils::CarvingParameters const&                      carveValues,
        std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const;

    MCAPI std::optional<class BlockPos> place$(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // NOLINTEND
};
