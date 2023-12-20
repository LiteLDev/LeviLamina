#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/nethernet/IWebRTCSignalingInterface.h"
#include "mc/network/nethernet/SignalingHostConnectionStatus.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

class WebSocketSignalingInterfaceImpl {
public:
    // prevent constructor by default
    WebSocketSignalingInterfaceImpl& operator=(WebSocketSignalingInterfaceImpl const&);
    WebSocketSignalingInterfaceImpl(WebSocketSignalingInterfaceImpl const&);

public:
    // NOLINTBEGIN
    // symbol: ?IsSignedIn@WebSocketSignalingInterfaceImpl@NetherNet@@UEBA_NXZ
    MCVAPI bool IsSignedIn() const;

    // symbol: ?OnClose@WebSocketSignalingInterfaceImpl@NetherNet@@UEAAXI@Z
    MCVAPI void OnClose(uint);

    // symbol:
    // ?OnReceiveMessage@WebSocketSignalingInterfaceImpl@NetherNet@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void OnReceiveMessage(std::string const&);

    // symbol: ?ReceiveSignal@WebSocketSignalingInterfaceImpl@NetherNet@@UEAAXUNetworkID@2@PEBDI_N@Z
    MCVAPI void ReceiveSignal(struct NetherNet::NetworkID, char const*, uint, bool);

    // symbol:
    // ?RegisterSignalCallback@WebSocketSignalingInterfaceImpl@NetherNet@@UEAAXAEBV?$function@$$A6AXUNetworkID@NetherNet@@PEBDI_N@Z@std@@@Z
    MCVAPI void
    RegisterSignalCallback(std::function<void(struct NetherNet::NetworkID, char const*, uint, bool)> const&);

    // symbol:
    // ?SendSignal@WebSocketSignalingInterfaceImpl@NetherNet@@UEAAXUNetworkID@2@AEB_KPEBDI$$QEAV?$function@$$A6AXVerror_code@std@@@Z@std@@@Z
    MCVAPI void
    SendSignal(struct NetherNet::NetworkID, uint64 const&, char const*, uint, std::function<void(std::error_code)>&&);

    // symbol: ?SetTurnCredentialExpiry@WebSocketSignalingInterfaceImpl@NetherNet@@UEAAXH@Z
    MCVAPI void SetTurnCredentialExpiry(int);

    // symbol:
    // ?SignIn@WebSocketSignalingInterfaceImpl@NetherNet@@UEAAXAEBV?$function@$$A6AXVerror_code@std@@@Z@std@@AEBV?$function@$$A6AXW4SignalingHostConnectionStatus@NetherNet@@I@Z@4@AEBUSignalingConfiguration@IWebRTCSignalingInterface@2@@Z
    MCVAPI void
    SignIn(std::function<void(std::error_code)> const&, std::function<void(::NetherNet::SignalingHostConnectionStatus, uint)> const&, struct NetherNet::IWebRTCSignalingInterface::SignalingConfiguration const&);

    // symbol: ?SignOut@WebSocketSignalingInterfaceImpl@NetherNet@@UEAAXXZ
    MCVAPI void SignOut();

    // symbol: ?Update@WebSocketSignalingInterfaceImpl@NetherNet@@UEAAXXZ
    MCVAPI void Update();

    // symbol: ??0WebSocketSignalingInterfaceImpl@NetherNet@@QEAA@XZ
    MCAPI WebSocketSignalingInterfaceImpl();

    // NOLINTEND
};

}; // namespace NetherNet
