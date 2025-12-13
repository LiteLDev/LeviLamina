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
    virtual ~LogCommandParser() /*override*/ = default;

    virtual bool OnCommand(
        char const*,
        uint,
        char**,
        ::RakNet::TransportInterface*,
        ::RakNet::SystemAddress const&,
        char const*
    ) /*override*/;

    virtual char const* GetName() const /*override*/;

    virtual void SendHelp(::RakNet::TransportInterface*, ::RakNet::SystemAddress const&) /*override*/;

    virtual void OnNewIncomingConnection(::RakNet::SystemAddress const&, ::RakNet::TransportInterface*) /*override*/;

    virtual void OnConnectionLost(::RakNet::SystemAddress const&, ::RakNet::TransportInterface*) /*override*/;

    virtual void OnTransportChange(::RakNet::TransportInterface*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
