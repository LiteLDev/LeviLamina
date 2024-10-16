#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/PacketObserver.h"
#include "mc/network/TrackerType.h"

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

    MCAPI NetworkStatistics(
        class ServerNetworkSystem&                              server,
        ::TrackerType                                           type,
        std::function<bool(struct RakNet::RakNetStatistics&)>&& getRakNetStatsReading,
        Bedrock::NotNullNonOwnerPtr<class NetworkDebugManager>  networkDebugManager
    );

    MCAPI std::string getVerboseInfo() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI NetworkStatistics(
        class ClientOrServerNetworkSystemRef&&                  network,
        ::TrackerType                                           type,
        std::function<bool(struct RakNet::RakNetStatistics&)>&& getRakNetStatsReading,
        Bedrock::NotNullNonOwnerPtr<class NetworkDebugManager>  networkDebugManager
    );

    MCAPI void _clearCSVStats();

    MCAPI void _initRakNetProfileTracking();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        class ServerNetworkSystem&                              server,
        ::TrackerType                                           type,
        std::function<bool(struct RakNet::RakNetStatistics&)>&& getRakNetStatsReading,
        Bedrock::NotNullNonOwnerPtr<class NetworkDebugManager>  networkDebugManager
    );

    MCAPI void* ctor$(
        class ClientOrServerNetworkSystemRef&&                  network,
        ::TrackerType                                           type,
        std::function<bool(struct RakNet::RakNetStatistics&)>&& getRakNetStatsReading,
        Bedrock::NotNullNonOwnerPtr<class NetworkDebugManager>  networkDebugManager
    );

    MCAPI void dtor$();

    MCAPI void dataReceivedFrom$(class NetworkIdentifier const& source, std::string const& data);

    MCAPI void dataSentTo$(class NetworkIdentifier const& target, std::string_view data);

    MCAPI void packetReceivedFrom$(class NetworkIdentifier const& source, class Packet const& packet, uint size);

    MCAPI void packetSentTo$(class NetworkIdentifier const& target, class Packet const& packet, uint size);

    MCAPI void reset$();

    // NOLINTEND
};
