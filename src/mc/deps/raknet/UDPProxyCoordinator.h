#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class UDPProxyCoordinator : public ::RakNet::PluginInterface2 {
public:
    // UDPProxyCoordinator inner types declare
    // clang-format off
    struct ForwardingRequest;
    struct SenderAndTargetAddress;
    struct ServerWithPing;
    // clang-format on

    // UDPProxyCoordinator inner types define
    struct SenderAndTargetAddress {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 136> mUnkd9141b;
        ::ll::UntypedStorage<8, 16>  mUnkbff42f;
        ::ll::UntypedStorage<8, 136> mUnk6bd4d5;
        ::ll::UntypedStorage<8, 16>  mUnk6f1088;
        // NOLINTEND

    public:
        // prevent constructor by default
        SenderAndTargetAddress& operator=(SenderAndTargetAddress const&);
        SenderAndTargetAddress(SenderAndTargetAddress const&);
        SenderAndTargetAddress();
    };

    struct ServerWithPing {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2>   mUnk649c77;
        ::ll::UntypedStorage<8, 136> mUnk836730;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerWithPing& operator=(ServerWithPing const&);
        ServerWithPing(ServerWithPing const&);
        ServerWithPing();
    };

    struct ForwardingRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>   mUnk4b79c9;
        ::ll::UntypedStorage<4, 4>   mUnk3df61c;
        ::ll::UntypedStorage<8, 304> mUnk50e688;
        ::ll::UntypedStorage<8, 136> mUnk51e8d7;
        ::ll::UntypedStorage<8, 136> mUnkc539e5;
        ::ll::UntypedStorage<8, 24>  mUnk8d7b6b;
        ::ll::UntypedStorage<8, 288> mUnkf688aa;
        ::ll::UntypedStorage<8, 16>  mUnk6abcf0;
        ::ll::UntypedStorage<8, 16>  mUnk274702;
        ::ll::UntypedStorage<4, 4>   mUnkdea37e;
        // NOLINTEND

    public:
        // prevent constructor by default
        ForwardingRequest& operator=(ForwardingRequest const&);
        ForwardingRequest(ForwardingRequest const&);
        ForwardingRequest();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkdc8895;
    ::ll::UntypedStorage<8, 16> mUnked7c82;
    ::ll::UntypedStorage<8, 8>  mUnk32be00;
    // NOLINTEND

public:
    // prevent constructor by default
    UDPProxyCoordinator& operator=(UDPProxyCoordinator const&);
    UDPProxyCoordinator(UDPProxyCoordinator const&);
    UDPProxyCoordinator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UDPProxyCoordinator() /*override*/ = default;

    // vIndex: 3
    virtual void Update() /*override*/;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    // vIndex: 7
    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
