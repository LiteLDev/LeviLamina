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
    // vIndex: 0
    virtual ~RakNetCommandParser() /*override*/ = default;

    // vIndex: 5
    virtual bool
    OnCommand(char const*, uint, char**, ::RakNet::TransportInterface*, ::RakNet::SystemAddress const&, char const*) /*override*/
        ;

    // vIndex: 1
    virtual char const* GetName() const /*override*/;

    // vIndex: 4
    virtual void SendHelp(::RakNet::TransportInterface*, ::RakNet::SystemAddress const&) /*override*/;
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
