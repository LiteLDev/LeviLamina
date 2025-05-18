#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/server/ServerInstance.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/GameSpecificNetEventCallback.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class ResourcePackClientResponsePacket;
class ServerInstance;
class ServerNetworkHandler;
// clang-format on

class VanillaServerNetworkHandler : public ::GameSpecificNetEventCallback {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ServerNetworkHandler>> mBedrockHandler;
    ::ll::TypedStorage<8, 8, ::ServerInstance&>                                      mServer;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaServerNetworkHandler& operator=(VanillaServerNetworkHandler const&);
    VanillaServerNetworkHandler(VanillaServerNetworkHandler const&);
    VanillaServerNetworkHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VanillaServerNetworkHandler() /*override*/ = default;

    // vIndex: 1
    virtual void
    handle(::NetworkIdentifier const& source, ::ResourcePackClientResponsePacket const& packet) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $handle(::NetworkIdentifier const& source, ::ResourcePackClientResponsePacket const& packet);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
