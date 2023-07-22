/**
 * @file  GrowingPlantFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GrowingPlantFeature.
 *
 */
class GrowingPlantFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROWINGPLANTFEATURE
public:
    class GrowingPlantFeature& operator=(class GrowingPlantFeature const &) = delete;
    GrowingPlantFeature(class GrowingPlantFeature const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GrowingPlantFeature();
    /**
     * @vftbl  1
     * @symbol  ?place\@GrowingPlantFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @symbol  ??0GrowingPlantFeature\@\@QEAA\@XZ
     */
    MCAPI GrowingPlantFeature();

};