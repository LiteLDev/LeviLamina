#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/TransportInterface.h"
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class CommandParserInterface; }
namespace RakNet { class TCPInterface; }
namespace RakNet { struct Packet; }
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
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> systemAddress;
        ::ll::TypedStorage<1, 2048, char[2048]>             textInput;
        ::ll::TypedStorage<1, 2048, char[2048]>             lastSentTextInput;
        ::ll::TypedStorage<4, 4, uint>                      cursorPosition;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RakNet::TCPInterface*>                                           tcpInterface;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::TelnetTransport::TelnetClient*>> remoteClients;
    ::ll::TypedStorage<8, 8, char*>                                                             sendSuffix;
    ::ll::TypedStorage<8, 8, char*>                                                             sendPrefix;
    // NOLINTEND

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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
