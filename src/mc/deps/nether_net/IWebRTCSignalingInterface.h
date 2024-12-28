#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/SignalingHostConnectionStatus.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { struct ISignalingEventHandler; }
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

class IWebRTCSignalingInterface {
public:
    // IWebRTCSignalingInterface inner types declare
    // clang-format off
    struct SignalingConfiguration;
    // clang-format on

    // IWebRTCSignalingInterface inner types define
    struct SignalingConfiguration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk78abe5;
        ::ll::UntypedStorage<8, 8> mUnkd50408;
        ::ll::UntypedStorage<8, 8> mUnkbc5e80;
        ::ll::UntypedStorage<8, 8> mUnk6ddb5c;
        // NOLINTEND

    public:
        // prevent constructor by default
        SignalingConfiguration& operator=(SignalingConfiguration const&);
        SignalingConfiguration(SignalingConfiguration const&);
        SignalingConfiguration();
    };

public:
    // prevent constructor by default
    IWebRTCSignalingInterface& operator=(IWebRTCSignalingInterface const&);
    IWebRTCSignalingInterface(IWebRTCSignalingInterface const&);
    IWebRTCSignalingInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void
    SignIn(::std::function<void(::std::error_code)> const&, ::std::function<void(::NetherNet::SignalingHostConnectionStatus, uint)> const&, ::NetherNet::IWebRTCSignalingInterface::SignalingConfiguration const&) = 0;

    // vIndex: 1
    virtual void SignOut() = 0;

    // vIndex: 2
    virtual bool IsSignedIn() const = 0;

    // vIndex: 3
    virtual void Update() = 0;

    // vIndex: 4
    virtual void
    SendSignal(::NetherNet::NetworkID, char const*, uint, ::std::function<void(::NetherNet::ESessionError)>&&) = 0;

    // vIndex: 5
    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
