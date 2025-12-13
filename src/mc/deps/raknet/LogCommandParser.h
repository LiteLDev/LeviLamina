#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/CommandParserInterface.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class TransportInterface; }
namespace RakNet { struct SystemAddress; }
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
        ::ll::UntypedStorage<8, 136> mUnkd6741f;
        ::ll::UntypedStorage<4, 4>   mUnk9d3396;
        // NOLINTEND

    public:
        // prevent constructor by default
        SystemAddressAndChannel& operator=(SystemAddressAndChannel const&);
        SystemAddressAndChannel(SystemAddressAndChannel const&);
        SystemAddressAndChannel();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk337f20;
    ::ll::UntypedStorage<8, 256> mUnk31edf9;
    ::ll::UntypedStorage<8, 8>   mUnkfce969;
    // NOLINTEND

public:
    // prevent constructor by default
    LogCommandParser& operator=(LogCommandParser const&);
    LogCommandParser(LogCommandParser const&);
    LogCommandParser();

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
