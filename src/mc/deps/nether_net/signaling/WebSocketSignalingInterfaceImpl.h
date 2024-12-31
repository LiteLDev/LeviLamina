#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/WebSocket.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/IWebRTCSignalingInterface.h"
#include "mc/deps/nether_net/SignalingHostConnectionStatus.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { struct ISignalingEventHandler; }
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

class WebSocketSignalingInterfaceImpl : public ::NetherNet::IWebRTCSignalingInterface,
                                        public ::Bedrock::Http::WebSocket {
public:
    // WebSocketSignalingInterfaceImpl inner types define
    enum class RequestType : schar {
        Ping     = 0,
        WebRTC   = 1,
        TurnAuth = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnk459907;
    ::ll::UntypedStorage<8, 128> mUnk22b17c;
    ::ll::UntypedStorage<8, 160> mUnkaf8f7a;
    ::ll::UntypedStorage<8, 8>   mUnke5fc7e;
    ::ll::UntypedStorage<4, 4>   mUnk8e9b71;
    ::ll::UntypedStorage<8, 8>   mUnkbef2ce;
    // NOLINTEND

public:
    // prevent constructor by default
    WebSocketSignalingInterfaceImpl& operator=(WebSocketSignalingInterfaceImpl const&);
    WebSocketSignalingInterfaceImpl(WebSocketSignalingInterfaceImpl const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WebSocketSignalingInterfaceImpl() /*override*/ = default;

    // vIndex: 0
    virtual void SignIn(
        ::std::function<void(::std::error_code)> const&                                signInCallback,
        ::std::function<void(::NetherNet::SignalingHostConnectionStatus, uint)> const& connectionStatusChangedCallback,
        ::NetherNet::IWebRTCSignalingInterface::SignalingConfiguration const&          signalingConfig
    ) /*override*/;

    // vIndex: 1
    virtual void SignOut() /*override*/;

    // vIndex: 2
    virtual bool IsSignedIn() const /*override*/;

    // vIndex: 3
    virtual void Update() /*override*/;

    // vIndex: 4
    virtual void SendSignal(
        ::NetherNet::NetworkID                              networkIDTo,
        char const*                                         pbSignal,
        uint                                                cbSignal,
        ::std::function<void(::NetherNet::ESessionError)>&& onComplete
    ) /*override*/;

    // vIndex: 5
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler
    ) /*override*/;

    // vIndex: 1
    virtual void onMessage(::std::string_view incomingMessage) /*override*/;

    // vIndex: 3
    virtual void onClose(uint status) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void ParseError(::NetherNet::NetworkID fromNetworkID, ::std::string const& message, ::std::string messageId);

    MCAPI void ParseSignal(::NetherNet::NetworkID fromNetworkID, ::std::string message, ::std::string messageId);

    MCAPI void ParseTurnConfig(::std::string const& bodyText);

    MCAPI WebSocketSignalingInterfaceImpl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $SignIn(
        ::std::function<void(::std::error_code)> const&                                signInCallback,
        ::std::function<void(::NetherNet::SignalingHostConnectionStatus, uint)> const& connectionStatusChangedCallback,
        ::NetherNet::IWebRTCSignalingInterface::SignalingConfiguration const&          signalingConfig
    );

    MCAPI void $SignOut();

    MCAPI bool $IsSignedIn() const;

    MCAPI void $Update();

    MCAPI void $SendSignal(
        ::NetherNet::NetworkID                              networkIDTo,
        char const*                                         pbSignal,
        uint                                                cbSignal,
        ::std::function<void(::NetherNet::ESessionError)>&& onComplete
    );

    MCAPI ::Bedrock::PubSub::Subscription $RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler);

    MCAPI void $onMessage(::std::string_view incomingMessage);

    MCAPI void $onClose(uint status);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForWebSocket();

    MCAPI static void** $vftableForIWebRTCSignalingInterface();
    // NOLINTEND
};

} // namespace NetherNet
