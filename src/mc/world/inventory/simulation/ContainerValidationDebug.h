#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerValidationDebug {
public:
    // ContainerValidationDebug inner types declare
    // clang-format off
    class Client;
    class ServerAuth;
    class ServerScript;
    // clang-format on

    // ContainerValidationDebug inner types define
    class Client {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk5c5185;
        // NOLINTEND

    public:
        // prevent constructor by default
        Client& operator=(Client const&);
        Client(Client const&);
        Client();
    };

    class ServerAuth {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk5a0a61;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerAuth& operator=(ServerAuth const&);
        ServerAuth(ServerAuth const&);
        ServerAuth();
    };

    class ServerScript {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk65e57a;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerScript& operator=(ServerScript const&);
        ServerScript(ServerScript const&);
        ServerScript();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ContainerValidationDebug::Client const>       mClient;
    ::ll::TypedStorage<4, 4, ::ContainerValidationDebug::ServerAuth const>   mServerAuth;
    ::ll::TypedStorage<4, 4, ::ContainerValidationDebug::ServerScript const> mServerScript;
    // NOLINTEND
};
