#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/UniqueLock.h"
#include "mc/network/Connector.h"
#include "mc/network/ESendType.h"
#include "mc/network/ESessionError.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct SessionState; }
namespace Social { class GameConnectionInfo; }
// clang-format on

struct NetherNetConnector {
public:
    // NetherNetConnector inner types declare
    // clang-format off
    struct NewIncomingConnectionEvent;
    struct NewOutgoingConnectionEvent;
    // clang-format on

    // NetherNetConnector inner types define
    struct NewIncomingConnectionEvent {
    public:
        // prevent constructor by default
        NewIncomingConnectionEvent& operator=(NewIncomingConnectionEvent const&);
        NewIncomingConnectionEvent(NewIncomingConnectionEvent const&);
        NewIncomingConnectionEvent();

    public:
        // NOLINTBEGIN
        // symbol: ??1NewIncomingConnectionEvent@NetherNetConnector@@QEAA@XZ
        MCAPI ~NewIncomingConnectionEvent();

        // NOLINTEND
    };

    struct NewOutgoingConnectionEvent {
    public:
        // prevent constructor by default
        NewOutgoingConnectionEvent& operator=(NewOutgoingConnectionEvent const&);
        NewOutgoingConnectionEvent(NewOutgoingConnectionEvent const&);
        NewOutgoingConnectionEvent();

    public:
        // NOLINTBEGIN
        // symbol: ??1NewOutgoingConnectionEvent@NetherNetConnector@@QEAA@XZ
        MCAPI ~NewOutgoingConnectionEvent();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    NetherNetConnector& operator=(NetherNetConnector const&);
    NetherNetConnector(NetherNetConnector const&);
    NetherNetConnector();

public:
    // NOLINTBEGIN
    // symbol: ?OnBroadcastDiscoveryRequestReceivedGetResponse@NetherNetConnector@@EEAA_NPEAXPEAH@Z
    MCVAPI bool OnBroadcastDiscoveryRequestReceivedGetResponse(void*, int*);

    // symbol: ?OnBroadcastResponseReceived@NetherNetConnector@@EEAAXUNetworkID@NetherNet@@PEBXH@Z
    MCVAPI void OnBroadcastResponseReceived(struct NetherNet::NetworkID, void const*, int);

    // symbol: ?OnSessionConnectFailure@NetherNetConnector@@EEAAXUNetworkID@NetherNet@@W4ESessionError@3@@Z
    MCVAPI void OnSessionConnectFailure(struct NetherNet::NetworkID, ::NetherNet::ESessionError);

    // symbol: ?OnSessionGetConnectionFlags@NetherNetConnector@@EEAAXUNetworkID@NetherNet@@PEAI@Z
    MCVAPI void OnSessionGetConnectionFlags(struct NetherNet::NetworkID, uint*);

    // symbol: ?OnSessionRequested@NetherNetConnector@@EEAAXUNetworkID@NetherNet@@@Z
    MCVAPI void OnSessionRequested(struct NetherNet::NetworkID);

    // symbol: ?OnSpopViolation@NetherNetConnector@@EEAAXXZ
    MCVAPI void OnSpopViolation();

    // symbol: ?_onDisable@NetherNetConnector@@EEAAXXZ
    MCVAPI void _onDisable();

    // symbol: ?_onEnable@NetherNetConnector@@EEAAXXZ
    MCVAPI void _onEnable();

    // symbol: ?closeNetworkConnection@NetherNetConnector@@UEAAXAEBVNetworkIdentifier@@@Z
    MCVAPI void closeNetworkConnection(class NetworkIdentifier const&);

    // symbol: ?connect@NetherNetConnector@@UEAA_NAEBVGameConnectionInfo@Social@@0@Z
    MCVAPI bool connect(class Social::GameConnectionInfo const&, class Social::GameConnectionInfo const&);

    // symbol: ?disconnect@NetherNetConnector@@UEAAXXZ
    MCVAPI void disconnect();

