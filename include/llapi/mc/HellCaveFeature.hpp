/**
 * @file  HellCaveFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "CaveFeatureUtils.hpp"
#include "CaveFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HellCaveFeature.
 *
 */
class HellCaveFeature : public CaveFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HELLCAVEFEATURE
public:
    class HellCaveFeature& operator=(class HellCaveFeature const &) = delete;
    HellCaveFeature(class HellCaveFeature const &) = delete;
    HellCaveFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~HellCaveFeature();
    /**
     * @vftbl  1
     * @symbol  ?place\@HellCaveFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @vftbl  3
     * @symbol  ?addRoom\@HellCaveFeature\@\@MEBAXAEAVIBlockWorldGenAPI\@\@AEBUCarverConfiguration\@CaveFeatureUtils\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVVec3\@\@AEAVRenderParams\@\@AEBUCarvingParameters\@4\@AEAV?$vector\@UCarveEllipsoidParams\@CachedMetaData\@CaveFeature\@\@V?$allocator\@UCarveEllipsoidParams\@CachedMetaData\@CaveFeature\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void addRoom(class IBlockWorldGenAPI &, struct CaveFeatureUtils::CarverConfiguration const &, class Random &, class ChunkPos const &, class Vec3 const &, class RenderParams &, struct CaveFeatureUtils::CarvingParameters const &, std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams> &) const;
    /**
     * @vftbl  4
     * @symbol  ?addTunnel\@HellCaveFeature\@\@MEBAXAEAVIBlockWorldGenAPI\@\@AEBUCarverConfiguration\@CaveFeatureUtils\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVVec3\@\@MMMHHMAEAVRenderParams\@\@AEBUCarvingParameters\@4\@AEAV?$vector\@UCarveEllipsoidParams\@CachedMetaData\@CaveFeature\@\@V?$allocator\@UCarveEllipsoidParams\@CachedMetaData\@CaveFeature\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void addTunnel(class IBlockWorldGenAPI &, struct CaveFeatureUtils::CarverConfiguration const &, class Random &, class ChunkPos const &, class Vec3 const &, float, float, float, int, int, float, class RenderParams &, struct CaveFeatureUtils::CarvingParameters const &, std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams> &) const;
    /**
     * @vftbl  6
     * @symbol  ?addFeature\@HellCaveFeature\@\@MEBAXAEAVIBlockWorldGenAPI\@\@AEBVChunkPos\@\@AEAVRandom\@\@1AEAVRenderParams\@\@AEAV?$vector\@UCarveEllipsoidParams\@CachedMetaData\@CaveFeature\@\@V?$allocator\@UCarveEllipsoidParams\@CachedMetaData\@CaveFeature\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void addFeature(class IBlockWorldGenAPI &, class ChunkPos const &, class Random &, class ChunkPos const &, class RenderParams &, std::vector<struct CaveFeature::CachedMetaData::CarveEllipsoidParams> &) const;

};