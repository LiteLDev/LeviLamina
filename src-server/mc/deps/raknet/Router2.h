#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_FailedConnectionAttemptReason.h"
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

class Router2 : public ::RakNet::PluginInterface2 {
public:
    // Router2 inner types declare
    // clang-format off
    struct ConnectionRequestSystem;
    struct ConnnectRequest;
    struct ForwardedConnection;
    struct MiniPunchRequest;
    // clang-format on

    // Router2 inner types define
    enum class Router2RequestStates : int {
        R2rsRequestStateQueryForwarding = 0,
        RequestStateRequestForwarding   = 1,
    };

    struct ConnectionRequestSystem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk79af13;
        ::ll::UntypedStorage<4, 4>  mUnk40b72f;
        ::ll::UntypedStorage<2, 2>  mUnke2ee60;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConnectionRequestSystem& operator=(ConnectionRequestSystem const&);
        ConnectionRequestSystem(ConnectionRequestSystem const&);
        ConnectionRequestSystem();
    };

    struct ConnnectRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk8c362a;
        ::ll::UntypedStorage<8, 40> mUnka6fe9e;
        ::ll::UntypedStorage<4, 4>  mUnkd7eb17;
        ::ll::UntypedStorage<4, 4>  mUnka4470f;
        ::ll::UntypedStorage<8, 16> mUnk20d261;
        ::ll::UntypedStorage<8, 16> mUnk8cb9d9;
        ::ll::UntypedStorage<1, 1>  mUnk197687;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConnnectRequest& operator=(ConnnectRequest const&);
        ConnnectRequest(ConnnectRequest const&);
        ConnnectRequest();
    };

    struct MiniPunchRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>  mUnk44df54;
        ::ll::UntypedStorage<8, 136> mUnk4ec4f5;
        ::ll::UntypedStorage<1, 1>   mUnke20bf0;
        ::ll::UntypedStorage<8, 16>  mUnkf0d333;
        ::ll::UntypedStorage<8, 136> mUnkbcf44f;
        ::ll::UntypedStorage<1, 1>   mUnk4a22cf;
        ::ll::UntypedStorage<4, 4>   mUnk7de0b2;
        ::ll::UntypedStorage<4, 4>   mUnkfa08aa;
        ::ll::UntypedStorage<2, 2>   mUnkdcc84a;
        ::ll::UntypedStorage<8, 8>   mUnkefe69e;
        // NOLINTEND

    public:
        // prevent constructor by default
        MiniPunchRequest& operator=(MiniPunchRequest const&);
        MiniPunchRequest(MiniPunchRequest const&);
        MiniPunchRequest();
    };

    struct ForwardedConnection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>  mUnk56a891;
        ::ll::UntypedStorage<8, 16>  mUnk23fa29;
        ::ll::UntypedStorage<8, 136> mUnkf5d213;
        ::ll::UntypedStorage<1, 1>   mUnkee5cf2;
        ::ll::UntypedStorage<1, 1>   mUnkd88e9a;
        // NOLINTEND

    public:
        // prevent constructor by default
        ForwardedConnection& operator=(ForwardedConnection const&);
        ForwardedConnection(ForwardedConnection const&);
        ForwardedConnection();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk5c003a;
    ::ll::UntypedStorage<4, 4>  mUnk5aa39a;
    ::ll::UntypedStorage<8, 40> mUnkd3d601;
    ::ll::UntypedStorage<8, 40> mUnkf34110;
    ::ll::UntypedStorage<8, 40> mUnkc92e56;
    ::ll::UntypedStorage<8, 16> mUnk40f14f;
    ::ll::UntypedStorage<8, 16> mUnk858659;
    ::ll::UntypedStorage<8, 16> mUnkb59eef;
    ::ll::UntypedStorage<8, 8>  mUnkf93660;
    ::ll::UntypedStorage<2, 2>  mUnk894cdb;
    // NOLINTEND

public:
    // prevent constructor by default
    Router2& operator=(Router2 const&);
    Router2(Router2 const&);
    Router2();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Router2() /*override*/ = default;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    // vIndex: 3
    virtual void Update() /*override*/;

    // vIndex: 7
    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    // vIndex: 9
    virtual void OnFailedConnectionAttempt(::RakNet::Packet*, ::RakNet::PI2_FailedConnectionAttemptReason) /*override*/;

    // vIndex: 6
    virtual void OnRakPeerShutdown() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
