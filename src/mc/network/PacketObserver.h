#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PacketObserver {
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
        /**
         * @symbol ??0PacketStats\@PacketObserver\@\@QEAA\@I\@Z
         */
        MCAPI PacketStats(unsigned int); // NOLINT
    };

public:
    // prevent constructor by default
    PacketObserver& operator=(PacketObserver const&) = delete;
    PacketObserver(PacketObserver const&)            = delete;
    PacketObserver()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?packetSentTo\@PacketObserver\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPacket\@\@I\@Z
     */
    virtual void packetSentTo(class NetworkIdentifier const&, class Packet const&, unsigned int); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?packetReceivedFrom\@PacketObserver\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVPacket\@\@I\@Z
     */
    virtual void packetReceivedFrom(class NetworkIdentifier const&, class Packet const&, unsigned int); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?reset\@PacketObserver\@\@UEAAXXZ
     */
    virtual void reset(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKETOBSERVER
    /**
     * @symbol
     * ?dataReceivedFrom\@PacketObserver\@\@UEAAXAEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void dataReceivedFrom(class NetworkIdentifier const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?dataSentTo\@PacketObserver\@\@UEAAXAEBVNetworkIdentifier\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void
    dataSentTo(class NetworkIdentifier const&, class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PacketObserver(); // NOLINT
#endif
};
