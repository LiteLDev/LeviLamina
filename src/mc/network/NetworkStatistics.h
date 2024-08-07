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
    // vIndex: 0
    virtual ~NetworkStatistics();

    // vIndex: 1
    virtual void packetSentTo(class NetworkIdentifier const& target, class Packet const& packet, uint size);

    // vIndex: 2
    virtual void packetReceivedFrom(class NetworkIdentifier const& source, class Packet const& packet, uint size);

    // vIndex: 3
    virtual void dataSentTo(class NetworkIdentifier const& target, std::string_view data);

    // vIndex: 4
    virtual void dataReceivedFrom(class NetworkIdentifier const& source, std::string const& data);

    // vIndex: 5
    virtual void reset();

    MCAPI
    NetworkStatistics(class ServerNetworkSystem& network, ::TrackerType type, std::function<bool(struct RakNet::RakNetStatistics&)>&& getRakNetStatsReading, Bedrock::NotNullNonOwnerPtr<class NetworkDebugManager>);

    MCAPI std::string getVerboseInfo() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI
    NetworkStatistics(class ClientOrServerNetworkSystemRef&& network, ::TrackerType type, std::function<bool(struct RakNet::RakNetStatistics&)>&& getRakNetStatsReading, Bedrock::NotNullNonOwnerPtr<class NetworkDebugManager>);

    MCAPI void _clearCSVStats();

    MCAPI void _initRakNetProfileTracking();

    // NOLINTEND
};
