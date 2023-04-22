/**
 * @file  FlowerFeature.hpp
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
 * @brief MC class FlowerFeature.
 *
 */
class FlowerFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOWERFEATURE
public:
    class FlowerFeature& operator=(class FlowerFeature const &) = delete;
    FlowerFeature(class FlowerFeature const &) = delete;
    FlowerFeature() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@FlowerFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLOWERFEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FlowerFeature();
#endif
    /**
     * @symbol ??0FlowerFeature\@\@QEAA\@AEBVBlock\@\@\@Z
     */
    MCAPI FlowerFeature(class Block const &);

//private:
    /**
     * @symbol ?_placeMushroom\@FlowerFeature\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAVRandom\@\@\@Z
     */
    MCAPI bool _placeMushroom(class BlockSource &, class BlockPos const &, class Block const &, class Random &) const;

private:

};
