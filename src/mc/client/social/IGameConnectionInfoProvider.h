#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class IGameConnectionInfoProvider {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOCIAL_IGAMECONNECTIONINFOPROVIDER
public:
    IGameConnectionInfoProvider& operator=(IGameConnectionInfoProvider const&) = delete;
    IGameConnectionInfoProvider(IGameConnectionInfoProvider const&)            = delete;
    IGameConnectionInfoProvider()                                              = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SOCIAL_IGAMECONNECTIONINFOPROVIDER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IGameConnectionInfoProvider();
#endif
};

}; // namespace Social
