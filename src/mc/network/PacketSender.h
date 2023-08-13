#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

class PacketSender : public ::Bedrock::EnableNonOwnerReferences {

public:
    // prevent constructor by default
    PacketSender& operator=(PacketSender const&) = delete;
    PacketSender(PacketSender const&)            = delete;
    PacketSender()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?send\@LoopbackPacketSender\@\@UEAAXAEAVPacket\@\@\@Z
     */
    virtual void send(class Packet&) = 0;
    /**
     * @vftbl 2
     * @symbol ?sendToServer\@LoopbackPacketSender\@\@UEAAXAEAVPacket\@\@\@Z
     */
    virtual void sendToServer(class Packet&) = 0;
    /**
     * @vftbl 3
     * @symbol ?sendToClient\@LoopbackPacketSender\@\@UEAAXPEBVUserEntityIdentifierComponent\@\@AEBVPacket\@\@\@Z
     */
    virtual void sendToClient(class UserEntityIdentifierComponent const*, class Packet const&) = 0;
    /**
     * @vftbl 4
     * @symbol ?sendToClient\@LoopbackPacketSender\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPacket\@\@W4SubClientId\@\@\@Z
     */
    virtual void sendToClient(class NetworkIdentifier const&, class Packet const&, enum class SubClientId) = 0;
    /**
     * @vftbl 5
     * @symbol
     * ?sendToClients\@LoopbackPacketSender\@\@UEAAXAEBV?$vector\@UNetworkIdentifierWithSubId\@\@V?$allocator\@UNetworkIdentifierWithSubId\@\@\@std\@\@\@std\@\@AEBVPacket\@\@\@Z
     */
    virtual void sendToClients(std::vector<struct NetworkIdentifierWithSubId> const&, class Packet const&) = 0;
    /**
     * @vftbl 6
     * @symbol ?sendBroadcast\@LoopbackPacketSender\@\@UEAAXAEBVPacket\@\@\@Z
     */
    virtual void sendBroadcast(class Packet const&) = 0;
    /**
     * @vftbl 7
     * @symbol ?sendBroadcast\@LoopbackPacketSender\@\@UEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@AEBVPacket\@\@\@Z
     */
    virtual void sendBroadcast(class NetworkIdentifier const&, enum class SubClientId, class Packet const&) = 0;
    /**
     * @vftbl 8
     * @symbol ?flush\@LoopbackPacketSender\@\@UEAAXAEBVNetworkIdentifier\@\@$$QEAV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    virtual void flush(class NetworkIdentifier const&, std::function<void(void)>&&) = 0;
    // NOLINTEND
};
