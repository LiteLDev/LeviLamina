#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IncomingPacketFilterResult.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetEventCallback.h"
#include "mc/network/OutgoingPacketFilterResult.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/connection/DisconnectionStage.h"

// auto generated forward declare list
// clang-format off
class DisconnectPacket;
class NetworkIdentifier;
class NetworkStackLatencyPacket;
class Packet;
class ResourcePackStackPacket;
class ResourcePacksInfoPacket;
class ServerToClientHandshakePacket;
class StartGamePacket;
struct NetworkIdentifierWithSubId;
// clang-format on

class PacketReplayNetworkHandler : public ::NetEventCallback {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkeb8045;
    ::ll::UntypedStorage<8, 32>  mUnkcda77f;
    ::ll::UntypedStorage<8, 152> mUnk24357c;
    ::ll::UntypedStorage<8, 8>   mUnk1f5293;
    ::ll::UntypedStorage<1, 1>   mUnk45deb5;
    ::ll::UntypedStorage<1, 1>   mUnk517a45;
    ::ll::UntypedStorage<1, 1>   mUnkd6f9c4;
    ::ll::UntypedStorage<8, 64>  mUnkebe8b0;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketReplayNetworkHandler& operator=(PacketReplayNetworkHandler const&);
    PacketReplayNetworkHandler(PacketReplayNetworkHandler const&);
    PacketReplayNetworkHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PacketReplayNetworkHandler() /*override*/ = default;

    // vIndex: 8
    virtual ::IncomingPacketFilterResult
    allowIncomingPacketId(::NetworkIdentifierWithSubId const&, ::MinecraftPacketIds, uint64) /*override*/;

    // vIndex: 9
    virtual ::OutgoingPacketFilterResult
    allowOutgoingPacket(::std::vector<::NetworkIdentifierWithSubId> const&, ::Packet const&) /*override*/;

    // vIndex: 3
    virtual void onUnableToConnect(::Connection::DisconnectFailReason, ::std::string const&) /*override*/;

    // vIndex: 7
    virtual void onDisconnect(
        ::NetworkIdentifier const&,
        ::Connection::DisconnectFailReason const,
        ::Connection::DisconnectionStage const,
        ::std::string const&,
        bool,
        ::std::string const&
    ) /*override*/;

    // vIndex: 231
    virtual void handle(::NetworkIdentifier const&, ::DisconnectPacket const&) /*override*/;

    // vIndex: 71
    virtual void handle(::NetworkIdentifier const&, ::NetworkStackLatencyPacket const&) /*override*/;

    // vIndex: 224
    virtual void handle(::NetworkIdentifier const&, ::ResourcePacksInfoPacket const&) /*override*/;

    // vIndex: 223
    virtual void handle(::NetworkIdentifier const&, ::ResourcePackStackPacket const&) /*override*/;

    // vIndex: 225
    virtual void handle(::NetworkIdentifier const&, ::ServerToClientHandshakePacket const&) /*override*/;

    // vIndex: 216
    virtual void handle(::NetworkIdentifier const&, ::StartGamePacket const&) /*override*/;

    // vIndex: 2
    virtual void onConnect(::NetworkIdentifier const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
