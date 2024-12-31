#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/TransportInterface.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class CommandParserInterface; }
namespace RakNet { struct Packet; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class TelnetTransport : public ::RakNet::TransportInterface {
public:
    // TelnetTransport inner types declare
    // clang-format off
    struct TelnetClient;
    // clang-format on

    // TelnetTransport inner types define
    struct TelnetClient {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 136>  mUnk8e815c;
        ::ll::UntypedStorage<1, 2048> mUnk86bdac;
        ::ll::UntypedStorage<1, 2048> mUnk76d7a7;
        ::ll::UntypedStorage<4, 4>    mUnk494f83;
        // NOLINTEND

    public:
        // prevent constructor by default
        TelnetClient& operator=(TelnetClient const&);
        TelnetClient(TelnetClient const&);
        TelnetClient();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk23ba2b;
    ::ll::UntypedStorage<8, 16> mUnkc1db1a;
    ::ll::UntypedStorage<8, 8>  mUnkf54b15;
    ::ll::UntypedStorage<8, 8>  mUnk447173;
    // NOLINTEND

public:
    // prevent constructor by default
    TelnetTransport& operator=(TelnetTransport const&);
    TelnetTransport(TelnetTransport const&);
    TelnetTransport();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TelnetTransport() /*override*/ = default;

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
