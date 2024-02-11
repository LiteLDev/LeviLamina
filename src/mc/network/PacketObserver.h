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
        PacketStats& operator=(PacketStats const&);
        PacketStats(PacketStats const&);
        PacketStats();

    public:
        // NOLINTBEGIN
        // symbol: ??0PacketStats@PacketObserver@@QEAA@I@Z
        MCAPI explicit PacketStats(uint id);

        // symbol: ??YPacketStats@PacketObserver@@QEAAXAEBU01@@Z
        MCAPI void operator+=(struct PacketObserver::PacketStats const& packetStats);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PacketObserver& operator=(PacketObserver const&);
    PacketObserver(PacketObserver const&);
    PacketObserver();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PacketObserver@@UEAA@XZ
    virtual ~PacketObserver();

    // vIndex: 1, symbol: ?packetSentTo@PacketObserver@@UEAAXAEBVNetworkIdentifier@@AEBVPacket@@I@Z
    virtual void packetSentTo(class NetworkIdentifier const&, class Packet const&, uint size);

    // vIndex: 2, symbol: ?packetReceivedFrom@PacketObserver@@UEAAXAEBVNetworkIdentifier@@AEBVPacket@@I@Z
    virtual void packetReceivedFrom(class NetworkIdentifier const&, class Packet const&, uint size);

    // vIndex: 3, symbol:
    // ?dataSentTo@PacketObserver@@UEAAXAEBVNetworkIdentifier@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void dataSentTo(class NetworkIdentifier const&, std::string_view);

    // vIndex: 4, symbol:
    // ?dataReceivedFrom@PacketObserver@@UEAAXAEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void dataReceivedFrom(class NetworkIdentifier const&, std::string const&);

    // vIndex: 5, symbol: ?reset@PacketObserver@@UEAAXXZ
    virtual void reset();

    // NOLINTEND
};
