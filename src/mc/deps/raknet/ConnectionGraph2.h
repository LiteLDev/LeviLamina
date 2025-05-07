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

class ConnectionGraph2 : public ::RakNet::PluginInterface2 {
public:
    // ConnectionGraph2 inner types declare
    // clang-format off
    struct RemoteSystem;
    struct SystemAddressAndGuid;
    // clang-format on

    // ConnectionGraph2 inner types define
    struct SystemAddressAndGuid {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 136> mUnk8f578f;
        ::ll::UntypedStorage<8, 16>  mUnke655b1;
        ::ll::UntypedStorage<2, 2>   mUnk8a1226;
        // NOLINTEND

    public:
        // prevent constructor by default
        SystemAddressAndGuid& operator=(SystemAddressAndGuid const&);
        SystemAddressAndGuid(SystemAddressAndGuid const&);
        SystemAddressAndGuid();
    };

    struct RemoteSystem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk415487;
        ::ll::UntypedStorage<8, 16> mUnk6d12f8;
        // NOLINTEND

    public:
        // prevent constructor by default
        RemoteSystem& operator=(RemoteSystem const&);
        RemoteSystem(RemoteSystem const&);
        RemoteSystem();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkaad4a5;
    ::ll::UntypedStorage<1, 1>  mUnkd8d7a3;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectionGraph2& operator=(ConnectionGraph2 const&);
    ConnectionGraph2(ConnectionGraph2 const&);
    ConnectionGraph2();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ConnectionGraph2() /*override*/ = default;

    // vIndex: 7
    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    // vIndex: 8
    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool) /*override*/;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
