#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BeardAndShaverDescription;
class BeardDescription;
class BlockPos;
class BoundingBox;
class BuryDescription;
class ChunkPos;
struct BeardKernel;
// clang-format on

class FeatureTerrainAdjustments {
public:
    // FeatureTerrainAdjustments inner types declare
    // clang-format off
    struct Descriptions;
    // clang-format on

    // FeatureTerrainAdjustments inner types define
    using TerrainAdjustmentToken = ::std::shared_ptr<bool>;

    struct Descriptions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::BeardDescription, ::std::weak_ptr<bool>>>> mBeardifiers;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::BeardAndShaverDescription, ::std::weak_ptr<bool>>>>
            mBeardAndShavers;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::BuryDescription, ::std::weak_ptr<bool>>>> mBurys;
        // NOLINTEND

    public:
        // prevent constructor by default
        Descriptions& operator=(Descriptions const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Descriptions(::FeatureTerrainAdjustments::Descriptions const&);

        MCAPI ::FeatureTerrainAdjustments::Descriptions& operator=(::FeatureTerrainAdjustments::Descriptions&&);

        MCAPI ~Descriptions();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::FeatureTerrainAdjustments::Descriptions const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::FeatureTerrainAdjustments::Descriptions>>
                                                  mDescriptionsToProcess;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mMutex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<bool> _insertDescriptions(
        ::std::vector<::ChunkPos> const&                                                           intersectingChunks,
        ::std::function<void(::FeatureTerrainAdjustments::Descriptions&, ::std::weak_ptr<bool>)>&& modifyFn
    );

    MCAPI ::FeatureTerrainAdjustments::Descriptions at(::ChunkPos const& chunkPos);

    MCAPI void garbageCollectDescriptions();

    MCAPI ::std::shared_ptr<bool>
    setBeardAndShaver(::BoundingBox const& bb, int deltaY, float minBeardWidth, float maxBeardWidth);

    MCAPI ::std::shared_ptr<bool> setBeardifier(::BoundingBox const& bb, int deltaY);

    MCAPI ::std::shared_ptr<bool> setBury(::BoundingBox const& bb);

    MCAPI ~FeatureTerrainAdjustments();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static float calculateContribution(
        ::FeatureTerrainAdjustments::Descriptions const& descriptions,
        ::BlockPos const&                                currentPos,
        float                                            noiseValue
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BeardKernel& mBeardKernel();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
