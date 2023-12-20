#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/nethernet/ERelayServerConfigurationResult.h"
#include "mc/network/nethernet/ESendType.h"
#include "mc/network/nethernet/IWebRTCSignalingInterface.h"
#include "mc/network/nethernet/SignalingHostConnectionStatus.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class IWebRTCSignalingInterface; }
namespace NetherNet { struct NetherNetTransportServerConfiguration; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct SessionState; }
// clang-format on

namespace NetherNet {

class INetherNetTransportInterface {
public:
    // prevent constructor by default
    INetherNetTransportInterface& operator=(INetherNetTransportInterface const&);
    INetherNetTransportInterface(INetherNetTransportInterface const&);
    INetherNetTransportInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1INetherNetTransportInterface@NetherNet@@UEAA@XZ
    virtual ~INetherNetTransportInterface();

    // vIndex: 1, symbol: ?IsSignedIntoSignalingService@SimpleNetworkInterfaceImpl@NetherNet@@UEBA_NXZ
    virtual bool IsSignedIntoSignalingService() const = 0;

    // vIndex: 2, symbol: ?SendPacket@SimpleNetworkInterfaceImpl@NetherNet@@UEAA_NUNetworkID@2@PEBDIW4ESendType@2@@Z
    virtual bool SendPacket(struct NetherNet::NetworkID, char const*, uint, ::NetherNet::ESendType) = 0;

    // vIndex: 3, symbol: ?IsPacketAvailable@SimpleNetworkInterfaceImpl@NetherNet@@UEAA_NUNetworkID@2@PEAI@Z
    virtual bool IsPacketAvailable(struct NetherNet::NetworkID, uint*) = 0;

    // vIndex: 4, symbol: ?ClearPacketData@SimpleNetworkInterfaceImpl@NetherNet@@UEAAXUNetworkID@2@@Z
    virtual void ClearPacketData(struct NetherNet::NetworkID) = 0;

    // vIndex: 5, symbol: ?ReadPacket@SimpleNetworkInterfaceImpl@NetherNet@@UEAA_NUNetworkID@2@PEAXIPEAI@Z
    virtual bool ReadPacket(struct NetherNet::NetworkID, void*, uint, uint*) = 0;

    // vIndex: 6, symbol: ?AcceptSessionWithUser@SimpleNetworkInterfaceImpl@NetherNet@@UEAA_NUNetworkID@2@@Z
    virtual bool AcceptSessionWithUser(struct NetherNet::NetworkID) = 0;

    // vIndex: 7, symbol: ?OpenSessionWithUser@SimpleNetworkInterfaceImpl@NetherNet@@UEAA_NUNetworkID@2@@Z
    virtual bool OpenSessionWithUser(struct NetherNet::NetworkID) = 0;

    // vIndex: 8, symbol: ?CloseSessionWithUser@SimpleNetworkInterfaceImpl@NetherNet@@UEAA_NUNetworkID@2@@Z
    virtual bool CloseSessionWithUser(struct NetherNet::NetworkID) = 0;

    // vIndex: 9, symbol:
    // ?GetSessionState@SimpleNetworkInterfaceImpl@NetherNet@@UEAA_NUNetworkID@2@PEAUSessionState@2@@Z
    virtual bool GetSessionState(struct NetherNet::NetworkID, struct NetherNet::SessionState*) = 0;

    // vIndex: 10, symbol:
    // ?SetServerConfiguration@SimpleNetworkInterfaceImpl@NetherNet@@UEAAXPEBUNetherNetTransportServerConfiguration@2@@Z
    virtual void SetServerConfiguration(struct NetherNet::NetherNetTransportServerConfiguration const*) = 0;

    // vIndex: 11, symbol:
    // ?SetWebRTCSignalingInterface@SimpleNetworkInterfaceImpl@NetherNet@@UEAAXAEBV?$shared_ptr@VIWebRTCSignalingInterface@NetherNet@@@std@@@Z
    virtual void SetWebRTCSignalingInterface(std::shared_ptr<class NetherNet::IWebRTCSignalingInterface> const&) = 0;

    // vIndex: 12, symbol:
    // ?SignIntoSignalingService@SimpleNetworkInterfaceImpl@NetherNet@@UEAAXAEBV?$function@$$A6AXVerror_code@std@@@Z@std@@AEBV?$function@$$A6AXW4SignalingHostConnectionStatus@NetherNet@@I@Z@4@AEBUSignalingConfiguration@IWebRTCSignalingInterface@2@@Z
    virtual void
    SignIntoSignalingService(std::function<void(std::error_code)> const&, std::function<void(::NetherNet::SignalingHostConnectionStatus, uint)> const&, struct NetherNet::IWebRTCSignalingInterface::SignalingConfiguration const&) = 0;

    // vIndex: 13, symbol: ?SignOutFromSignalingService@SimpleNetworkInterfaceImpl@NetherNet@@UEAAXXZ
    virtual void SignOutFromSignalingService() = 0;

    // vIndex: 14, symbol:
    // ?RegisterRelayServerCredentialsReadyCallback@SimpleNetworkInterfaceImpl@NetherNet@@UEAAXAEBV?$function@$$A6AXW4ERelayServerConfigurationResult@NetherNet@@@Z@std@@@Z
    virtual void
    RegisterRelayServerCredentialsReadyCallback(std::function<void(::NetherNet::ERelayServerConfigurationResult
                                                )> const&) = 0;

    // vIndex: 15, symbol: ?IsBroadcastDiscoveryEnabled@SimpleNetworkInterfaceImpl@NetherNet@@UEAA_NXZ
    virtual bool IsBroadcastDiscoveryEnabled() = 0;

    // vIndex: 16, symbol: ?EnableBroadcastDiscovery@SimpleNetworkInterfaceImpl@NetherNet@@UEAAXXZ
    virtual void EnableBroadcastDiscovery() = 0;

    // vIndex: 17, symbol: ?DisableBroadcastDiscovery@SimpleNetworkInterfaceImpl@NetherNet@@UEAAXXZ
    virtual void DisableBroadcastDiscovery() = 0;

    // vIndex: 18, symbol: ?EnableSignalingOverLAN@SimpleNetworkInterfaceImpl@NetherNet@@UEAAXXZ
    virtual void EnableSignalingOverLAN() = 0;

    // vIndex: 19, symbol: ?DisableSignalingOverLAN@SimpleNetworkInterfaceImpl@NetherNet@@UEAAXXZ
    virtual void DisableSignalingOverLAN() = 0;

    // NOLINTEND
};

}; // namespace NetherNet
