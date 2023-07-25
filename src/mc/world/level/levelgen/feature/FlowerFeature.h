#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class FlowerFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOWERFEATURE
public:
    FlowerFeature& operator=(FlowerFeature const&) = delete;
    FlowerFeature(FlowerFeature const&)            = delete;
    FlowerFeature()                                = delete;
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
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLOWERFEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FlowerFeature();
#endif
    /**
     * @symbol ??0FlowerFeature\@\@QEAA\@AEBVBlock\@\@\@Z
     */
    MCAPI FlowerFeature(class Block const&);

    // private:
    /**
     * @symbol ?_placeMushroom\@FlowerFeature\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAVRandom\@\@\@Z
     */
    MCAPI bool _placeMushroom(class BlockSource&, class BlockPos const&, class Block const&, class Random&) const;

private:
};
