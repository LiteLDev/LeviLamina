#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemEventResponseFactory {

public:
    // prevent constructor by default
    ItemEventResponseFactory& operator=(ItemEventResponseFactory const&) = delete;
    ItemEventResponseFactory(ItemEventResponseFactory const&)            = delete;
    ItemEventResponseFactory()                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?initializeFactory\@ItemEventResponseFactory\@\@UEAAXAEBVExperiments\@\@\@Z
     */
    virtual void initializeFactory(class Experiments const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?initSchema\@ItemEventResponseFactory\@\@UEAAXXZ
     */
    virtual void initSchema(); // NOLINT
};
