#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/PeerConnectionInterface.h"
#include "mc/network/nethernet/ERelayServerConfigurationResult.h"
#include "mc/network/nethernet/ESendType.h"
#include "mc/network/nethernet/ESessionError.h"
#include "mc/network/nethernet/INetherNetTransportInterface.h"
#include "mc/network/nethernet/IWebRTCSignalingInterface.h"
#include "mc/network/nethernet/SignalingHostConnectionStatus.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class CandidateAdd; }
namespace NetherNet { class ConnectError; }
namespace NetherNet { class ConnectRequest; }
namespace NetherNet { class ConnectResponse; }
namespace NetherNet { class INetherNetTransportInterface; }
namespace NetherNet { class INetherNetTransportInterfaceCallbacks; }
namespace NetherNet { class IWebRTCSignalingInterface; }
namespace NetherNet { struct DiscoveryMessagePacket; }
namespace NetherNet { struct DiscoveryRequestPacket; }
namespace NetherNet { struct DiscoveryResponsePacket; }
namespace NetherNet { struct NetherNetTransportServerConfiguration; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct SessionState; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace NetherNet {

class SimpleNetworkInterfaceImpl : public ::NetherNet::INetherNetTransportInterface {
public:
    // prevent constructor by default
    SimpleNetworkInterfaceImpl& operator=(SimpleNetworkInterfaceImpl const&);
    SimpleNetworkInterfaceImpl(SimpleNetworkInterfaceImpl const&);
    SimpleNetworkInterfaceImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SimpleNetworkInterfaceImpl@NetherNet@@UEAA@XZ
    virtual ~SimpleNetworkInterfaceImpl();

    // vIndex: 1, symbol: ?IsSignedIntoSignalingService@SimpleNetworkInterfaceImpl@NetherNet@@UEBA_NXZ
    virtual bool IsSignedIntoSignalingService() const;

    // vIndex: 2, symbol: ?SendPacket@SimpleNetworkInterfaceImpl@NetherNet@@UEAA_NUNetworkID@2@PEBDIW4ESendType@2@@Z
    virtual bool SendPacket(struct NetherNet::NetworkID, char const*, uint, ::NetherNet::ESendType);

    // vIndex: 3, symbol: ?IsPacketAvailable@SimpleNetworkInterfaceImpl@NetherNet@@UEAA_NUNetworkID@2@PEAI@Z
    virtual bool IsPacketAvailable(struct NetherNet::NetworkID, uint*);

    // vIndex: 4, symbol: ?ClearPacketData@SimpleNetworkInterfaceImpl@NetherNet@@UEAAXUNetworkID@2@@Z
    virtual void ClearPacketData(struct NetherNet::NetworkID);

    // vIndex: 5, symbol: ?ReadPacket@SimpleNetworkInterfaceImpl@NetherNet@@UEAA_NUNetworkID@2@PEAXIPEAI@Z
    virtual bool ReadPacket(struct NetherNet::NetworkID, void*, uint, uint*);

    // vIndex: 6, symbol: ?AcceptSessionWithUser@SimpleNetworkInterfaceImpl@NetherNet@@UEAA_NUNetworkID@2@@Z
    virtual bool AcceptSessionWithUser(struct NetherNet::NetworkID);

    // vIndex: 7, symbol: ?OpenSessionWithUser@SimpleNetworkInterfaceImpl@NetherNet@@UEAA_NUNetworkID@2@@Z
    virtual bool OpenSessionWithUser(struct NetherNet::NetworkID);

    // vIndex: 8, symbol: ?CloseSessionWithUser@SimpleNetworkInterfaceImpl@NetherNet@@UEAA_NUNetworkID@2@@Z
    virtual bool CloseSessionWithUser(struct NetherNet::NetworkID);

    // vIndex: 9, symbol:
    // ?GetSessionState@SimpleNetworkInterfaceImpl@NetherNet@@UEAA_NUNetworkID@2@PEAUSessionState@2@@Z
    virtual bool GetSessionState(struct NetherNet::NetworkID, struct NetherNet::SessionState*);

    // vIndex: 10, symbol:
    // ?SetServerConfiguration@SimpleNetworkInterfaceImpl@NetherNet@@UEAAXPEBUNetherNetTransportServerConfiguration@2@@Z
    virtual void SetServerConfiguration(struct NetherNet::NetherNetTransportServerConfiguration const*);

