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
    virtual ~CommandParserInterface() = default;

    virtual char const* GetName() const = 0;

    virtual void OnNewIncomingConnection(::RakNet::SystemAddress const&, ::RakNet::TransportInterface*);

    virtual void OnConnectionLost(::RakNet::SystemAddress const&, ::RakNet::TransportInterface*);

    virtual void SendHelp(::RakNet::TransportInterface*, ::RakNet::SystemAddress const&) = 0;

    virtual bool OnCommand(
        char const*,
        uint,
        char**,
        ::RakNet::TransportInterface*,
        ::RakNet::SystemAddress const&,
        char const*
    ) = 0;

    virtual void OnTransportChange(::RakNet::TransportInterface*);

    virtual bool GetRegisteredCommand(char const*, ::RakNet::RegisteredCommand*);

    virtual void SendCommandList(::RakNet::TransportInterface*, ::RakNet::SystemAddress const&);

    virtual void RegisterCommand(uchar, char const*, char const*);

    virtual void ReturnResult(bool, char const*, ::RakNet::TransportInterface*, ::RakNet::SystemAddress const&);

    virtual void ReturnResult(char*, char const*, ::RakNet::TransportInterface*, ::RakNet::SystemAddress const&);

    virtual void
    ReturnResult(::RakNet::SystemAddress, char const*, ::RakNet::TransportInterface*, ::RakNet::SystemAddress const&);

    virtual void ReturnResult(int, char const*, ::RakNet::TransportInterface*, ::RakNet::SystemAddress const&);

    virtual void ReturnResult(char const*, ::RakNet::TransportInterface*, ::RakNet::SystemAddress const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
