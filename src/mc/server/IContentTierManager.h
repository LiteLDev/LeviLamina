#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IContentTierManager {

public:
    // prevent constructor by default
    IContentTierManager& operator=(IContentTierManager const&) = delete;
    IContentTierManager(IContentTierManager const&)            = delete;
    IContentTierManager()                                      = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ICONTENTTIERMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IContentTierManager(); // NOLINT
#endif
};