    // vIndex: 11, symbol:
    // ?SetWebRTCSignalingInterface@SimpleNetworkInterfaceImpl@NetherNet@@UEAAXAEBV?$shared_ptr@VIWebRTCSignalingInterface@NetherNet@@@std@@@Z
    virtual void SetWebRTCSignalingInterface(std::shared_ptr<class NetherNet::IWebRTCSignalingInterface> const&);

    // vIndex: 12, symbol:
    // ?SignIntoSignalingService@SimpleNetworkInterfaceImpl@NetherNet@@UEAAXAEBV?$function@$$A6AXVerror_code@std@@@Z@std@@AEBV?$function@$$A6AXW4SignalingHostConnectionStatus@NetherNet@@I@Z@4@AEBUSignalingConfiguration@IWebRTCSignalingInterface@2@@Z
    virtual void
    SignIntoSignalingService(std::function<void(std::error_code)> const&, std::function<void(::NetherNet::SignalingHostConnectionStatus, uint)> const&, struct NetherNet::IWebRTCSignalingInterface::SignalingConfiguration const&);

    // vIndex: 13, symbol: ?SignOutFromSignalingService@SimpleNetworkInterfaceImpl@NetherNet@@UEAAXXZ
    virtual void SignOutFromSignalingService();

    // vIndex: 14, symbol:
    // ?RegisterRelayServerCredentialsReadyCallback@SimpleNetworkInterfaceImpl@NetherNet@@UEAAXAEBV?$function@$$A6AXW4ERelayServerConfigurationResult@NetherNet@@@Z@std@@@Z
    virtual void
    RegisterRelayServerCredentialsReadyCallback(std::function<void(::NetherNet::ERelayServerConfigurationResult
                                                )> const&);

    // vIndex: 15, symbol: ?IsBroadcastDiscoveryEnabled@SimpleNetworkInterfaceImpl@NetherNet@@UEAA_NXZ
    virtual bool IsBroadcastDiscoveryEnabled();

    // vIndex: 16, symbol: ?EnableBroadcastDiscovery@SimpleNetworkInterfaceImpl@NetherNet@@UEAAXXZ
    virtual void EnableBroadcastDiscovery();

    // vIndex: 17, symbol: ?DisableBroadcastDiscovery@SimpleNetworkInterfaceImpl@NetherNet@@UEAAXXZ
    virtual void DisableBroadcastDiscovery();

    // vIndex: 18, symbol: ?EnableSignalingOverLAN@SimpleNetworkInterfaceImpl@NetherNet@@UEAAXXZ
    virtual void EnableSignalingOverLAN();

    // vIndex: 19, symbol: ?DisableSignalingOverLAN@SimpleNetworkInterfaceImpl@NetherNet@@UEAAXXZ
    virtual void DisableSignalingOverLAN();

    // symbol: ?GetConnectionFlags@SimpleNetworkInterfaceImpl@NetherNet@@QEAAIUNetworkID@2@@Z
    MCAPI uint GetConnectionFlags(struct NetherNet::NetworkID);

    // symbol:
    // ?GetNegotiationTimeout@SimpleNetworkInterfaceImpl@NetherNet@@QEBA?AV?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@XZ
    MCAPI std::chrono::seconds GetNegotiationTimeout() const;

    // symbol:
    // ?HandleDiscoveryPacketOnSignalThread@SimpleNetworkInterfaceImpl@NetherNet@@QEAAXAEBVSocketAddress@rtc@@AEBUDiscoveryMessagePacket@2@@Z
    MCAPI void
    HandleDiscoveryPacketOnSignalThread(class rtc::SocketAddress const&, struct NetherNet::DiscoveryMessagePacket const&);

    // symbol:
    // ?HandleDiscoveryPacketOnSignalThread@SimpleNetworkInterfaceImpl@NetherNet@@QEAAXAEBVSocketAddress@rtc@@AEBUDiscoveryRequestPacket@2@@Z
    MCAPI void
    HandleDiscoveryPacketOnSignalThread(class rtc::SocketAddress const&, struct NetherNet::DiscoveryRequestPacket const&);

