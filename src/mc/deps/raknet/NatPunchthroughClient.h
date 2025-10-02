#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/PunchthroughConfiguration.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/deps/raknet/data_structures/Queue.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct NatPunchthroughDebugInterface; }
namespace RakNet { struct Packet; }
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
        ::ll::TypedStorage<8, 8, uint64>                                              nextActionTime;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                           targetAddress;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                           facilitator;
        ::ll::TypedStorage<8, 2720, ::RakNet::SystemAddress[20]>                      internalIds;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                               targetGuid;
        ::ll::TypedStorage<1, 1, bool>                                                weAreSender;
        ::ll::TypedStorage<4, 4, int>                                                 attemptCount;
        ::ll::TypedStorage<4, 4, int>                                                 retryCount;
        ::ll::TypedStorage<4, 4, int>                                                 punchingFixedPortAttempts;
        ::ll::TypedStorage<2, 2, ushort>                                              sessionId;
        ::ll::TypedStorage<1, 1, bool>                                                sentTTL;
        ::ll::TypedStorage<4, 4, ::RakNet::NatPunchthroughClient::SendPing::TestMode> testMode;
        // NOLINTEND
    };

    struct AddrAndGuid {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> addr;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     guid;
        // NOLINTEND
    };

    struct DSTAndFac {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     destination;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> facilitator;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 3040, ::RakNet::NatPunchthroughClient::SendPing> sp;
    ::ll::TypedStorage<2, 2, ushort>                                       mostRecentExternalPort;
    ::ll::TypedStorage<8, 56, ::RakNet::PunchthroughConfiguration>         pc;
    ::ll::TypedStorage<8, 8, ::RakNet::NatPunchthroughDebugInterface*>     natPunchthroughDebugInterface;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::NatPunchthroughClient::AddrAndGuid>> failedAttemptList;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::NatPunchthroughClient::DSTAndFac>>  queuedOpenNat;
    ::ll::TypedStorage<2, 2, ushort>                                                                portStride;
    enum : int {
        HasPortStride         = 0,
        UnknownPortStride     = 1,
        CalculatingPortStride = 2,
        IncapablePortStride   = 3,
    } hasPortStride;
    ::ll::TypedStorage<8, 8, uint64> portStrideCalTimeout;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NatPunchthroughClient() /*override*/ = default;

    // vIndex: 3
    virtual void Update() /*override*/;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    // vIndex: 8
    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool) /*override*/;

    // vIndex: 7
    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    // vIndex: 1
    virtual void OnAttach() /*override*/;

    // vIndex: 2
    virtual void OnDetach() /*override*/;

    // vIndex: 6
    virtual void OnRakPeerShutdown() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
