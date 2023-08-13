#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/GameSpecificNetEventCallback.h"

class VanillaServerNetworkHandler : public ::GameSpecificNetEventCallback {

public:
    // prevent constructor by default
    VanillaServerNetworkHandler& operator=(VanillaServerNetworkHandler const&) = delete;
    VanillaServerNetworkHandler(VanillaServerNetworkHandler const&)            = delete;
    VanillaServerNetworkHandler()                                              = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
