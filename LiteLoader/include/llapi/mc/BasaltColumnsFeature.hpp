/**
 * @file  MC/BasaltColumnsFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~BasaltColumnsFeature();
    /**
     * @hash   -2018463528
     * @vftbl  3
     * @symbol ?place@BasaltColumnsFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

//private:
    /**
     * @hash   1453802955
     * @symbol ?_placeColumnCluster@BasaltColumnsFeature@@AEBA_NAEAVBlockSource@@VBlockPos@@HH@Z
     */
    MCAPI bool _placeColumnCluster(class BlockSource &, class BlockPos, int, int) const;

private:

};