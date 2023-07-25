#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameSpecificNetEventCallback {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMESPECIFICNETEVENTCALLBACK
public:
    GameSpecificNetEventCallback& operator=(GameSpecificNetEventCallback const&) = delete;
    GameSpecificNetEventCallback(GameSpecificNetEventCallback const&)            = delete;
    GameSpecificNetEventCallback()                                               = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?handle\@GameSpecificNetEventCallback\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackClientResponsePacket\@\@\@Z
     */
    virtual void handle(class NetworkIdentifier const&, class ResourcePackClientResponsePacket const&);
};
