#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/CommandParserInterface.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class TransportInterface; }
// clang-format on

namespace RakNet {

class LogCommandParser : public ::RakNet::CommandParserInterface {
public:
    // LogCommandParser inner types declare
    // clang-format off
    struct SystemAddressAndChannel;
    // clang-format on

    // LogCommandParser inner types define
    struct SystemAddressAndChannel {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> systemAddress;
        ::ll::TypedStorage<4, 4, uint>                      channels;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::LogCommandParser::SystemAddressAndChannel>> remoteUsers;
    ::ll::TypedStorage<8, 256, char const* [32]>                                                           channelNames;
    ::ll::TypedStorage<8, 8, ::RakNet::TransportInterface*>                                                trans;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LogCommandParser() /*override*/ = default;

    // vIndex: 5
    virtual bool OnCommand(
        char const*,
        uint,
        char**,
        ::RakNet::TransportInterface*,
        ::RakNet::SystemAddress const&,
        char const*
    ) /*override*/;

    // vIndex: 1
    virtual char const* GetName() const /*override*/;

    // vIndex: 4
    virtual void SendHelp(::RakNet::TransportInterface*, ::RakNet::SystemAddress const&) /*override*/;

    // vIndex: 2
    virtual void OnNewIncomingConnection(::RakNet::SystemAddress const&, ::RakNet::TransportInterface*) /*override*/;

    // vIndex: 3
    virtual void OnConnectionLost(::RakNet::SystemAddress const&, ::RakNet::TransportInterface*) /*override*/;

    // vIndex: 6
    virtual void OnTransportChange(::RakNet::TransportInterface*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
