/**
 * @file  MossVegetationFeature.hpp
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
 * @brief MC class MossVegetationFeature.
 *
 */
class MossVegetationFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOSSVEGETATIONFEATURE
public:
    class MossVegetationFeature& operator=(class MossVegetationFeature const &) = delete;
    MossVegetationFeature(class MossVegetationFeature const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MossVegetationFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@MossVegetationFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol  ??0MossVegetationFeature\@\@QEAA\@XZ
     */
    MCAPI MossVegetationFeature();

};