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

class RakNetCommandParser : public ::RakNet::CommandParserInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3ff202;
    // NOLINTEND

public:
    // prevent constructor by default
    RakNetCommandParser& operator=(RakNetCommandParser const&);
    RakNetCommandParser(RakNetCommandParser const&);
    RakNetCommandParser();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RakNetCommandParser() /*override*/ = default;

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
