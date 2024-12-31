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

class NatTypeDetectionClient : public ::RakNet::PluginInterface2, public ::RakNet::RNS2EventHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk331e12;
    ::ll::UntypedStorage<8, 40>  mUnk5f024d;
    ::ll::UntypedStorage<8, 16>  mUnkd290ec;
    ::ll::UntypedStorage<8, 136> mUnk5a2bf5;
    // NOLINTEND

public:
    // prevent constructor by default
    NatTypeDetectionClient& operator=(NatTypeDetectionClient const&);
    NatTypeDetectionClient(NatTypeDetectionClient const&);
    NatTypeDetectionClient();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NatTypeDetectionClient() /*override*/ = default;

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

    // vIndex: 6
    virtual void OnRakPeerShutdown() /*override*/;

    // vIndex: 2
    virtual void OnDetach() /*override*/;

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

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
