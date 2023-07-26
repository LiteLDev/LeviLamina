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
        /**
         * @symbol ??0Descriptions\@FeatureTerrainAdjustments\@\@QEAA\@AEBU01\@\@Z
         */
        MCAPI Descriptions(struct FeatureTerrainAdjustments::Descriptions const&); // NOLINT
        /**
         * @symbol ??4Descriptions\@FeatureTerrainAdjustments\@\@QEAAAEAU01\@$$QEAU01\@\@Z
         */
        MCAPI struct FeatureTerrainAdjustments::Descriptions&
        operator=(struct FeatureTerrainAdjustments::Descriptions&&); // NOLINT
        /**
         * @symbol ??1Descriptions\@FeatureTerrainAdjustments\@\@QEAA\@XZ
         */
        MCAPI ~Descriptions(); // NOLINT
    };

public:
    // prevent constructor by default
    FeatureTerrainAdjustments& operator=(FeatureTerrainAdjustments const&) = delete;
    FeatureTerrainAdjustments(FeatureTerrainAdjustments const&)            = delete;
    FeatureTerrainAdjustments()                                            = delete;

public:
    /**
     * @symbol ?at\@FeatureTerrainAdjustments\@\@QEAA?AUDescriptions\@1\@AEBVChunkPos\@\@\@Z
     */
    MCAPI struct FeatureTerrainAdjustments::Descriptions at(class ChunkPos const&); // NOLINT
    /**
     * @symbol ?garbageCollectDescriptions\@FeatureTerrainAdjustments\@\@QEAAXXZ
     */
    MCAPI void garbageCollectDescriptions(); // NOLINT
    /**
     * @symbol
     * ?setBeardAndShaver\@FeatureTerrainAdjustments\@\@QEAA?AV?$shared_ptr\@_N\@std\@\@AEBVBoundingBox\@\@HMM\@Z
     */
    MCAPI class std::shared_ptr<bool> setBeardAndShaver(class BoundingBox const&, int, float, float); // NOLINT
    /**
     * @symbol ?setBeardifier\@FeatureTerrainAdjustments\@\@QEAA?AV?$shared_ptr\@_N\@std\@\@AEBVBoundingBox\@\@H\@Z
     */
    MCAPI class std::shared_ptr<bool> setBeardifier(class BoundingBox const&, int); // NOLINT
    /**
     * @symbol ?setBury\@FeatureTerrainAdjustments\@\@QEAA?AV?$shared_ptr\@_N\@std\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI class std::shared_ptr<bool> setBury(class BoundingBox const&); // NOLINT
    /**
     * @symbol ??1FeatureTerrainAdjustments\@\@QEAA\@XZ
     */
    MCAPI ~FeatureTerrainAdjustments(); // NOLINT
    /**
     * @symbol ?calculateContribution\@FeatureTerrainAdjustments\@\@SAMAEBUDescriptions\@1\@AEBVBlockPos\@\@M\@Z
     */
    MCAPI static float calculateContribution(
        struct FeatureTerrainAdjustments::Descriptions const&,
        class BlockPos const&,
        float
    ); // NOLINT
    /**
     * @symbol ?getBeardKernel\@FeatureTerrainAdjustments\@\@SAAEAUBeardKernel\@\@XZ
     */
    MCAPI static struct BeardKernel& getBeardKernel(); // NOLINT
    /**
     * @symbol ?shouldDoTerrainAdjustments\@FeatureTerrainAdjustments\@\@SA_NAEBUDescriptions\@1\@\@Z
     */
    MCAPI static bool shouldDoTerrainAdjustments(struct FeatureTerrainAdjustments::Descriptions const&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_insertDescriptions\@FeatureTerrainAdjustments\@\@AEAA?AV?$shared_ptr\@_N\@std\@\@AEBV?$vector\@VChunkPos\@\@V?$allocator\@VChunkPos\@\@\@std\@\@\@3\@$$QEAV?$function\@$$A6AXAEAUDescriptions\@FeatureTerrainAdjustments\@\@V?$weak_ptr\@_N\@std\@\@\@Z\@3\@\@Z
     */
    MCAPI class std::shared_ptr<bool>
    _insertDescriptions(std::vector<class ChunkPos> const&, class std::function<void(struct FeatureTerrainAdjustments::Descriptions&, class std::weak_ptr<bool>)>&&); // NOLINT

private:
    /**
     * @symbol ?mBeardKernel\@FeatureTerrainAdjustments\@\@0UBeardKernel\@\@A
     */
    MCAPI static struct BeardKernel mBeardKernel; // NOLINT
};
