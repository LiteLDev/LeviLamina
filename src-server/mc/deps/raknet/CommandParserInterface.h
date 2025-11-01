#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class TransportInterface; }
namespace RakNet { struct RegisteredCommand; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class CommandParserInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc6a11f;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandParserInterface& operator=(CommandParserInterface const&);
    CommandParserInterface(CommandParserInterface const&);
    CommandParserInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandParserInterface() = default;

    // vIndex: 1
    virtual char const* GetName() const = 0;

    // vIndex: 2
    virtual void OnNewIncomingConnection(::RakNet::SystemAddress const&, ::RakNet::TransportInterface*);

    // vIndex: 3
    virtual void OnConnectionLost(::RakNet::SystemAddress const&, ::RakNet::TransportInterface*);

    // vIndex: 4
    virtual void SendHelp(::RakNet::TransportInterface*, ::RakNet::SystemAddress const&) = 0;

    // vIndex: 5
    virtual bool OnCommand(char const*, uint, char**, ::RakNet::TransportInterface*, ::RakNet::SystemAddress const&, char const*) = 0;

    // vIndex: 6
    virtual void OnTransportChange(::RakNet::TransportInterface*);

    // vIndex: 7
    virtual bool GetRegisteredCommand(char const*, ::RakNet::RegisteredCommand*);

    // vIndex: 8
    virtual void SendCommandList(::RakNet::TransportInterface*, ::RakNet::SystemAddress const&);

    // vIndex: 9
    virtual void RegisterCommand(uchar, char const*, char const*);

    // vIndex: 14
    virtual void ReturnResult(bool, char const*, ::RakNet::TransportInterface*, ::RakNet::SystemAddress const&);

    // vIndex: 13
    virtual void ReturnResult(char*, char const*, ::RakNet::TransportInterface*, ::RakNet::SystemAddress const&);

    // vIndex: 12
    virtual void ReturnResult(::RakNet::SystemAddress, char const*, ::RakNet::TransportInterface*, ::RakNet::SystemAddress const&);

    // vIndex: 11
    virtual void ReturnResult(int, char const*, ::RakNet::TransportInterface*, ::RakNet::SystemAddress const&);

    // vIndex: 10
    virtual void ReturnResult(char const*, ::RakNet::TransportInterface*, ::RakNet::SystemAddress const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
