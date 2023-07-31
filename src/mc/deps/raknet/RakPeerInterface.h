#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RakPeerInterface {

public:
    // prevent constructor by default
    RakPeerInterface& operator=(RakPeerInterface const&) = delete;
    RakPeerInterface(RakPeerInterface const&)            = delete;
    RakPeerInterface()                                   = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKNET_RAKPEERINTERFACE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RakPeerInterface();
#endif
    /**
     * @symbol ?DestroyInstance\@RakPeerInterface\@RakNet\@\@SAXPEAV12\@\@Z
     */
    MCAPI static void DestroyInstance(class RakNet::RakPeerInterface*);
    /**
     * @symbol ?GetInstance\@RakPeerInterface\@RakNet\@\@SAPEAV12\@XZ
     */
    MCAPI static class RakNet::RakPeerInterface* GetInstance();
    // NOLINTEND
};

}; // namespace RakNet
