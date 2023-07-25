#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IContentTierManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICONTENTTIERMANAGER
public:
    IContentTierManager& operator=(IContentTierManager const&) = delete;
    IContentTierManager(IContentTierManager const&)            = delete;
    IContentTierManager()                                      = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ICONTENTTIERMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IContentTierManager();
#endif
};
