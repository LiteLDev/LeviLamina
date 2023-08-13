#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IPacketObserver.h"

class PacketObserver : public ::IPacketObserver {
public:
    // PacketObserver inner types declare
    // clang-format off
    struct PacketStats;
    // clang-format on

    // PacketObserver inner types define
    struct PacketStats {

    public:
        // prevent constructor by default
        PacketStats& operator=(PacketStats const&) = delete;
        PacketStats(PacketStats const&)            = delete;
        PacketStats()                              = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0PacketStats\@PacketObserver\@\@QEAA\@I\@Z
         */
        MCAPI PacketStats(unsigned int);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    PacketObserver& operator=(PacketObserver const&) = delete;
    PacketObserver(PacketObserver const&)            = delete;
    PacketObserver()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?packetSentTo\@PacketObserver\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPacket\@\@I\@Z
     */
    virtual void packetSentTo(class NetworkIdentifier const&, class Packet const&, unsigned int);
    /**
     * @vftbl 2
     * @symbol ?packetReceivedFrom\@PacketObserver\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPacket\@\@I\@Z
     */
    virtual void packetReceivedFrom(class NetworkIdentifier const&, class Packet const&, unsigned int);
    /**
     * @vftbl 3
     * @symbol
     * ?dataSentTo\@PacketObserver\@\@UEAAXAEBVNetworkIdentifier\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual void dataSentTo(class NetworkIdentifier const&, std::string_view);
    /**
     * @vftbl 4
     * @symbol
     * ?dataReceivedFrom\@PacketObserver\@\@UEAAXAEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void dataReceivedFrom(class NetworkIdentifier const&, std::string const&);
    /**
     * @vftbl 5
     * @symbol ?reset\@PacketObserver\@\@UEAAXXZ
     */
    virtual void reset();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKETOBSERVER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PacketObserver();
#endif
    // NOLINTEND
};
