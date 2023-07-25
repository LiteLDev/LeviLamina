#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class NetherFossilFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERFOSSILFEATURE
public:
    NetherFossilFeature& operator=(NetherFossilFeature const&) = delete;
    NetherFossilFeature(NetherFossilFeature const&)            = delete;
    NetherFossilFeature()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@NetherFossilFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @symbol
     * ??0NetherFossilFeature\@\@QEAA\@$$QEAV?$vector\@PEBVBlock\@\@V?$allocator\@PEBVBlock\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI NetherFossilFeature(std::vector<class Block const*>&&, bool);

    // private:

private:
    /**
     * @symbol
     * ?STRUCTURE_LOCATION_FOSSIL\@NetherFossilFeature\@\@0QBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STRUCTURE_LOCATION_FOSSIL[];
};
