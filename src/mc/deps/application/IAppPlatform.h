#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IAppPlatform {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IAPPPLATFORM
public:
    IAppPlatform& operator=(IAppPlatform const&) = delete;
    IAppPlatform(IAppPlatform const&)            = delete;
    IAppPlatform()                               = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IAPPPLATFORM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IAppPlatform();
#endif
};
