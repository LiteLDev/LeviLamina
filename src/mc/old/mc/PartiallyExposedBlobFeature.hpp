/**
 * @file  PartiallyExposedBlobFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PartiallyExposedBlobFeature.
 *
 */
class PartiallyExposedBlobFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARTIALLYEXPOSEDBLOBFEATURE
public:
    class PartiallyExposedBlobFeature& operator=(class PartiallyExposedBlobFeature const &) = delete;
    PartiallyExposedBlobFeature(class PartiallyExposedBlobFeature const &) = delete;
    PartiallyExposedBlobFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PartiallyExposedBlobFeature();
    /**
     * @vftbl  1
     * @symbol  ?place\@PartiallyExposedBlobFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;

//private:
    /**
     * @symbol  ?isWaterOrAir\@PartiallyExposedBlobFeature\@\@CA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool isWaterOrAir(class IBlockWorldGenAPI const &, class BlockPos const &);

private:

};