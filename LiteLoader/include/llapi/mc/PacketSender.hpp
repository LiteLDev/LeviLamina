/**
 * @file  PacketSender.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PacketSender.
 *
 */
class PacketSender {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKETSENDER
public:
    class PacketSender& operator=(class PacketSender const &) = delete;
    PacketSender(class PacketSender const &) = delete;
    PacketSender() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?send\@LoopbackPacketSender\@\@UEAAXAEAVPacket\@\@\@Z
     */
    virtual void send(class Packet &) = 0;
    /**
     * @vftbl 2
     * @symbol ?sendToServer\@LoopbackPacketSender\@\@UEAAXAEAVPacket\@\@\@Z
     */
    virtual void sendToServer(class Packet &) = 0;
    /**
     * @vftbl 3
     * @symbol ?sendToClient\@LoopbackPacketSender\@\@UEAAXPEBVUserEntityIdentifierComponent\@\@AEBVPacket\@\@\@Z
     */
    virtual void sendToClient(class UserEntityIdentifierComponent const *, class Packet const &) = 0;
    /**
     * @vftbl 4
     * @symbol ?sendToClient\@LoopbackPacketSender\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPacket\@\@W4SubClientId\@\@\@Z
     */
    virtual void sendToClient(class NetworkIdentifier const &, class Packet const &, enum class SubClientId) = 0;
    /**
     * @vftbl 5
     * @symbol ?sendToClients\@LoopbackPacketSender\@\@UEAAXAEBV?$vector\@UNetworkIdentifierWithSubId\@\@V?$allocator\@UNetworkIdentifierWithSubId\@\@\@std\@\@\@std\@\@AEBVPacket\@\@\@Z
     */
    virtual void sendToClients(std::vector<struct NetworkIdentifierWithSubId> const &, class Packet const &) = 0;
    /**
     * @vftbl 6
     * @symbol ?sendBroadcast\@LoopbackPacketSender\@\@UEAAXAEBVPacket\@\@\@Z
     */
    virtual void sendBroadcast(class Packet const &) = 0;
    /**
     * @vftbl 7
     * @symbol ?sendBroadcast\@LoopbackPacketSender\@\@UEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@AEBVPacket\@\@\@Z
     */
    virtual void sendBroadcast(class NetworkIdentifier const &, enum class SubClientId, class Packet const &) = 0;
    /**
     * @vftbl 8
     * @symbol ?flush\@LoopbackPacketSender\@\@UEAAXAEBVNetworkIdentifier\@\@$$QEAV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    virtual void flush(class NetworkIdentifier const &, class std::function<void (void)> &&) = 0;

};
