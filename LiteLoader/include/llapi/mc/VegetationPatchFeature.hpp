/**
 * @file  VegetationPatchFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VegetationPatchFeature.
 *
 */
class VegetationPatchFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEGETATIONPATCHFEATURE
public:
    class VegetationPatchFeature& operator=(class VegetationPatchFeature const &) = delete;
    VegetationPatchFeature(class VegetationPatchFeature const &) = delete;
    VegetationPatchFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~VegetationPatchFeature();
    /**
     * @hash   730630881
     * @vftbl  1
     * @symbol  ?place\@VegetationPatchFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;

//private:
    /**
     * @hash   702125212
     * @symbol  ?_isExposedDirection\@VegetationPatchFeature\@\@AEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI bool _isExposedDirection(class IBlockWorldGenAPI &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   1820549820
     * @symbol  ?_placeGroundPatch\@VegetationPatchFeature\@\@AEBA?AV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEAVRandom\@\@AEBVBlockPos\@\@HH\@Z
     */
    MCAPI std::vector<class BlockPos> _placeGroundPatch(class IBlockWorldGenAPI &, class Random &, class BlockPos const &, int, int) const;

private:

};