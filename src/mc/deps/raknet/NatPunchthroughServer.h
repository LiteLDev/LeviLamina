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

class NatPunchthroughServer : public ::RakNet::PluginInterface2 {
public:
    // NatPunchthroughServer inner types declare
    // clang-format off
    struct ConnectionAttempt;
    struct User;
    // clang-format on

    // NatPunchthroughServer inner types define
    struct User {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>  mUnk553f33;
        ::ll::UntypedStorage<8, 136> mUnk2e7bbe;
        ::ll::UntypedStorage<2, 2>   mUnk84a59f;
        ::ll::UntypedStorage<1, 1>   mUnk2f9d19;
        ::ll::UntypedStorage<8, 16>  mUnk91a771;
        ::ll::UntypedStorage<8, 16>  mUnkdcd054;
        // NOLINTEND

    public:
        // prevent constructor by default
        User& operator=(User const&);
        User(User const&);
        User();
    };

    struct ConnectionAttempt {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk76dcd7;
        ::ll::UntypedStorage<8, 8> mUnkf4d438;
        ::ll::UntypedStorage<2, 2> mUnk9f35dc;
        ::ll::UntypedStorage<8, 8> mUnk256c45;
        ::ll::UntypedStorage<4, 4> mUnk5d3658;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConnectionAttempt& operator=(ConnectionAttempt const&);
        ConnectionAttempt(ConnectionAttempt const&);
        ConnectionAttempt();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>    mUnka1e774;
    ::ll::UntypedStorage<8, 16>   mUnkc60876;
    ::ll::UntypedStorage<2, 2>    mUnkc08f99;
    ::ll::UntypedStorage<8, 8>    mUnk888e5f;
    ::ll::UntypedStorage<8, 2720> mUnkf98e24;
    ::ll::UntypedStorage<1, 1>    mUnk1b9a7c;
    // NOLINTEND

public:
    // prevent constructor by default
    NatPunchthroughServer& operator=(NatPunchthroughServer const&);
    NatPunchthroughServer(NatPunchthroughServer const&);
    NatPunchthroughServer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NatPunchthroughServer() /*override*/ = default;

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

    // vIndex: 8
    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool) /*override*/;
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