    // symbol: ?getNetworkIdentifier@NetherNetConnector@@UEBA?AVNetworkIdentifier@@XZ
    MCVAPI class NetworkIdentifier getNetworkIdentifier() const;

    // symbol: ?host@NetherNetConnector@@UEAA_NAEBUConnectionDefinition@@@Z
    MCVAPI bool host(struct ConnectionDefinition const&);

    // symbol: ?isConnected@NetherNetConnector@@UEBA_NAEBVNetworkIdentifier@@@Z
    MCVAPI bool isConnected(class NetworkIdentifier const&) const;

    // symbol: ?isServer@NetherNetConnector@@UEBA_NXZ
    MCVAPI bool isServer() const;

    // symbol: ?runEvents@NetherNetConnector@@UEAAXXZ
    MCVAPI void runEvents();

    // symbol: ?tick@NetherNetConnector@@UEAAXXZ
    MCVAPI void tick();

    // symbol: ??0NetherNetConnector@@QEAA@AEBVNetherNetTransportFactory@@AEAUConnectionCallbacks@Connector@@@Z
    MCAPI NetherNetConnector(class NetherNetTransportFactory const&, struct Connector::ConnectionCallbacks&);

    // symbol: ?clearPacketData@NetherNetConnector@@QEBAXUNetworkID@NetherNet@@@Z
    MCAPI void clearPacketData(struct NetherNet::NetworkID) const;

    // symbol: ?closeSessionWithUser@NetherNetConnector@@QEBA_NUNetworkID@NetherNet@@@Z
    MCAPI bool closeSessionWithUser(struct NetherNet::NetworkID) const;

    // symbol: ?getSessionState@NetherNetConnector@@QEBA_NUNetworkID@NetherNet@@PEAUSessionState@3@@Z
    MCAPI bool getSessionState(struct NetherNet::NetworkID, struct NetherNet::SessionState*) const;

    // symbol: ?isPacketAvailable@NetherNetConnector@@QEBA_NUNetworkID@NetherNet@@PEAI@Z
    MCAPI bool isPacketAvailable(struct NetherNet::NetworkID, uint*) const;

    // symbol: ?readPacket@NetherNetConnector@@QEBA_NUNetworkID@NetherNet@@PEAXIPEAI@Z
    MCAPI bool readPacket(struct NetherNet::NetworkID, void*, uint, uint*) const;

    // symbol: ?sendPacket@NetherNetConnector@@QEBA_NUNetworkID@NetherNet@@PEBDIW4ESendType@3@@Z
    MCAPI bool sendPacket(struct NetherNet::NetworkID, char const*, uint, ::NetherNet::ESendType) const;

    // symbol: ?setBroadcastRequestCallback@NetherNetConnector@@QEAAX$$QEAV?$function@$$A6A_NPEAXPEAH@Z@std@@@Z
    MCAPI void setBroadcastRequestCallback(std::function<bool(void*, int*)>&&);

    // symbol:
    // ?setBroadcastResponseCallback@NetherNetConnector@@QEAAX$$QEAV?$function@$$A6AXAEBUNetworkID@NetherNet@@PEBXH@Z@std@@@Z
    MCAPI void
    setBroadcastResponseCallback(std::function<void(struct NetherNet::NetworkID const&, void const*, int)>&&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getOrCreatePeer@NetherNetConnector@@AEAA?AV?$not_null@V?$shared_ptr@VWebRTCNetworkPeer@@@std@@@gsl@@_KAEBV?$UniqueLock@VMutex@Threading@Bedrock@@@Threading@Bedrock@@@Z
    MCAPI gsl::not_null<std::shared_ptr<class WebRTCNetworkPeer>>
          _getOrCreatePeer(uint64, class Bedrock::Threading::UniqueLock<class Bedrock::Threading::Mutex> const&);

    // NOLINTEND
};
