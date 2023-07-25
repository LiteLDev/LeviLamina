#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class IRNS2_Berkley {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_IRNS2_BERKLEY
public:
    IRNS2_Berkley& operator=(IRNS2_Berkley const&) = delete;
    IRNS2_Berkley(IRNS2_Berkley const&)            = delete;
    IRNS2_Berkley()                                = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKNET_IRNS2_BERKLEY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IRNS2_Berkley();
#endif
};

}; // namespace RakNet
