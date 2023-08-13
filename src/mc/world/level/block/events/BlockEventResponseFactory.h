#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/EventResponseFactory.h"

class BlockEventResponseFactory : public ::EventResponseFactory {

public:
    // prevent constructor by default
    BlockEventResponseFactory& operator=(BlockEventResponseFactory const&) = delete;
    BlockEventResponseFactory(BlockEventResponseFactory const&)            = delete;
    BlockEventResponseFactory()                                            = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
