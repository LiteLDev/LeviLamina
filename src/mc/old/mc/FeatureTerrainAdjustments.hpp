/**
 * @file  FeatureTerrainAdjustments.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FeatureTerrainAdjustments.
 *
 */
class FeatureTerrainAdjustments {

#define AFTER_EXTRA
// Add Member There
public:
struct Descriptions {
    Descriptions() = delete;
    Descriptions(Descriptions const&) = delete;
    Descriptions(Descriptions const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATURETERRAINADJUSTMENTS
public:
    class FeatureTerrainAdjustments& operator=(class FeatureTerrainAdjustments const &) = delete;
    FeatureTerrainAdjustments(class FeatureTerrainAdjustments const &) = delete;
    FeatureTerrainAdjustments() = delete;
#endif

public:
    /**
     * @symbol  ?at\@FeatureTerrainAdjustments\@\@QEAA?AUDescriptions\@1\@AEBVChunkPos\@\@\@Z
     */
    MCAPI struct FeatureTerrainAdjustments::Descriptions at(class ChunkPos const &);
    /**
     * @symbol  ?garbageCollectDescriptions\@FeatureTerrainAdjustments\@\@QEAAXXZ
     */
    MCAPI void garbageCollectDescriptions();
    /**
     * @symbol  ?setBeardAndShaver\@FeatureTerrainAdjustments\@\@QEAA?AV?$shared_ptr\@_N\@std\@\@AEBVBoundingBox\@\@HMM\@Z
     */
    MCAPI class std::shared_ptr<bool> setBeardAndShaver(class BoundingBox const &, int, float, float);
    /**
     * @symbol  ?setBeardifier\@FeatureTerrainAdjustments\@\@QEAA?AV?$shared_ptr\@_N\@std\@\@AEBVBoundingBox\@\@H\@Z
     */
    MCAPI class std::shared_ptr<bool> setBeardifier(class BoundingBox const &, int);
    /**
     * @symbol  ?setBury\@FeatureTerrainAdjustments\@\@QEAA?AV?$shared_ptr\@_N\@std\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI class std::shared_ptr<bool> setBury(class BoundingBox const &);
    /**
     * @symbol  ??1FeatureTerrainAdjustments\@\@QEAA\@XZ
     */
    MCAPI ~FeatureTerrainAdjustments();
    /**
     * @symbol  ?calculateContribution\@FeatureTerrainAdjustments\@\@SAMAEBUDescriptions\@1\@AEBVBlockPos\@\@M\@Z
     */
    MCAPI static float calculateContribution(struct FeatureTerrainAdjustments::Descriptions const &, class BlockPos const &, float);
    /**
     * @symbol  ?getBeardKernel\@FeatureTerrainAdjustments\@\@SAAEAUBeardKernel\@\@XZ
     */
    MCAPI static struct BeardKernel & getBeardKernel();
    /**
     * @symbol  ?shouldDoTerrainAdjustments\@FeatureTerrainAdjustments\@\@SA_NAEBUDescriptions\@1\@\@Z
     */
    MCAPI static bool shouldDoTerrainAdjustments(struct FeatureTerrainAdjustments::Descriptions const &);

//private:
    /**
     * @symbol  ?_insertDescriptions\@FeatureTerrainAdjustments\@\@AEAA?AV?$shared_ptr\@_N\@std\@\@AEBV?$vector\@VChunkPos\@\@V?$allocator\@VChunkPos\@\@\@std\@\@\@3\@$$QEAV?$function\@$$A6AXAEAUDescriptions\@FeatureTerrainAdjustments\@\@V?$weak_ptr\@_N\@std\@\@\@Z\@3\@\@Z
     */
    MCAPI class std::shared_ptr<bool> _insertDescriptions(std::vector<class ChunkPos> const &, class std::function<void (struct FeatureTerrainAdjustments::Descriptions &, class std::weak_ptr<bool>)> &&);

private:
    /**
     * @symbol  ?mBeardKernel\@FeatureTerrainAdjustments\@\@0UBeardKernel\@\@A
     */
    MCAPI static struct BeardKernel mBeardKernel;

};