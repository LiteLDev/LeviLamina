#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/enums/SubClientId.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class PacketSender : public ::Bedrock::EnableNonOwnerReferences {
public:
    SubClientId mSenderSubId; // this+0x18

    // prevent constructor by default
    PacketSender& operator=(PacketSender const&);
    PacketSender(PacketSender const&);
    PacketSender();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PacketSender@@UEAA@XZ
    virtual ~PacketSender() = default;

    // vIndex: 1, symbol: ?send@LoopbackPacketSender@@UEAAXAEAVPacket@@@Z
    virtual void send(class Packet& packet) = 0;

    // vIndex: 2, symbol: ?sendToServer@LoopbackPacketSender@@UEAAXAEAVPacket@@@Z
    virtual void sendToServer(class Packet& packet) = 0;

    // vIndex: 3, symbol: ?sendToClient@LoopbackPacketSender@@UEAAXPEBVUserEntityIdentifierComponent@@AEBVPacket@@@Z
    virtual void sendToClient(class UserEntityIdentifierComponent const*, class Packet const& packet) = 0;

    // vIndex: 4, symbol: ?sendToClient@LoopbackPacketSender@@UEAAXAEBVNetworkIdentifier@@AEBVPacket@@W4SubClientId@@@Z
    virtual void sendToClient(class NetworkIdentifier const& id, class Packet const& packet, ::SubClientId subid) = 0;

    // vIndex: 5, symbol:
    // ?sendToClients@LoopbackPacketSender@@UEAAXAEBV?$vector@UNetworkIdentifierWithSubId@@V?$allocator@UNetworkIdentifierWithSubId@@@std@@@std@@AEBVPacket@@@Z
    virtual void
    sendToClients(std::vector<struct NetworkIdentifierWithSubId> const& ids, class Packet const& packet) = 0;

    // vIndex: 6, symbol: ?sendBroadcast@LoopbackPacketSender@@UEAAXAEBVPacket@@@Z
    virtual void sendBroadcast(class Packet const& packet) = 0;

    // vIndex: 7, symbol: ?sendBroadcast@LoopbackPacketSender@@UEAAXAEBVNetworkIdentifier@@W4SubClientId@@AEBVPacket@@@Z
    virtual void
    sendBroadcast(class NetworkIdentifier const& exceptId, ::SubClientId exceptSubid, class Packet const& packet) = 0;

    // vIndex: 8, symbol: ?flush@LoopbackPacketSender@@UEAAXAEBVNetworkIdentifier@@$$QEAV?$function@$$A6AXXZ@std@@@Z
    virtual void flush(class NetworkIdentifier const& id, std::function<void()>&& callback) = 0;

    // NOLINTEND
};
