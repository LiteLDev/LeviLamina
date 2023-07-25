#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemEventResponseFactory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMEVENTRESPONSEFACTORY
public:
    ItemEventResponseFactory& operator=(ItemEventResponseFactory const&) = delete;
    ItemEventResponseFactory(ItemEventResponseFactory const&)            = delete;
    ItemEventResponseFactory()                                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?initializeFactory\@ItemEventResponseFactory\@\@UEAAXAEBVExperiments\@\@\@Z
     */
    virtual void initializeFactory(class Experiments const&);
    /**
     * @vftbl 2
     * @symbol ?initSchema\@ItemEventResponseFactory\@\@UEAAXXZ
     */
    virtual void initSchema();
};
