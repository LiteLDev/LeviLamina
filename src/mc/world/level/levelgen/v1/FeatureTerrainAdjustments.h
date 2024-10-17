#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/ChunkPos.h"

class FeatureTerrainAdjustments {
public:
    // FeatureTerrainAdjustments inner types declare
    // clang-format off
    struct Descriptions;
    // clang-format on

    // FeatureTerrainAdjustments inner types define
    struct Descriptions {
    public:
        // prevent constructor by default
        Descriptions& operator=(Descriptions const&);

    public:
        // NOLINTBEGIN
        MCAPI Descriptions();

        MCAPI Descriptions(struct FeatureTerrainAdjustments::Descriptions const& other);

        MCAPI struct FeatureTerrainAdjustments::Descriptions&
        operator=(struct FeatureTerrainAdjustments::Descriptions&& other);

        MCAPI ~Descriptions();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$();

        MCAPI void* ctor$(struct FeatureTerrainAdjustments::Descriptions const& other);

        MCAPI void dtor$();

        // NOLINTEND
    };

    std::unordered_map<ChunkPos, Descriptions> mDescriptionsToProcess; // this+0x0
    std::shared_mutex                          mMutex;                 // this+0x40

public:
    // prevent constructor by default
    FeatureTerrainAdjustments& operator=(FeatureTerrainAdjustments const&);
    FeatureTerrainAdjustments(FeatureTerrainAdjustments const&);
    FeatureTerrainAdjustments();

public:
    // NOLINTBEGIN
    MCAPI struct FeatureTerrainAdjustments::Descriptions at(class ChunkPos const& chunkPos);

    MCAPI void garbageCollectDescriptions();

    MCAPI std::shared_ptr<bool>
          setBeardAndShaver(class BoundingBox const& bb, int deltaY, float minBeardWidth, float maxBeardWidth);

    MCAPI std::shared_ptr<bool> setBeardifier(class BoundingBox const& bb, int deltaY);

    MCAPI std::shared_ptr<bool> setBury(class BoundingBox const& bb);

    MCAPI ~FeatureTerrainAdjustments();

    MCAPI static float calculateContribution(
        struct FeatureTerrainAdjustments::Descriptions const& descriptions,
        class BlockPos const&                                 currentPos,
        float                                                 noiseValue
    );

    MCAPI static struct BeardKernel& getBeardKernel();

    MCAPI static bool shouldDoTerrainAdjustments(struct FeatureTerrainAdjustments::Descriptions const& descriptions);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::shared_ptr<bool> _insertDescriptions(
        std::vector<class ChunkPos> const&                                                          intersectingChunks,
        std::function<void(struct FeatureTerrainAdjustments::Descriptions&, std::weak_ptr<bool>)>&& modifyFn
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    MCAPI static struct BeardKernel& mBeardKernel();

    // NOLINTEND
};
