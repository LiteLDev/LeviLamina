/**
 * @file  BasaltColumnsFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BasaltColumnsFeature.
 *
 */
class BasaltColumnsFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASALTCOLUMNSFEATURE
public:
    class BasaltColumnsFeature& operator=(class BasaltColumnsFeature const &) = delete;
    BasaltColumnsFeature(class BasaltColumnsFeature const &) = delete;
    BasaltColumnsFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BasaltColumnsFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@BasaltColumnsFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

//private:
    /**
     * @symbol  ?_findSurface\@BasaltColumnsFeature\@\@AEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVBlockSource\@\@VBlockPos\@\@HH\@Z
     */
    MCAPI class std::optional<class BlockPos> _findSurface(class BlockSource &, class BlockPos, int, int) const;
    /**
     * @symbol  ?_placeColumnCluster\@BasaltColumnsFeature\@\@AEBA_NAEAVBlockSource\@\@VBlockPos\@\@HH\@Z
     */
    MCAPI bool _placeColumnCluster(class BlockSource &, class BlockPos, int, int) const;

private:

};