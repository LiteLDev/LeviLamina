#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockEventResponseFactory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKEVENTRESPONSEFACTORY
public:
    BlockEventResponseFactory& operator=(BlockEventResponseFactory const&) = delete;
    BlockEventResponseFactory(BlockEventResponseFactory const&)            = delete;
    BlockEventResponseFactory()                                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?initializeFactory\@BlockEventResponseFactory\@\@UEAAXAEBVExperiments\@\@\@Z
     */
    virtual void initializeFactory(class Experiments const&);
    /**
     * @vftbl 2
     * @symbol ?initSchema\@BlockEventResponseFactory\@\@UEAAXXZ
     */
    virtual void initSchema();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKEVENTRESPONSEFACTORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockEventResponseFactory();
#endif
};
