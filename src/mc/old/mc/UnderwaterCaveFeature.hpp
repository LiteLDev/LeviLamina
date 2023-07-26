/**
 * @file  UnderwaterCaveFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "CaveFeatureUtils.hpp"
#include "CaveFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class UnderwaterCaveFeature.
 *
 */
class UnderwaterCaveFeature : public CaveFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UNDERWATERCAVEFEATURE
public:
    class UnderwaterCaveFeature& operator=(class UnderwaterCaveFeature const &) = delete;
    UnderwaterCaveFeature(class UnderwaterCaveFeature const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~UnderwaterCaveFeature();
    /**
     * @vftbl  5
     * @symbol  ?carveEllipsoidVolume\@UnderwaterCaveFeature\@\@MEBA_NAEAVIBlockWorldGenAPI\@\@AEBUCarverConfiguration\@CaveFeatureUtils\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVVec3\@\@AEBVBoundingBox\@\@MMAEBUCarvingParameters\@4\@\@Z
     */
    virtual bool carveEllipsoidVolume(class IBlockWorldGenAPI &, struct CaveFeatureUtils::CarverConfiguration const &, class Random &, class ChunkPos const &, class Vec3 const &, class BoundingBox const &, float, float, struct CaveFeatureUtils::CarvingParameters const &) const;
    /**
     * @symbol  ??0UnderwaterCaveFeature\@\@QEAA\@XZ
     */
    MCAPI UnderwaterCaveFeature();
    /**
     * @symbol  ?isDiggable\@UnderwaterCaveFeature\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool isDiggable(class Block const &);

};