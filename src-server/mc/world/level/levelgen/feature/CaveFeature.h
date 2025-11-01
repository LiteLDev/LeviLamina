#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/util/FloatRange.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/level/levelgen/feature/IFeature.h"
#include "mc/world/level/levelgen/feature/cave_feature_utils/CarvingParameters.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BoundingBox;
class ChunkPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
namespace CaveFeatureUtils { struct CarverConfiguration; }
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
            ::ll::TypedStorage<4, 12, ::Vec3 const> mStartPos;
            ::ll::TypedStorage<4, 4, float const> mHorizontalRadius;
            ::ll::TypedStorage<4, 4, float const> mVerticalRadius;
            ::ll::TypedStorage<4, 24, ::CaveFeatureUtils::CarvingParameters const> mCarvingParameters;
            ::ll::TypedStorage<4, 4, int const> mCurrentStep;
            ::ll::TypedStorage<4, 4, int const> mTotalSteps;
            ::ll::TypedStorage<4, 4, float const> mThickness;
            // NOLINTEND
        
        };
        
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::std::atomic<uint>> mUseCount;
        ::ll::TypedStorage<8, 24, ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>> mCarveEllipsoidParamsVector;
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*> mFillWithBlock;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mWidthMod;
    ::ll::TypedStorage<4, 4, int> mSkipCarveChance;
    ::ll::TypedStorage<4, 4, int> mHeightLimit;
    ::ll::TypedStorage<4, 8, ::FloatRange> mYScale;
    ::ll::TypedStorage<4, 8, ::FloatRange> mHorizontalRadiusMultiplier;
    ::ll::TypedStorage<4, 8, ::FloatRange> mVerticalRadiusMultiplier;
    ::ll::TypedStorage<4, 8, ::FloatRange> mFloorLevel;
    ::ll::TypedStorage<8, 32, ::std::string const> VALID_PASS;
    ::ll::TypedStorage<4, 4, float const> X_DAMPENING_FACTOR;
    ::ll::TypedStorage<4, 4, float const> Y_DAMPENING_FACTOR;
    ::ll::TypedStorage<4, 4, float const> STEEP_FLATTENING_FACTOR;
    ::ll::TypedStorage<4, 4, float const> FLATTENING_FACTOR;
    ::ll::TypedStorage<4, 4, int const> STEEP_CHANCE;
    ::ll::TypedStorage<4, 4, int const> TUNNEL_SKIP_CHANCE;
    ::ll::TypedStorage<4, 4, int const> CAVE_COUNT_BASE_FACTOR;
    ::ll::TypedStorage<4, 4, int const> ROOM_CARVE_CHANCE;
    ::ll::TypedStorage<4, 4, int const> MAX_NUM_TUNNELS_ADDED_ON_ROOM_CARVE;
    ::ll::TypedStorage<1, 1, bool> mCacheEnabled;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::unordered_map<int, ::std::shared_ptr<::CaveFeature::CachedMetaData>>>> mCachedMetaDataMap;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mCacheMutex;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>> mPlaceCount;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CaveFeature() /*override*/ = default;

    // vIndex: 1
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;

    // vIndex: 2
    virtual bool isValidPlacement(::std::string const& pass) /*override*/;

    // vIndex: 4
    virtual void addRoom(::IBlockWorldGenAPI& target, ::CaveFeatureUtils::CarverConfiguration const& configuration, ::Random& random, ::ChunkPos const& chunkPos, ::Vec3 const& startPos, ::RenderParams& renderParams, ::CaveFeatureUtils::CarvingParameters const& carvingParameters, ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations) const;

    // vIndex: 5
    virtual void addTunnel(::IBlockWorldGenAPI& target, ::CaveFeatureUtils::CarverConfiguration const& configuration, ::Random& random, ::ChunkPos const& chunkPos, ::Vec3 const& startPos, float thickness, float horizontalRotation, float verticalRotation, int step, int dist, float yScale, ::RenderParams& renderParams, ::CaveFeatureUtils::CarvingParameters const& carvingParameters, ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations) const;

    // vIndex: 6
    virtual bool carveEllipsoidVolume(::IBlockWorldGenAPI& target, ::CaveFeatureUtils::CarverConfiguration const& configuration, ::Random&, ::ChunkPos const& chunkPos, ::Vec3 const& startPos, ::BoundingBox const& volume, float rad, float yRad, ::CaveFeatureUtils::CarvingParameters const& carvingParameters) const;

    // vIndex: 7
    virtual void addFeature(::IBlockWorldGenAPI& target, ::ChunkPos const& pos, ::Random& random, ::ChunkPos const& startChunk, ::RenderParams& renderParams, ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CaveFeature();

    MCAPI bool carveBlock(::IBlockWorldGenAPI& target, ::CaveFeatureUtils::CarverConfiguration const& configuration, ::BlockPos currentBlockPos, bool carved, ::Vec3 const& originalStartPos, int currentYIndex, ::BlockPos worldPos) const;

    MCAPI bool carveEllipsoid(::IBlockWorldGenAPI& target, ::CaveFeatureUtils::CarverConfiguration const& configuration, ::Random& random, ::ChunkPos const& chunkPos, ::Vec3 const& startPos, float horizontalRadius, float verticalRadius, ::CaveFeatureUtils::CarvingParameters const& carvingParameters) const;

    MCAPI bool detectWater(::IBlockWorldGenAPI& target, ::BoundingBox const& volume) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;

    MCAPI bool $isValidPlacement(::std::string const& pass);

    MCAPI void $addRoom(::IBlockWorldGenAPI& target, ::CaveFeatureUtils::CarverConfiguration const& configuration, ::Random& random, ::ChunkPos const& chunkPos, ::Vec3 const& startPos, ::RenderParams& renderParams, ::CaveFeatureUtils::CarvingParameters const& carvingParameters, ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations) const;

    MCAPI void $addTunnel(::IBlockWorldGenAPI& target, ::CaveFeatureUtils::CarverConfiguration const& configuration, ::Random& random, ::ChunkPos const& chunkPos, ::Vec3 const& startPos, float thickness, float horizontalRotation, float verticalRotation, int step, int dist, float yScale, ::RenderParams& renderParams, ::CaveFeatureUtils::CarvingParameters const& carvingParameters, ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations) const;

    MCAPI bool $carveEllipsoidVolume(::IBlockWorldGenAPI& target, ::CaveFeatureUtils::CarverConfiguration const& configuration, ::Random&, ::ChunkPos const& chunkPos, ::Vec3 const& startPos, ::BoundingBox const& volume, float rad, float yRad, ::CaveFeatureUtils::CarvingParameters const& carvingParameters) const;

    MCAPI void $addFeature(::IBlockWorldGenAPI& target, ::ChunkPos const& pos, ::Random& random, ::ChunkPos const& startChunk, ::RenderParams& renderParams, ::std::vector<::CaveFeature::CachedMetaData::CarveEllipsoidParams>& carveParamsOperations) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
