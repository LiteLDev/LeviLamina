/**
 * @file  ScanSurfaceFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScanSurfaceFeature.
 *
 */
class ScanSurfaceFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCANSURFACEFEATURE
public:
    class ScanSurfaceFeature& operator=(class ScanSurfaceFeature const &) = delete;
    ScanSurfaceFeature(class ScanSurfaceFeature const &) = delete;
    ScanSurfaceFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ScanSurfaceFeature();
    /**
     * @vftbl  1
     * @symbol  ?place\@ScanSurfaceFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;

};