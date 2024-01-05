#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/server/ServerInstance.h"

// auto generated inclusion list
#include "mc/network/GameSpecificNetEventCallback.h"

class VanillaServerNetworkHandler : public ::GameSpecificNetEventCallback {
public:
    // prevent constructor by default
    VanillaServerNetworkHandler& operator=(VanillaServerNetworkHandler const&);
    VanillaServerNetworkHandler(VanillaServerNetworkHandler const&);
    VanillaServerNetworkHandler();

    Bedrock::NotNullNonOwnerPtr<ServerNetworkHandler> mBedrockHandler; // this+0x8
    ServerInstance&                                   mServer;         // this+0x18

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1VanillaServerNetworkHandler@@UEAA@XZ
    virtual ~VanillaServerNetworkHandler() = default;

    // vIndex: 1, symbol:
    // ?handle@VanillaServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackClientResponsePacket@@@Z
    virtual void handle(class NetworkIdentifier const& source, class ResourcePackClientResponsePacket const& packet);

    // NOLINTEND
};
