/**
 * @file  HugeMushroomFeature.hpp
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
 * @brief MC class HugeMushroomFeature.
 *
 */
class HugeMushroomFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUGEMUSHROOMFEATURE
public:
    class HugeMushroomFeature& operator=(class HugeMushroomFeature const &) = delete;
    HugeMushroomFeature(class HugeMushroomFeature const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~HugeMushroomFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@HugeMushroomFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol  ??0HugeMushroomFeature\@\@QEAA\@XZ
     */
    MCAPI HugeMushroomFeature();
    /**
     * @symbol  ??0HugeMushroomFeature\@\@QEAA\@H\@Z
     */
    MCAPI HugeMushroomFeature(int);
    /**
     * @symbol  ?placeFixed\@HugeMushroomFeature\@\@QEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@HH\@Z
     */
    MCAPI bool placeFixed(class BlockSource &, class BlockPos const &, int, int) const;

//private:
    /**
     * @symbol  ?_canSurvive\@HugeMushroomFeature\@\@AEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool _canSurvive(class Block const &) const;

private:

};