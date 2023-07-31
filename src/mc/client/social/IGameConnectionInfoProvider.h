#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class IGameConnectionInfoProvider {

public:
    // prevent constructor by default
    IGameConnectionInfoProvider& operator=(IGameConnectionInfoProvider const&) = delete;
    IGameConnectionInfoProvider(IGameConnectionInfoProvider const&)            = delete;
    IGameConnectionInfoProvider()                                              = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SOCIAL_IGAMECONNECTIONINFOPROVIDER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IGameConnectionInfoProvider();
#endif
    // NOLINTEND
};

}; // namespace Social
