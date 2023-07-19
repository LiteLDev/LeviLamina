/**
 * @file  NetherFireFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class NetherFireFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERFIREFEATURE
public:
    class NetherFireFeature& operator=(class NetherFireFeature const &) = delete;
    NetherFireFeature(class NetherFireFeature const &) = delete;
    NetherFireFeature() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@NetherFireFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERFIREFEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetherFireFeature();
#endif

};
