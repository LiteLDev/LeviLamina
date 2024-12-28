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

class TwoWayAuthentication : public ::RakNet::PluginInterface2 {
public:
    // TwoWayAuthentication inner types declare
    // clang-format off
    struct NonceAndRemoteSystemRequest;
    struct NonceGenerator;
    struct PendingChallenge;
    // clang-format on

    // TwoWayAuthentication inner types define
    struct PendingChallenge {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>   mUnkc24a01;
        ::ll::UntypedStorage<8, 152> mUnk64b3eb;
        ::ll::UntypedStorage<8, 8>   mUnkc5550f;
        ::ll::UntypedStorage<1, 1>   mUnkf2031a;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingChallenge& operator=(PendingChallenge const&);
        PendingChallenge(PendingChallenge const&);
        PendingChallenge();
    };

    struct NonceAndRemoteSystemRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 20>  mUnkfeaf89;
        ::ll::UntypedStorage<8, 152> mUnk9dab35;
        ::ll::UntypedStorage<2, 2>   mUnk69c7e6;
        ::ll::UntypedStorage<8, 8>   mUnk529beb;
        // NOLINTEND

    public:
        // prevent constructor by default
        NonceAndRemoteSystemRequest& operator=(NonceAndRemoteSystemRequest const&);
        NonceAndRemoteSystemRequest(NonceAndRemoteSystemRequest const&);
        NonceAndRemoteSystemRequest();
    };

    struct NonceGenerator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk9b9289;
        ::ll::UntypedStorage<2, 2>  mUnkbfbf68;
        // NOLINTEND

    public:
        // prevent constructor by default
        NonceGenerator& operator=(NonceGenerator const&);
        NonceGenerator(NonceGenerator const&);
        NonceGenerator();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke03c99;
    ::ll::UntypedStorage<8, 16> mUnkb83d0d;
    ::ll::UntypedStorage<8, 8>  mUnk3d901c;
    ::ll::UntypedStorage<8, 24> mUnka8a766;
    // NOLINTEND

public:
    // prevent constructor by default
    TwoWayAuthentication& operator=(TwoWayAuthentication const&);
    TwoWayAuthentication(TwoWayAuthentication const&);
    TwoWayAuthentication();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TwoWayAuthentication() /*override*/;

    // vIndex: 3
    virtual void Update() /*override*/;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    // vIndex: 6
    virtual void OnRakPeerShutdown() /*override*/;

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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $Update();

    MCAPI ::RakNet::PluginReceiveResult $OnReceive(::RakNet::Packet*);

    MCAPI void $OnRakPeerShutdown();

    MCAPI void
    $OnClosedConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, ::RakNet::PI2_LostConnectionReason);
    // NOLINTEND
};

} // namespace RakNet
