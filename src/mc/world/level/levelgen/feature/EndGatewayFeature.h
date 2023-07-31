#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class EndGatewayFeature : public ::Feature {

public:
    // prevent constructor by default
    EndGatewayFeature& operator=(EndGatewayFeature const&) = delete;
    EndGatewayFeature(EndGatewayFeature const&)            = delete;
    EndGatewayFeature()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@EndGatewayFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDGATEWAYFEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EndGatewayFeature();
#endif
    // NOLINTEND
};
