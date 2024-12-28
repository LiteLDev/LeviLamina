#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/RNS2EventHandler.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct RNS2RecvStruct; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class NatTypeDetectionServer : public ::RakNet::PluginInterface2, public ::RakNet::RNS2EventHandler {
public:
    // NatTypeDetectionServer inner types declare
    // clang-format off
    struct NATDetectionAttempt;
    // clang-format on

    // NatTypeDetectionServer inner types define
    enum class NATDetectionState : int {
        None                      = 0,
        TestingNone1              = 1,
        TestingNone2              = 2,
        TestingFullCone1          = 3,
        TestingFullCone2          = 4,
        TestingAddressRestricted1 = 5,
        TestingAddressRestricted2 = 6,
        TestingPortRestricted1    = 7,
        TestingPortRestricted2    = 8,
        Done                      = 9,
    };

    struct NATDetectionAttempt {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 136> mUnkdb18b7;
        ::ll::UntypedStorage<4, 4>   mUnk35212e;
        ::ll::UntypedStorage<4, 4>   mUnk49949a;
        ::ll::UntypedStorage<4, 4>   mUnk469dad;
        ::ll::UntypedStorage<2, 2>   mUnk54ccbd;
        ::ll::UntypedStorage<8, 16>  mUnkd32b0b;
        // NOLINTEND

    public:
        // prevent constructor by default
        NATDetectionAttempt& operator=(NATDetectionAttempt const&);
        NATDetectionAttempt(NATDetectionAttempt const&);
        NATDetectionAttempt();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8248e3;
    ::ll::UntypedStorage<8, 40> mUnkf6027a;
    ::ll::UntypedStorage<8, 16> mUnk6255a4;
    ::ll::UntypedStorage<8, 16> mUnk14b9c9;
    ::ll::UntypedStorage<8, 16> mUnk618be4;
    ::ll::UntypedStorage<8, 16> mUnk5db0b8;
    ::ll::UntypedStorage<8, 16> mUnk485126;
    ::ll::UntypedStorage<1, 64> mUnk502297;
    // NOLINTEND

public:
    // prevent constructor by default
    NatTypeDetectionServer& operator=(NatTypeDetectionServer const&);
    NatTypeDetectionServer(NatTypeDetectionServer const&);
    NatTypeDetectionServer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NatTypeDetectionServer() /*override*/;

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

    // vIndex: 1
    virtual void OnRNS2Recv(::RakNet::RNS2RecvStruct*) /*override*/;

    // vIndex: 2
    virtual void DeallocRNS2RecvStruct(::RakNet::RNS2RecvStruct*, char const*, uint) /*override*/;

    // vIndex: 3
    virtual ::RakNet::RNS2RecvStruct* AllocRNS2RecvStruct(char const*, uint) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $Update();

    MCAPI ::RakNet::PluginReceiveResult $OnReceive(::RakNet::Packet*);

    MCAPI void
    $OnClosedConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, ::RakNet::PI2_LostConnectionReason);

    MCAPI void $OnRNS2Recv(::RakNet::RNS2RecvStruct*);

    MCAPI void $DeallocRNS2RecvStruct(::RakNet::RNS2RecvStruct*, char const*, uint);

    MCAPI ::RakNet::RNS2RecvStruct* $AllocRNS2RecvStruct(char const*, uint);
    // NOLINTEND
};

} // namespace RakNet
