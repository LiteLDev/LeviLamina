#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaServerNetworkHandler {

public:
    // prevent constructor by default
    VanillaServerNetworkHandler& operator=(VanillaServerNetworkHandler const&) = delete;
    VanillaServerNetworkHandler(VanillaServerNetworkHandler const&)            = delete;
    VanillaServerNetworkHandler()                                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?handle\@VanillaServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackClientResponsePacket\@\@\@Z
     */
    virtual void handle(class NetworkIdentifier const&, class ResourcePackClientResponsePacket const&); // NOLINT
};
