#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RakNetSocket2.h"

namespace RakNet {

class IRNS2_Berkley : public ::RakNet::RakNetSocket2 {

public:
    // prevent constructor by default
    IRNS2_Berkley& operator=(IRNS2_Berkley const&) = delete;
    IRNS2_Berkley(IRNS2_Berkley const&)            = delete;
    IRNS2_Berkley()                                = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKNET_IRNS2_BERKLEY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IRNS2_Berkley();
#endif
    // NOLINTEND
};

}; // namespace RakNet
