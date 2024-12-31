#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/CaveFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
class Vec3;
namespace CaveFeatureUtils { struct CarverConfiguration; }
namespace CaveFeatureUtils { struct CarvingParameters; }
// clang-format on

class NetherCaveFeature : public ::CaveFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkab7bcc;
    ::ll::UntypedStorage<4, 4>  mUnk8cb074;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherCaveFeature& operator=(NetherCaveFeature const&);
    NetherCaveFeature(NetherCaveFeature const&);
    NetherCaveFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const
        /*override*/;

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
    ) const /*override*/;

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
    ) const /*override*/;

    // vIndex: 7
    virtual void addFeature(
        ::IBlockWorldGenAPI&                                                target,
        ::ChunkPos const&                                                   pos,
        ::Random&                                                           random,
        ::ChunkPos const&                                                   startChunk,
        ::RenderParams&                                                     renderParams,
        ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations
    ) const /*override*/;

    // vIndex: 0
    virtual ~NetherCaveFeature() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos>
    $place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const;

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