    // symbol:
    // ?HandleDiscoveryPacketOnSignalThread@SimpleNetworkInterfaceImpl@NetherNet@@QEAAXAEBVSocketAddress@rtc@@AEBUDiscoveryResponsePacket@2@@Z
    MCAPI void
    HandleDiscoveryPacketOnSignalThread(class rtc::SocketAddress const&, struct NetherNet::DiscoveryResponsePacket const&);

    // symbol: ?Initialize@SimpleNetworkInterfaceImpl@NetherNet@@QEAAXXZ
    MCAPI void Initialize();

    // symbol: ?NotifyIncomingSession@SimpleNetworkInterfaceImpl@NetherNet@@QEAAXUNetworkID@2@@Z
    MCAPI void NotifyIncomingSession(struct NetherNet::NetworkID);

    // symbol: ?NotifySessionConnectFailure@SimpleNetworkInterfaceImpl@NetherNet@@QEAAXUNetworkID@2@W4ESessionError@2@@Z
    MCAPI void NotifySessionConnectFailure(struct NetherNet::NetworkID, ::NetherNet::ESessionError);

    // symbol: ?PeriodicUpdateOnSignalThread@SimpleNetworkInterfaceImpl@NetherNet@@QEAAXXZ
    MCAPI void PeriodicUpdateOnSignalThread();

    // symbol: ?ProcessConnectError@SimpleNetworkInterfaceImpl@NetherNet@@QEAAXUNetworkID@2@W4ESessionError@2@@Z
    MCAPI void ProcessConnectError(struct NetherNet::NetworkID, ::NetherNet::ESessionError);

    // symbol:
    // ?ProcessTurnConfig@SimpleNetworkInterfaceImpl@NetherNet@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void ProcessTurnConfig(std::string const&);

    // symbol:
    // ?ReceiveFromSignalingChannel@SimpleNetworkInterfaceImpl@NetherNet@@QEAAXUNetworkID@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI void ReceiveFromSignalingChannel(struct NetherNet::NetworkID, std::string const&, bool);

    // symbol:
    // ?SendToSignalingChannel@SimpleNetworkInterfaceImpl@NetherNet@@QEAAXUNetworkID@2@AEBV?$variant@VConnectRequest@NetherNet@@VConnectResponse@2@VConnectError@2@VCandidateAdd@2@@std@@@Z
    MCAPI void
    SendToSignalingChannel(struct NetherNet::NetworkID, std::variant<class NetherNet::ConnectRequest, class NetherNet::ConnectResponse, class NetherNet::ConnectError, class NetherNet::CandidateAdd> const&);

    // symbol:
    // ??0SimpleNetworkInterfaceImpl@NetherNet@@QEAA@UNetworkID@1@PEAUNetherNetTransportServerConfiguration@1@PEAVINetherNetTransportInterfaceCallbacks@1@@Z
    MCAPI
    SimpleNetworkInterfaceImpl(struct NetherNet::NetworkID, struct NetherNet::NetherNetTransportServerConfiguration*, class NetherNet::INetherNetTransportInterfaceCallbacks*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?InitializeConfiguration@SimpleNetworkInterfaceImpl@NetherNet@@AEAAXPEBUNetherNetTransportServerConfiguration@2@PEAURTCConfiguration@PeerConnectionInterface@webrtc@@@Z
    MCAPI void
    InitializeConfiguration(struct NetherNet::NetherNetTransportServerConfiguration const*, struct webrtc::PeerConnectionInterface::RTCConfiguration*);

    // symbol:
    // ?MakeDefaultSignalingChannel@SimpleNetworkInterfaceImpl@NetherNet@@AEAAXPEBUNetherNetTransportServerConfiguration@2@@Z
    MCAPI void MakeDefaultSignalingChannel(struct NetherNet::NetherNetTransportServerConfiguration const*);

    // symbol: ?RegisterSignalingChannelCallbacks@SimpleNetworkInterfaceImpl@NetherNet@@AEAAXXZ
    MCAPI void RegisterSignalingChannelCallbacks();

    // symbol:
    // ?UpdateConfigWithRelayToken@SimpleNetworkInterfaceImpl@NetherNet@@AEAAXPEAURTCConfiguration@PeerConnectionInterface@webrtc@@@Z
    MCAPI void UpdateConfigWithRelayToken(struct webrtc::PeerConnectionInterface::RTCConfiguration*);

    // NOLINTEND
};

}; // namespace NetherNet
