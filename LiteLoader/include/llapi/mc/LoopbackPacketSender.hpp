/**
 * @file  LoopbackPacketSender.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LoopbackPacketSender.
 *
 */
class LoopbackPacketSender {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOPBACKPACKETSENDER
public:
    class LoopbackPacketSender& operator=(class LoopbackPacketSender const &) = delete;
    LoopbackPacketSender(class LoopbackPacketSender const &) = delete;
    LoopbackPacketSender() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LoopbackPacketSender();
    /**
     * @hash   -1025664571
     * @vftbl  1
     * @symbol  ?send\@LoopbackPacketSender\@\@UEAAXAEAVPacket\@\@\@Z
     */
    virtual void send(class Packet &);
    /**
     * @hash   205015079
     * @vftbl  2
     * @symbol  ?sendToServer\@LoopbackPacketSender\@\@UEAAXAEAVPacket\@\@\@Z
     */
    virtual void sendToServer(class Packet &);
    /**
     * @hash   327598327
     * @vftbl  3
     * @symbol  ?sendToClient\@LoopbackPacketSender\@\@UEAAXPEBVUserEntityIdentifierComponent\@\@AEBVPacket\@\@\@Z
     */
    virtual void sendToClient(class UserEntityIdentifierComponent const *, class Packet const &);
    /**
     * @hash   2102689776
     * @vftbl  4
     * @symbol  ?sendToClient\@LoopbackPacketSender\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPacket\@\@W4SubClientId\@\@\@Z
     */
    virtual void sendToClient(class NetworkIdentifier const &, class Packet const &, enum class SubClientId);
    /**
     * @hash   -52542976
     * @vftbl  5
     * @symbol  ?sendToClients\@LoopbackPacketSender\@\@UEAAXAEBV?$vector\@UNetworkIdentifierWithSubId\@\@V?$allocator\@UNetworkIdentifierWithSubId\@\@\@std\@\@\@std\@\@AEBVPacket\@\@\@Z
     */
    virtual void sendToClients(std::vector<struct NetworkIdentifierWithSubId> const &, class Packet const &);
    /**
     * @hash   -1760431519
     * @vftbl  6
     * @symbol  ?sendBroadcast\@LoopbackPacketSender\@\@UEAAXAEBVPacket\@\@\@Z
     */
    virtual void sendBroadcast(class Packet const &);
    /**
     * @hash   1212371407
     * @vftbl  7
     * @symbol  ?sendBroadcast\@LoopbackPacketSender\@\@UEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@AEBVPacket\@\@\@Z
     */
    virtual void sendBroadcast(class NetworkIdentifier const &, enum class SubClientId, class Packet const &);
    /**
     * @hash   -2140261015
     * @vftbl  8
     * @symbol  ?flush\@LoopbackPacketSender\@\@UEAAXAEBVNetworkIdentifier\@\@$$QEAV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    virtual void flush(class NetworkIdentifier const &, class std::function<void (void)> &&);
    /**
     * @hash   -2060671790
     * @symbol  ??0LoopbackPacketSender\@\@QEAA\@W4SubClientId\@\@AEAVNetworkHandler\@\@\@Z
     */
    MCAPI LoopbackPacketSender(enum class SubClientId, class NetworkHandler &);
    /**
     * @hash   823591620
     * @symbol  ?addLoopbackCallback\@LoopbackPacketSender\@\@QEAAXAEAVNetEventCallback\@\@\@Z
     */
    MCAPI void addLoopbackCallback(class NetEventCallback &);
    /**
     * @hash   211446320
     * @symbol  ?removeLoopbackCallback\@LoopbackPacketSender\@\@QEAAXAEAVNetEventCallback\@\@\@Z
     */
    MCAPI void removeLoopbackCallback(class NetEventCallback &);
    /**
     * @hash   351090343
     * @symbol  ?setUserList\@LoopbackPacketSender\@\@QEAAXPEBV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setUserList(std::vector<class OwnerPtrT<struct EntityRefTraits>> const *);

};