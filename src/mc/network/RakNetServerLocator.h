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
        // symbol: ??0AnnounceServerData@RakNetServerLocator@@QEAA@AEBU01@@Z
        MCAPI AnnounceServerData(struct RakNetServerLocator::AnnounceServerData const&);

        // symbol: ??4AnnounceServerData@RakNetServerLocator@@QEAAAEAU01@AEBU01@@Z
        MCAPI struct RakNetServerLocator::AnnounceServerData&
        operator=(struct RakNetServerLocator::AnnounceServerData const&);

        // symbol: ??1AnnounceServerData@RakNetServerLocator@@QEAA@XZ
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
        // symbol: ??1StateChangeRequestData@RakNetServerLocator@@QEAA@XZ
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
        // symbol: ??1SuspendStateData@RakNetServerLocator@@QEAA@XZ
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
    // vIndex: 0, symbol: ??1RakNetServerLocator@@UEAA@XZ
    virtual ~RakNetServerLocator();

    // vIndex: 1, symbol: ?_onDisable@RakNetServerLocator@@EEAAXXZ
    virtual void _onDisable();

    // vIndex: 2, symbol: ?_onEnable@RakNetServerLocator@@EEAAXXZ
    virtual void _onEnable();

    // vIndex: 3, symbol:
    // ?startAnnouncingServer@RakNetServerLocator@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$NonOwnerPointer@VAppPlatform@@@Bedrock@@W4GameType@@HH_N3@Z
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

    // vIndex: 4, symbol: ?stopAnnouncingServer@RakNetServerLocator@@UEAAXV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
    virtual void stopAnnouncingServer(class Bedrock::NonOwnerPointer<class AppPlatform> appPlatform);

    // vIndex: 5, symbol: ?startServerDiscovery@RakNetServerLocator@@UEAAXUPortPair@@@Z
    virtual void startServerDiscovery(struct PortPair);

    // vIndex: 6, symbol: ?stopServerDiscovery@RakNetServerLocator@@UEAAXXZ
    virtual void stopServerDiscovery();

    // vIndex: 7, symbol: ?addCustomServer@RakNetServerLocator@@UEAAXAEBVAsynchronousIPResolver@@H@Z
    virtual void addCustomServer(class AsynchronousIPResolver const& futureIP, int port);

    // vIndex: 8, symbol:
    // ?addCustomServer@RakNetServerLocator@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual void addCustomServer(std::string const& address, int port);

    // vIndex: 9, symbol:
    // ?getServerList@RakNetServerLocator@@UEBA?AV?$vector@UPingedCompatibleServer@@V?$allocator@UPingedCompatibleServer@@@std@@@std@@XZ
    virtual std::vector<struct PingedCompatibleServer> getServerList() const;

    // vIndex: 10, symbol: ?clearServerList@RakNetServerLocator@@UEAAXXZ
    virtual void clearServerList();

    // vIndex: 11, symbol: ?update@RakNetServerLocator@@UEAAXXZ
    virtual void update();

    // vIndex: 12, symbol:
    // ?getPingTimeForGUID@RakNetServerLocator@@UEAAMAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual float getPingTimeForGUID(std::string const& guid);

    // vIndex: 13, symbol:
    // ?checkCanConnectToCustomServerAsync@RakNetServerLocator@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HV?$function@$$A6AXW4ServerConnectivityTestResult@@@Z@3@@Z
    virtual void checkCanConnectToCustomServerAsync(
        std::string                                         hostIpAddress,
        int                                                 port,
        std::function<void(::ServerConnectivityTestResult)> callback
    );

    // symbol:
    // ??0RakNetServerLocator@@QEAA@AEAVRakNetConnector@@AEAVIPSupportInterface@RakPeerHelper@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@_NW4RakNetServerLANVisibility@@W4PermissionLAN@@W4PermissionIPv6@@AEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@V?$function@$$A6A?AV?$unique_ptr@VRakPeerInterface@RakNet@@P6AXPEAV12@@Z@std@@XZ@5@@Z
    MCAPI
    RakNetServerLocator(class RakNetConnector&, class RakPeerHelper::IPSupportInterface& ipInterface, std::vector<std::string>, bool isServer, ::RakNetServerLANVisibility, ::PermissionLAN, ::PermissionIPv6, class Bedrock::NonOwnerPointer<class AppPlatform> const& appPlatform, std::function<std::unique_ptr<class RakNet::RakPeerInterface, void (*)(class RakNet::RakPeerInterface*)>()>);

    // symbol:
    // ?parseUnconnectedPongPacketData@RakNetServerLocator@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI static bool parseUnconnectedPongPacketData(std::string const& data, std::vector<std::string>& extraData);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_activate@RakNetServerLocator@@AEAAXXZ
    MCAPI void _activate();

    // symbol: ?_addCustomServerFromIpResolver@RakNetServerLocator@@AEAAXAEBVAsynchronousIPResolver@@H@Z
    MCAPI void _addCustomServerFromIpResolver(class AsynchronousIPResolver const& futureIP, int port);

    // symbol: ?_addCustomServerV4@RakNetServerLocator@@AEAA_NAEBVAsynchronousIPResolver@@H@Z
    MCAPI bool _addCustomServerV4(class AsynchronousIPResolver const& futureIP, int port);

    // symbol: ?_addCustomServerV6@RakNetServerLocator@@AEAA_NAEBVAsynchronousIPResolver@@H@Z
    MCAPI bool _addCustomServerV6(class AsynchronousIPResolver const& futureIP, int port);

    // symbol: ?_announceServer@RakNetServerLocator@@AEAAXAEBUAnnounceServerData@1@@Z
    MCAPI void _announceServer(struct RakNetServerLocator::AnnounceServerData const& serverData);

    // symbol:
    // ?_enqueueStateChangeRequest@RakNetServerLocator@@AEAAXW4LocatorStateChangeRequest@@UAnnounceServerData@1@UPortPair@@@Z
    MCAPI void _enqueueStateChangeRequest(
        ::LocatorStateChangeRequest newState,
        struct RakNetServerLocator::AnnounceServerData,
        struct PortPair
    );

    // symbol:
    // ?_getHostGuid@RakNetServerLocator@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@H@Z
    MCAPI std::string _getHostGuid(std::string const& address, int port);

    // symbol:
    // ?_getServerOriginalAddress@RakNetServerLocator@@AEAAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
    MCAPI void _getServerOriginalAddress(std::string& originalAddressToSet, std::string const& ip);

    // symbol:
    // ?_handleUnconnectedPong@RakNetServerLocator@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBUPacket@RakNet@@_N_K@Z
    MCAPI bool _handleUnconnectedPong(
        std::string const&           data,
        struct RakNet::Packet const* p,
        bool                         insertAtBeginning,
        uint64                       readTime
    );

    // symbol: ?_initializeBroadcastAddresses@RakNetServerLocator@@AEAAXXZ
    MCAPI void _initializeBroadcastAddresses();

    // symbol: ?_onPongReceive@RakNetServerLocator@@AEAA_NAEAMAEBURakNetGUID@RakNet@@AEBIH@Z
    MCAPI bool
    _onPongReceive(float& latencyToSet, struct RakNet::RakNetGUID const& guid, uint const& receivedTime, int ipVersion);

    // symbol:
    // ?_pingServerV4@RakNetServerLocator@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI bool _pingServerV4(std::string const& address, int port);

    // symbol: ?_setPingResponder@RakNetServerLocator@@AEAAXAEBUAnnounceServerData@1@@Z
    MCAPI void _setPingResponder(struct RakNetServerLocator::AnnounceServerData const& serverData);

    // symbol: ?_startAnnouncingServer@RakNetServerLocator@@AEAAXAEBUAnnounceServerData@1@@Z
    MCAPI void _startAnnouncingServer(struct RakNetServerLocator::AnnounceServerData const&);

    // symbol: ?_startServerDiscovery@RakNetServerLocator@@AEAAXAEBUPortPair@@@Z
    MCAPI void _startServerDiscovery(struct PortPair const&);

    // symbol: ?_stopAnnouncingServer@RakNetServerLocator@@AEAAXXZ
    MCAPI void _stopAnnouncingServer();

    // symbol: ?_stopServerDiscovery@RakNetServerLocator@@AEAAXXZ
    MCAPI void _stopServerDiscovery();

    // symbol: ?_updateNetwork@RakNetServerLocator@@AEAAXXZ
    MCAPI void _updateNetwork();

    // symbol: ?_updateQueuedPings@RakNetServerLocator@@AEAA_NXZ
    MCAPI bool _updateQueuedPings();

    // NOLINTEND
};
