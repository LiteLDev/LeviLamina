#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/TrackerType.h"
#include "mc/network/PacketObserver.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct RakNetStatistics; }
// clang-format on

class NetworkStatistics : public ::PacketObserver {
public:
    // prevent constructor by default
    NetworkStatistics& operator=(NetworkStatistics const&);
    NetworkStatistics(NetworkStatistics const&);
    NetworkStatistics();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1NetworkStatistics@@UEAA@XZ
    virtual ~NetworkStatistics();

    // vIndex: 1, symbol: ?packetSentTo@NetworkStatistics@@UEAAXAEBVNetworkIdentifier@@AEBVPacket@@I@Z
    virtual void packetSentTo(class NetworkIdentifier const& target, class Packet const& packet, uint size);

    // vIndex: 2, symbol: ?packetReceivedFrom@NetworkStatistics@@UEAAXAEBVNetworkIdentifier@@AEBVPacket@@I@Z
    virtual void packetReceivedFrom(class NetworkIdentifier const& source, class Packet const& packet, uint size);

    // vIndex: 3, symbol:
    // ?dataSentTo@NetworkStatistics@@UEAAXAEBVNetworkIdentifier@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void dataSentTo(class NetworkIdentifier const& target, std::string_view data);

    // vIndex: 4, symbol:
    // ?dataReceivedFrom@NetworkStatistics@@UEAAXAEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void dataReceivedFrom(class NetworkIdentifier const& source, std::string const& data);

    // vIndex: 5, symbol: ?reset@NetworkStatistics@@UEAAXXZ
    virtual void reset();

    // symbol: ?getVerboseInfo@NetworkStatistics@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getVerboseInfo() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ??0NetworkStatistics@@AEAA@$$QEAVClientOrServerNetworkSystemRef@@W4TrackerType@@$$QEAV?$function@$$A6A_NAEAURakNetStatistics@RakNet@@@Z@std@@V?$not_null@V?$NonOwnerPointer@VNetworkDebugManager@@@Bedrock@@@gsl@@@Z
    MCAPI
    NetworkStatistics(class ClientOrServerNetworkSystemRef&& network, ::TrackerType type, std::function<bool(struct RakNet::RakNetStatistics&)>&& getRakNetStatsReading, Bedrock::NotNullNonOwnerPtr<class NetworkDebugManager>);

    // symbol: ?_clearCSVStats@NetworkStatistics@@AEAAXXZ
    MCAPI void _clearCSVStats();

    // symbol: ?_initRakNetProfileTracking@NetworkStatistics@@AEAAXXZ
    MCAPI void _initRakNetProfileTracking();

    // NOLINTEND
};
