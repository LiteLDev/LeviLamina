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

class NatPunchthroughClient : public ::RakNet::PluginInterface2 {
public:
    // NatPunchthroughClient inner types declare
    // clang-format off
    struct AddrAndGuid;
    struct DSTAndFac;
    struct SendPing;
    // clang-format on

    // NatPunchthroughClient inner types define
    struct AddrAndGuid {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 136> mUnk2032bb;
        ::ll::UntypedStorage<8, 16>  mUnkcbce59;
        // NOLINTEND

    public:
        // prevent constructor by default
        AddrAndGuid& operator=(AddrAndGuid const&);
        AddrAndGuid(AddrAndGuid const&);
        AddrAndGuid();
    };

    struct DSTAndFac {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>  mUnk16424d;
        ::ll::UntypedStorage<8, 136> mUnkdc19cd;
        // NOLINTEND

    public:
        // prevent constructor by default
        DSTAndFac& operator=(DSTAndFac const&);
        DSTAndFac(DSTAndFac const&);
        DSTAndFac();
    };

    struct SendPing {
    public:
        // SendPing inner types define
        enum class TestMode : int {
            TestingInternalIps                                 = 0,
            WaitingForInternalIpsResponse                      = 1,
            TestingExternalIpsFacilitatorPortToFacilitatorPort = 2,
            TestingExternalIps1024ToFacilitatorPort            = 3,
            TestingExternalIpsFacilitatorPortTo1024            = 4,
            TestingExternalIps1024To1024                       = 5,
            WaitingAfterAllAttempts                            = 6,
            PunchingFixedPort                                  = 7,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>    mUnk18a299;
        ::ll::UntypedStorage<8, 136>  mUnk242bfd;
        ::ll::UntypedStorage<8, 136>  mUnk3bbd25;
        ::ll::UntypedStorage<8, 2720> mUnk357acc;
        ::ll::UntypedStorage<8, 16>   mUnk558bb1;
        ::ll::UntypedStorage<1, 1>    mUnk1a32d8;
        ::ll::UntypedStorage<4, 4>    mUnk473bf6;
        ::ll::UntypedStorage<4, 4>    mUnkd5a23b;
        ::ll::UntypedStorage<4, 4>    mUnk3511c3;
        ::ll::UntypedStorage<2, 2>    mUnk87cc06;
        ::ll::UntypedStorage<1, 1>    mUnk14f9f5;
        ::ll::UntypedStorage<4, 4>    mUnkeb2995;
        // NOLINTEND

    public:
        // prevent constructor by default
        SendPing& operator=(SendPing const&);
        SendPing(SendPing const&);
        SendPing();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 3040> mUnk54043f;
    ::ll::UntypedStorage<2, 2>    mUnk240a98;
    ::ll::UntypedStorage<8, 56>   mUnk79764a;
    ::ll::UntypedStorage<8, 8>    mUnkb0db55;
    ::ll::UntypedStorage<8, 16>   mUnk6c229b;
    ::ll::UntypedStorage<8, 24>   mUnkf9a4b3;
    ::ll::UntypedStorage<2, 2>    mUnka1a0e8;
    ::ll::UntypedStorage<4, 4>    mUnk3fd151;
    ::ll::UntypedStorage<8, 8>    mUnk49a337;
    // NOLINTEND

public:
    // prevent constructor by default
    NatPunchthroughClient& operator=(NatPunchthroughClient const&);
    NatPunchthroughClient(NatPunchthroughClient const&);
    NatPunchthroughClient();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NatPunchthroughClient() /*override*/ = default;

    virtual void Update() /*override*/;

    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool) /*override*/;

    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    virtual void OnAttach() /*override*/;

    virtual void OnDetach() /*override*/;

    virtual void OnRakPeerShutdown() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
