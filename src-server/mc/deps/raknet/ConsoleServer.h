#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class CommandParserInterface; }
namespace RakNet { class TransportInterface; }
// clang-format on

namespace RakNet {

class ConsoleServer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RakNet::TransportInterface*>                              transport;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::CommandParserInterface*>> commandParserList;
    ::ll::TypedStorage<8, 2048, char* [256]>                                             password;
    ::ll::TypedStorage<8, 8, char*>                                                      prompt;
    // NOLINTEND
};

} // namespace RakNet
