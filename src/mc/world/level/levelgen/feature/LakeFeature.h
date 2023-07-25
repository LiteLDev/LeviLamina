#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LakeFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LAKEFEATURE
public:
    LakeFeature& operator=(LakeFeature const&) = delete;
    LakeFeature(LakeFeature const&)            = delete;
    LakeFeature()                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@LakeFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LAKEFEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LakeFeature();
#endif
    /**
     * @symbol ??0LakeFeature\@\@QEAA\@AEBVBlock\@\@V?$optional\@VXoroshiroPositionalRandomFactory\@\@\@std\@\@\@Z
     */
    MCAPI LakeFeature(class Block const&, class std::optional<class XoroshiroPositionalRandomFactory>);

    // private:
    /**
     * @symbol ?_check\@LakeFeature\@\@AEBA_NAEBVBlockPos\@\@V?$span\@_N$0IAA\@\@gsl\@\@\@Z
     */
    MCAPI bool _check(class BlockPos const&, class gsl::span<bool, 2048>) const;

private:
};
