#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IAppPlatform {

public:
    // prevent constructor by default
    IAppPlatform& operator=(IAppPlatform const&) = delete;
    IAppPlatform(IAppPlatform const&)            = delete;
    IAppPlatform()                               = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IAPPPLATFORM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IAppPlatform(); // NOLINT
#endif
};
