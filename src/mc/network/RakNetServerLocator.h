#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ServerConnectivityTestResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/raknet/RakNetServerLANVisibility.h"
#include "mc/enums/GameType.h"
#include "mc/enums/LocatorStateChangeRequest.h"
#include "mc/enums/PermissionIPv6.h"
#include "mc/enums/PermissionLAN.h"
#include "mc/network/RakPeerHelper.h"
#include "mc/network/ServerLocator.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RakPeerInterface; }
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
// clang-format on

class RakNetServerLocator : public ::ServerLocator {
public:
    // RakNetServerLocator inner types declare
    // clang-format off
    struct AnnounceServerData;
    struct StateChangeRequestData;
    class SuspendStateData;
    // clang-format on

    // RakNetServerLocator inner types define
    struct AnnounceServerData {
    public:
        // prevent constructor by default
        AnnounceServerData();

    public:
        // NOLINTBEGIN
        MCAPI AnnounceServerData(struct RakNetServerLocator::AnnounceServerData const&);

        MCAPI struct RakNetServerLocator::AnnounceServerData&
        operator=(struct RakNetServerLocator::AnnounceServerData const&);

        MCAPI ~AnnounceServerData();

        // NOLINTEND
    };

    struct StateChangeRequestData {
    public:
        // prevent constructor by default
        StateChangeRequestData& operator=(StateChangeRequestData const&);
        StateChangeRequestData(StateChangeRequestData const&);
        StateChangeRequestData();

    public:
        // NOLINTBEGIN
        MCAPI ~StateChangeRequestData();

        // NOLINTEND
    };

    class SuspendStateData {
    public:
        // prevent constructor by default
        SuspendStateData& operator=(SuspendStateData const&);
        SuspendStateData(SuspendStateData const&);
        SuspendStateData();

    public:
        // NOLINTBEGIN
        MCAPI ~SuspendStateData();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RakNetServerLocator& operator=(RakNetServerLocator const&);
    RakNetServerLocator(RakNetServerLocator const&);
    RakNetServerLocator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RakNetServerLocator();

    // vIndex: 1
    virtual void _onDisable();

    // vIndex: 2
    virtual void _onEnable();

    // vIndex: 3
    virtual void startAnnouncingServer(
        std::string const&,
        std::string const&,
        class Bedrock::NonOwnerPointer<class AppPlatform>,
        ::GameType,
        int,
        int,
        bool,
        bool
    );

    // vIndex: 4
    virtual void stopAnnouncingServer(class Bedrock::NonOwnerPointer<class AppPlatform> appPlatform);

    // vIndex: 5
    virtual void startServerDiscovery(struct PortPair);

    // vIndex: 6
    virtual void stopServerDiscovery();

    // vIndex: 7
    virtual void addCustomServer(class AsynchronousIPResolver const& futureIP, int port);

    // vIndex: 8
    virtual void addCustomServer(std::string const& address, int port);

    // vIndex: 9
    virtual std::vector<struct PingedCompatibleServer> getServerList() const;

    // vIndex: 10
    virtual void clearServerList();

    // vIndex: 11
    virtual void update();

    // vIndex: 12
    virtual float getPingTimeForGUID(std::string const& guid);

    // vIndex: 13
    virtual void checkCanConnectToCustomServerAsync(
        std::string                                         hostIpAddress,
        int                                                 port,
        std::function<void(::ServerConnectivityTestResult)> callback
    );

    MCAPI
    RakNetServerLocator(class RakNetConnector&, class RakPeerHelper::IPSupportInterface& ipInterface, std::vector<std::string>, bool isServer, ::RakNetServerLANVisibility, ::PermissionLAN, ::PermissionIPv6, class Bedrock::NonOwnerPointer<class AppPlatform> const& appPlatform, std::function<std::unique_ptr<class RakNet::RakPeerInterface, void (*)(class RakNet::RakPeerInterface*)>()>);

    MCAPI static bool parseUnconnectedPongPacketData(std::string const& data, std::vector<std::string>& extraData);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _activate();

    MCAPI void _addCustomServerFromIpResolver(class AsynchronousIPResolver const& futureIP, int port);

    MCAPI bool _addCustomServerV4(class AsynchronousIPResolver const& futureIP, int port);

    MCAPI bool _addCustomServerV6(class AsynchronousIPResolver const& futureIP, int port);

    MCAPI void _announceServer(struct RakNetServerLocator::AnnounceServerData const& serverData);

    MCAPI void _enqueueStateChangeRequest(
        ::LocatorStateChangeRequest newState,
        struct RakNetServerLocator::AnnounceServerData,
        struct PortPair
    );

    MCAPI std::string _getHostGuid(std::string const& address, int port);

    MCAPI void _getServerOriginalAddress(std::string& originalAddressToSet, std::string const& ip);

    MCAPI bool _handleUnconnectedPong(
        std::string const&           data,
        struct RakNet::Packet const* p,
        bool                         insertAtBeginning,
        uint64                       readTime
    );

    MCAPI void _initializeBroadcastAddresses();

    MCAPI bool
    _onPongReceive(float& latencyToSet, struct RakNet::RakNetGUID const& guid, uint const& receivedTime, int ipVersion);

    MCAPI bool _pingServerV4(std::string const& address, int port);

    MCAPI bool _pingServerV6(std::string const& address, int port);

    MCAPI void _setPingResponder(struct RakNetServerLocator::AnnounceServerData const& serverData);

    MCAPI void _startAnnouncingServer(struct RakNetServerLocator::AnnounceServerData const&);

    MCAPI void _startServerDiscovery(struct PortPair const&);

    MCAPI void _stopAnnouncingServer();

    MCAPI void _stopServerDiscovery();

    MCAPI void _updateNetwork();

    MCAPI bool _updateQueuedPings();

    // NOLINTEND
};
