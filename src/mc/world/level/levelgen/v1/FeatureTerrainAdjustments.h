#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        Descriptions& operator=(Descriptions const&) = delete;
        Descriptions()                               = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0Descriptions\@FeatureTerrainAdjustments\@\@QEAA\@AEBU01\@\@Z
         */
        MCAPI Descriptions(struct FeatureTerrainAdjustments::Descriptions const&);
        /**
         * @symbol ??4Descriptions\@FeatureTerrainAdjustments\@\@QEAAAEAU01\@$$QEAU01\@\@Z
         */
        MCAPI struct FeatureTerrainAdjustments::Descriptions&
        operator=(struct FeatureTerrainAdjustments::Descriptions&&);
        /**
         * @symbol ??1Descriptions\@FeatureTerrainAdjustments\@\@QEAA\@XZ
         */
        MCAPI ~Descriptions();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    FeatureTerrainAdjustments& operator=(FeatureTerrainAdjustments const&) = delete;
    FeatureTerrainAdjustments(FeatureTerrainAdjustments const&)            = delete;
    FeatureTerrainAdjustments()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?at\@FeatureTerrainAdjustments\@\@QEAA?AUDescriptions\@1\@AEBVChunkPos\@\@\@Z
     */
    MCAPI struct FeatureTerrainAdjustments::Descriptions at(class ChunkPos const&);
    /**
     * @symbol ?garbageCollectDescriptions\@FeatureTerrainAdjustments\@\@QEAAXXZ
     */
    MCAPI void garbageCollectDescriptions();
    /**
     * @symbol
     * ?setBeardAndShaver\@FeatureTerrainAdjustments\@\@QEAA?AV?$shared_ptr\@_N\@std\@\@AEBVBoundingBox\@\@HMM\@Z
     */
    MCAPI std::shared_ptr<bool> setBeardAndShaver(class BoundingBox const&, int, float, float);
    /**
     * @symbol ?setBeardifier\@FeatureTerrainAdjustments\@\@QEAA?AV?$shared_ptr\@_N\@std\@\@AEBVBoundingBox\@\@H\@Z
     */
    MCAPI std::shared_ptr<bool> setBeardifier(class BoundingBox const&, int);
    /**
     * @symbol ?setBury\@FeatureTerrainAdjustments\@\@QEAA?AV?$shared_ptr\@_N\@std\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI std::shared_ptr<bool> setBury(class BoundingBox const&);
    /**
     * @symbol ??1FeatureTerrainAdjustments\@\@QEAA\@XZ
     */
    MCAPI ~FeatureTerrainAdjustments();
    /**
     * @symbol ?calculateContribution\@FeatureTerrainAdjustments\@\@SAMAEBUDescriptions\@1\@AEBVBlockPos\@\@M\@Z
     */
    MCAPI static float
    calculateContribution(struct FeatureTerrainAdjustments::Descriptions const&, class BlockPos const&, float);
    /**
     * @symbol ?getBeardKernel\@FeatureTerrainAdjustments\@\@SAAEAUBeardKernel\@\@XZ
     */
    MCAPI static struct BeardKernel& getBeardKernel();
    /**
     * @symbol ?shouldDoTerrainAdjustments\@FeatureTerrainAdjustments\@\@SA_NAEBUDescriptions\@1\@\@Z
     */
    MCAPI static bool shouldDoTerrainAdjustments(struct FeatureTerrainAdjustments::Descriptions const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_insertDescriptions\@FeatureTerrainAdjustments\@\@AEAA?AV?$shared_ptr\@_N\@std\@\@AEBV?$vector\@VChunkPos\@\@V?$allocator\@VChunkPos\@\@\@std\@\@\@3\@$$QEAV?$function\@$$A6AXAEAUDescriptions\@FeatureTerrainAdjustments\@\@V?$weak_ptr\@_N\@std\@\@\@Z\@3\@\@Z
     */
    MCAPI std::shared_ptr<bool>
    _insertDescriptions(std::vector<class ChunkPos> const&, std::function<void(struct FeatureTerrainAdjustments::Descriptions&, std::weak_ptr<bool>)>&&);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?mBeardKernel\@FeatureTerrainAdjustments\@\@0UBeardKernel\@\@A
     */
    MCAPI static struct BeardKernel mBeardKernel;
    // NOLINTEND
};
