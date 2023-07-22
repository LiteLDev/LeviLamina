/**
 * @file  SurfaceRelativeThresholdFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SurfaceRelativeThresholdFeature.
 *
 */
class SurfaceRelativeThresholdFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SURFACERELATIVETHRESHOLDFEATURE
public:
    class SurfaceRelativeThresholdFeature& operator=(class SurfaceRelativeThresholdFeature const &) = delete;
    SurfaceRelativeThresholdFeature(class SurfaceRelativeThresholdFeature const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SurfaceRelativeThresholdFeature();
    /**
     * @vftbl  1
     * @symbol  ?place\@SurfaceRelativeThresholdFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @symbol  ??0SurfaceRelativeThresholdFeature\@\@QEAA\@XZ
     */
    MCAPI SurfaceRelativeThresholdFeature();

};