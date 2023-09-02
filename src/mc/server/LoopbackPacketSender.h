#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/enums/SubClientId.h"
#include "mc/network/PacketSender.h"

class LoopbackPacketSender : public ::PacketSender {
public:
    // prevent constructor by default
    LoopbackPacketSender& operator=(LoopbackPacketSender const&) = delete;
    LoopbackPacketSender(LoopbackPacketSender const&)            = delete;
    LoopbackPacketSender()                                       = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?send@LoopbackPacketSender@@UEAAXAEAVPacket@@@Z
    virtual void send(class Packet&);

    // vIndex: 2, symbol: ?sendToServer@LoopbackPacketSender@@UEAAXAEAVPacket@@@Z
    virtual void sendToServer(class Packet&);

    // vIndex: 3, symbol: ?sendToClient@LoopbackPacketSender@@UEAAXPEBVUserEntityIdentifierComponent@@AEBVPacket@@@Z
    virtual void sendToClient(class UserEntityIdentifierComponent const*, class Packet const&);

    // vIndex: 4, symbol: ?sendToClient@LoopbackPacketSender@@UEAAXAEBVNetworkIdentifier@@AEBVPacket@@W4SubClientId@@@Z
    virtual void sendToClient(class NetworkIdentifier const&, class Packet const&, ::SubClientId);

    // vIndex: 5, symbol:
    // ?sendToClients@LoopbackPacketSender@@UEAAXAEBV?$vector@UNetworkIdentifierWithSubId@@V?$allocator@UNetworkIdentifierWithSubId@@@std@@@std@@AEBVPacket@@@Z
    virtual void sendToClients(std::vector<struct NetworkIdentifierWithSubId> const&, class Packet const&);

    // vIndex: 6, symbol: ?sendBroadcast@LoopbackPacketSender@@UEAAXAEBVPacket@@@Z
    virtual void sendBroadcast(class Packet const&);

    // vIndex: 7, symbol: ?sendBroadcast@LoopbackPacketSender@@UEAAXAEBVNetworkIdentifier@@W4SubClientId@@AEBVPacket@@@Z
    virtual void sendBroadcast(class NetworkIdentifier const&, ::SubClientId, class Packet const&);

    // vIndex: 8, symbol: ?flush@LoopbackPacketSender@@UEAAXAEBVNetworkIdentifier@@$$QEAV?$function@$$A6AXXZ@std@@@Z
    virtual void flush(class NetworkIdentifier const&, std::function<void(void)>&&);

    // symbol: ??0LoopbackPacketSender@@QEAA@W4SubClientId@@AEAVNetworkSystem@@@Z
    MCAPI LoopbackPacketSender(::SubClientId, class NetworkSystem&);

    // symbol: ?addLoopbackCallback@LoopbackPacketSender@@QEAAXAEAVNetEventCallback@@@Z
    MCAPI void addLoopbackCallback(class NetEventCallback&);

    // symbol: ?removeLoopbackCallback@LoopbackPacketSender@@QEAAXAEAVNetEventCallback@@@Z
    MCAPI void removeLoopbackCallback(class NetEventCallback&);

    // symbol:
    // ?setUserList@LoopbackPacketSender@@QEAAXPEBV?$vector@V?$OwnerPtrT@UEntityRefTraits@@@@V?$allocator@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@std@@@Z
    MCAPI void setUserList(std::vector<class OwnerPtrT<struct EntityRefTraits>> const*);

    // NOLINTEND
};
