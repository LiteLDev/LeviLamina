#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaServerNetworkHandler {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLASERVERNETWORKHANDLER
public:
    VanillaServerNetworkHandler& operator=(VanillaServerNetworkHandler const&) = delete;
    VanillaServerNetworkHandler(VanillaServerNetworkHandler const&)            = delete;
    VanillaServerNetworkHandler()                                              = delete;
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
     * ?handle\@VanillaServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackClientResponsePacket\@\@\@Z
     */
    virtual void handle(class NetworkIdentifier const&, class ResourcePackClientResponsePacket const&);
};
