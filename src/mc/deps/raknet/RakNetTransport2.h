#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/TransportInterface.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class CommandParserInterface; }
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class RakNetTransport2 : public ::RakNet::TransportInterface, public ::RakNet::PluginInterface2 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk976a69;
    ::ll::UntypedStorage<8, 24> mUnkbc5159;
    ::ll::UntypedStorage<8, 24> mUnke29746;
    // NOLINTEND

public:
    // prevent constructor by default
    RakNetTransport2& operator=(RakNetTransport2 const&);
    RakNetTransport2(RakNetTransport2 const&);
    RakNetTransport2();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RakNetTransport2() /*override*/ = default;

    // vIndex: 1
    virtual bool Start(ushort, bool) /*override*/;

    // vIndex: 2
    virtual void Stop() /*override*/;

    // vIndex: 3
    virtual void Send(::RakNet::SystemAddress, char const*, ...) /*override*/;

    // vIndex: 4
    virtual void CloseConnection(::RakNet::SystemAddress) /*override*/;

    // vIndex: 5
    virtual ::RakNet::Packet* Receive() /*override*/;

    // vIndex: 6
    virtual void DeallocatePacket(::RakNet::Packet*) /*override*/;

    // vIndex: 7
    virtual ::RakNet::SystemAddress HasNewIncomingConnection() /*override*/;

    // vIndex: 8
    virtual ::RakNet::SystemAddress HasLostConnection() /*override*/;

    // vIndex: 9
    virtual ::RakNet::CommandParserInterface* GetCommandParser() /*override*/;

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
