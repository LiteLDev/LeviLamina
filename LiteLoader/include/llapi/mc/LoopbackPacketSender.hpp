/**
 * @file  MC/LoopbackPacketSender.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~LoopbackPacketSender();
    /**
     * @hash   -1842791339
     * @vftbl  1
     * @symbol ?send@LoopbackPacketSender@@UEAAXAEAVPacket@@@Z
     */
    virtual void send(class Packet &);
    /**
     * @hash   -612142441
     * @vftbl  2
     * @symbol ?sendToServer@LoopbackPacketSender@@UEAAXAEAVPacket@@@Z
     */
    virtual void sendToServer(class Packet &);
    /**
     * @hash   -489559193
     * @vftbl  3
     * @symbol ?sendToClient@LoopbackPacketSender@@UEAAXPEBVUserEntityIdentifierComponent@@AEBVPacket@@@Z
     */
    virtual void sendToClient(class UserEntityIdentifierComponent const *, class Packet const &);
    /**
     * @hash   1285532256
     * @vftbl  4
     * @symbol ?sendToClient@LoopbackPacketSender@@UEAAXAEBVNetworkIdentifier@@AEBVPacket@@W4SubClientId@@@Z
     */
    virtual void sendToClient(class NetworkIdentifier const &, class Packet const &, enum SubClientId);
    /**
     * @hash   -869700496
     * @vftbl  5
     * @symbol ?sendToClients@LoopbackPacketSender@@UEAAXAEBV?$vector@UNetworkIdentifierWithSubId@@V?$allocator@UNetworkIdentifierWithSubId@@@std@@@std@@AEBVPacket@@@Z
     */
    virtual void sendToClients(std::vector<struct NetworkIdentifierWithSubId> const &, class Packet const &);
    /**
     * @hash   1717393633
     * @vftbl  6
     * @symbol ?sendBroadcast@LoopbackPacketSender@@UEAAXAEBVPacket@@@Z
     */
    virtual void sendBroadcast(class Packet const &);
    /**
     * @hash   395244639
     * @vftbl  7
     * @symbol ?sendBroadcast@LoopbackPacketSender@@UEAAXAEBVNetworkIdentifier@@W4SubClientId@@AEBVPacket@@@Z
     */
    virtual void sendBroadcast(class NetworkIdentifier const &, enum SubClientId, class Packet const &);
    /**
     * @hash   1337579513
     * @vftbl  8
     * @symbol ?flush@LoopbackPacketSender@@UEAAXAEBVNetworkIdentifier@@$$QEAV?$function@$$A6AXXZ@std@@@Z
     */
    virtual void flush(class NetworkIdentifier const &, class std::function<void (void)> &&);
    /**
     * @hash   1417168738
     * @symbol ??0LoopbackPacketSender@@QEAA@W4SubClientId@@AEAVNetworkHandler@@@Z
     */
    MCAPI LoopbackPacketSender(enum SubClientId, class NetworkHandler &);
    /**
     * @hash   6464852
     * @symbol ?addLoopbackCallback@LoopbackPacketSender@@QEAAXAEAVNetEventCallback@@@Z
     */
    MCAPI void addLoopbackCallback(class NetEventCallback &);
    /**
     * @hash   -605680448
     * @symbol ?removeLoopbackCallback@LoopbackPacketSender@@QEAAXAEAVNetEventCallback@@@Z
     */
    MCAPI void removeLoopbackCallback(class NetEventCallback &);
    /**
     * @hash   658242919
     * @symbol ?setUserList@LoopbackPacketSender@@QEAAXPEBV?$vector@V?$OwnerPtrT@UEntityRefTraits@@@@V?$allocator@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@std@@@Z
     */
    MCAPI void setUserList(std::vector<class OwnerPtrT<struct EntityRefTraits>> const *);

};