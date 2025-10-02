#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RakString.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/Queue.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class TCPInterface; }
// clang-format on

namespace RakNet {

class HTTPConnection {
public:
    // HTTPConnection inner types declare
    // clang-format off
    struct BadResponse;
    struct OutgoingCommand;
    // clang-format on

    // HTTPConnection inner types define
    enum class ResponseCodes : int {
        NoBody  = 1001,
        Ok      = 200,
        Deleted = 1002,
    };

    struct BadResponse {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RakNet::RakString> data;
        ::ll::TypedStorage<4, 4, int>                 code;
        // NOLINTEND
    };

    struct OutgoingCommand {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RakNet::RakString> remotePath;
        ::ll::TypedStorage<8, 8, ::RakNet::RakString> data;
        ::ll::TypedStorage<8, 8, ::RakNet::RakString> contentType;
        ::ll::TypedStorage<1, 1, bool>                isPost;
        // NOLINTEND
    };

    enum class ConnectionState : int {
        None          = 0,
        Disconnecting = 1,
        Connecting    = 2,
        Connected     = 3,
        Processing    = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::HTTPConnection::OutgoingCommand>> outgoingCommand;
    ::ll::TypedStorage<8, 32, ::RakNet::HTTPConnection::OutgoingCommand>                      currentProcessingCommand;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                                       server;
    ::ll::TypedStorage<8, 8, ::RakNet::TCPInterface*>                                         tcp;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>                                             host;
    ::ll::TypedStorage<2, 2, ushort>                                                          port;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::HTTPConnection::BadResponse>> badResponses;
    ::ll::TypedStorage<4, 4, ::RakNet::HTTPConnection::ConnectionState>                       connectionState;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>                                             incomingData;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::RakString>>                   results;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HTTPConnection() = default;
    // NOLINTEND
};

} // namespace RakNet
