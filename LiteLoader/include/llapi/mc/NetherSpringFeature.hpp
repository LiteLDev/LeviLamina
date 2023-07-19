/**
 * @file  NetherSpringFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class NetherSpringFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERSPRINGFEATURE
public:
    class NetherSpringFeature& operator=(class NetherSpringFeature const &) = delete;
    NetherSpringFeature(class NetherSpringFeature const &) = delete;
    NetherSpringFeature() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@NetherSpringFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERSPRINGFEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetherSpringFeature();
#endif
    /**
     * @symbol ??0NetherSpringFeature\@\@QEAA\@AEBVBlock\@\@_N\@Z
     */
    MCAPI NetherSpringFeature(class Block const &, bool);

};
