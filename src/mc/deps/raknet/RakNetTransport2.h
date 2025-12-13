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
    virtual ~RakNetTransport2() /*override*/ = default;

    virtual bool Start(ushort, bool) /*override*/;

    virtual void Stop() /*override*/;

    virtual void Send(::RakNet::SystemAddress, char const*, ...) /*override*/;

    virtual void CloseConnection(::RakNet::SystemAddress) /*override*/;

    virtual ::RakNet::Packet* Receive() /*override*/;

    virtual void DeallocatePacket(::RakNet::Packet*) /*override*/;

    virtual ::RakNet::SystemAddress HasNewIncomingConnection() /*override*/;

    virtual ::RakNet::SystemAddress HasLostConnection() /*override*/;

    virtual ::RakNet::CommandParserInterface* GetCommandParser() /*override*/;

    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
