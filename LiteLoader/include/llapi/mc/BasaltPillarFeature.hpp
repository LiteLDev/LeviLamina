/**
 * @file  BasaltPillarFeature.hpp
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
 * @brief MC class BasaltPillarFeature.
 *
 */
class BasaltPillarFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASALTPILLARFEATURE
public:
    class BasaltPillarFeature& operator=(class BasaltPillarFeature const &) = delete;
    BasaltPillarFeature(class BasaltPillarFeature const &) = delete;
    BasaltPillarFeature() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@BasaltPillarFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

//private:
    /**
     * @symbol ?_growColumn\@BasaltPillarFeature\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@MAEBVBlock\@\@\@Z
     */
    MCAPI bool _growColumn(class BlockSource &, class BlockPos const &, class Random &, float, class Block const &) const;

private:

};
