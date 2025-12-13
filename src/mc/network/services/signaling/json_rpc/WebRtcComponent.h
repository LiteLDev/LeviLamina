#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/network/services/signaling/IJsonRpcComponent.h"

// auto generated forward declare list
// clang-format off
class ISignalingJsonRpcInterop;
namespace JsonRpc { class JsonRpcProvider; }
namespace JsonRpc { class ReceiveClientMessageResult; }
namespace NetherNet { struct NetworkID; }
namespace PlayerMessaging { struct NetworkID; }
// clang-format on

namespace JsonRpc {

class WebRtcComponent : public ::IJsonRpcComponent, public ::std::enable_shared_from_this<::JsonRpc::WebRtcComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb87f51;
    ::ll::UntypedStorage<8, 24> mUnkb025a5;
    ::ll::UntypedStorage<8, 80> mUnkcc2ad6;
    ::ll::UntypedStorage<8, 64> mUnk2d2bc1;
    ::ll::UntypedStorage<8, 16> mUnk1c8606;
    ::ll::UntypedStorage<8, 16> mUnk6cd539;
    // NOLINTEND

public:
    // prevent constructor by default
    WebRtcComponent& operator=(WebRtcComponent const&);
    WebRtcComponent(WebRtcComponent const&);
    WebRtcComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void initialize(::std::shared_ptr<::JsonRpc::JsonRpcProvider> provider) /*override*/;

    // vIndex: 0
    virtual ~WebRtcComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WebRtcComponent(::std::shared_ptr<::ISignalingJsonRpcInterop> interop);

    MCNAPI void
    _sendDeliveryNotification(::PlayerMessaging::NetworkID const& toPlayerId, ::std::string const& messageId);

    MCNAPI void parseJsonRpcClientMessage(::JsonRpc::ReceiveClientMessageResult const& result);

    MCNAPI void sendJsonRpcSignal(
        ::NetherNet::NetworkID                              networkIDTo,
        ::NetherNet::NetworkID                              networkIDFrom,
        ::std::string const&                                message,
        ::std::function<void(::NetherNet::ESessionError)>&& onComplete
    );

    MCNAPI void sendTurnConfigRequest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::ISignalingJsonRpcInterop> interop);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initialize(::std::shared_ptr<::JsonRpc::JsonRpcProvider> provider);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace JsonRpc
