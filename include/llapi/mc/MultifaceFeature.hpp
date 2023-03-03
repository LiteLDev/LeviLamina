/**
 * @file  MultifaceFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MultifaceFeature.
 *
 */
class MultifaceFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MULTIFACEFEATURE
public:
    class MultifaceFeature& operator=(class MultifaceFeature const &) = delete;
    MultifaceFeature(class MultifaceFeature const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MultifaceFeature();
    /**
     * @vftbl  1
     * @symbol  ?place\@MultifaceFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @symbol  ??0MultifaceFeature\@\@QEAA\@XZ
     */
    MCAPI MultifaceFeature();

//private:
    /**
     * @symbol  ?_placeBlockIfPossible\@MultifaceFeature\@\@AEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEBV?$vector\@EV?$allocator\@E\@std\@\@\@3\@\@Z
     */
    MCAPI class std::optional<class BlockPos> _placeBlockIfPossible(class BlockSource &, class BlockPos const &, class Random &, std::vector<unsigned char> const &) const;
    /**
     * @symbol  ?_getShuffledDirections\@MultifaceFeature\@\@CA?AV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@V23\@\@Z
     */
    MCAPI static std::vector<unsigned char> _getShuffledDirections(std::vector<unsigned char>);

private:

};