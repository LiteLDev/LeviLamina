#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class DripleafFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRIPLEAFFEATURE
public:
    DripleafFeature& operator=(DripleafFeature const&) = delete;
    DripleafFeature(DripleafFeature const&)            = delete;
    DripleafFeature()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@DripleafFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // private:
    /**
     * @symbol ?_placeBigDripleaf\@DripleafFeature\@\@CA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI static bool _placeBigDripleaf(class BlockSource&, class BlockPos const&, class Random&);

private:
};
