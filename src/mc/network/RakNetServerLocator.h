#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/LocatorStateChangeRequest.h"
#include "mc/network/PermissionIPv6.h"
#include "mc/network/PermissionLAN.h"
#include "mc/network/RakNetServerLANVisibility.h"
#include "mc/network/RakPeerHelper.h"
#include "mc/network/ServerConnectivityTestResult.h"
#include "mc/network/ServerLocator.h"
#include "mc/world/level/GameType.h"

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

        // thunks
    public:
        // NOLINTBEGIN
        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        MCAPI void dtor$();

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

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

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

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

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
        std::string const&                                playerName,
        std::string const&                                worldName,
        class Bedrock::NonOwnerPointer<class AppPlatform> appPlatform,
        ::GameType                                        gameType,
        int                                               numPlayers,
        int                                               maxNumPlayers,
        bool                                              isJoinableThroughServerScreen,
        bool                                              isEditorWorld
    );

    // vIndex: 4
    virtual void stopAnnouncingServer(class Bedrock::NonOwnerPointer<class AppPlatform> appPlatform);

    // vIndex: 5
    virtual void startServerDiscovery(struct PortPair ports);

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

    MCAPI RakNetServerLocator(
        class RakNetConnector&                                   rakNetConnector,
        class RakPeerHelper::IPSupportInterface&                 ipInterface,
        std::vector<std::string>                                 overrideBroadcastAddresses,
        bool                                                     isServer,
        ::RakNetServerLANVisibility                              serverLanVisibility,
        ::PermissionLAN                                          permissionLAN,
        ::PermissionIPv6                                         permissionIPv6,
        class Bedrock::NonOwnerPointer<class AppPlatform> const& appPlatform,
        std::function<std::unique_ptr<class RakNet::RakPeerInterface, void (*)(class RakNet::RakPeerInterface*)>()>
            createUniqueRakPeerFunc
    );

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
        ::LocatorStateChangeRequest                    newState,
        struct RakNetServerLocator::AnnounceServerData newAnnounceData,
        struct PortPair                                newPorts
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

    MCAPI void _startAnnouncingServer(struct RakNetServerLocator::AnnounceServerData const& announceData);

    MCAPI void _startServerDiscovery(struct PortPair const& ports);

    MCAPI void _stopAnnouncingServer();

    MCAPI void _stopServerDiscovery();

    MCAPI void _updateNetwork();

    MCAPI bool _updateQueuedPings();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI void _onDisable$();

    MCAPI void _onEnable$();

    MCAPI void addCustomServer$(class AsynchronousIPResolver const& futureIP, int port);

    MCAPI void addCustomServer$(std::string const& address, int port);

    MCAPI void checkCanConnectToCustomServerAsync$(
        std::string                                         hostIpAddress,
        int                                                 port,
        std::function<void(::ServerConnectivityTestResult)> callback
    );

    MCAPI void clearServerList$();

    MCAPI float getPingTimeForGUID$(std::string const& guid);

    MCAPI std::vector<struct PingedCompatibleServer> getServerList$() const;

    MCAPI void startAnnouncingServer$(
        std::string const&                                playerName,
        std::string const&                                worldName,
        class Bedrock::NonOwnerPointer<class AppPlatform> appPlatform,
        ::GameType                                        gameType,
        int                                               numPlayers,
        int                                               maxNumPlayers,
        bool                                              isJoinableThroughServerScreen,
        bool                                              isEditorWorld
    );

    MCAPI void startServerDiscovery$(struct PortPair ports);

    MCAPI void stopAnnouncingServer$(class Bedrock::NonOwnerPointer<class AppPlatform> appPlatform);

    MCAPI void stopServerDiscovery$();

    MCAPI void update$();

    // NOLINTEND
};
