/**
 * @file  AzaleaTreeAndRootsFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AzaleaTreeAndRootsFeature.
 *
 */
class AzaleaTreeAndRootsFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AZALEATREEANDROOTSFEATURE
public:
    class AzaleaTreeAndRootsFeature& operator=(class AzaleaTreeAndRootsFeature const &) = delete;
    AzaleaTreeAndRootsFeature(class AzaleaTreeAndRootsFeature const &) = delete;
    AzaleaTreeAndRootsFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AzaleaTreeAndRootsFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@AzaleaTreeAndRootsFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

//private:
    /**
     * @symbol  ?_isLushGroundReplaceable\@AzaleaTreeAndRootsFeature\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _isLushGroundReplaceable(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?_tryPlaceAzaleaTree\@AzaleaTreeAndRootsFeature\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@I\@Z
     */
    MCAPI bool _tryPlaceAzaleaTree(class BlockSource &, class BlockPos const &, class Random &, unsigned int) const;

private:

};