#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        ::ll::UntypedStorage<8, 8> mUnk7904b7;
        ::ll::UntypedStorage<4, 4> mUnk92d3c7;
        // NOLINTEND

    public:
        // prevent constructor by default
        BadResponse& operator=(BadResponse const&);
        BadResponse(BadResponse const&);
        BadResponse();
    };

    struct OutgoingCommand {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkb6a994;
        ::ll::UntypedStorage<8, 8> mUnk9b7015;
        ::ll::UntypedStorage<8, 8> mUnkb2dd45;
        ::ll::UntypedStorage<1, 1> mUnk4c8300;
        // NOLINTEND

    public:
        // prevent constructor by default
        OutgoingCommand& operator=(OutgoingCommand const&);
        OutgoingCommand(OutgoingCommand const&);
        OutgoingCommand();
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
    ::ll::UntypedStorage<8, 24>  mUnkd044b2;
    ::ll::UntypedStorage<8, 32>  mUnkbbd660;
    ::ll::UntypedStorage<8, 136> mUnk743409;
    ::ll::UntypedStorage<8, 8>   mUnk23e7ef;
    ::ll::UntypedStorage<8, 8>   mUnkd535f3;
    ::ll::UntypedStorage<2, 2>   mUnk87465b;
    ::ll::UntypedStorage<8, 24>  mUnk9d5f06;
    ::ll::UntypedStorage<4, 4>   mUnk40017d;
    ::ll::UntypedStorage<8, 8>   mUnk62032b;
    ::ll::UntypedStorage<8, 24>  mUnka2f53f;
    // NOLINTEND

public:
    // prevent constructor by default
    HTTPConnection& operator=(HTTPConnection const&);
    HTTPConnection(HTTPConnection const&);
    HTTPConnection();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HTTPConnection() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
