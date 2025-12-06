#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SignalingService {
public:
    // SignalingService inner types declare
    // clang-format off
    struct Channel;
    struct Connection;
    struct JsonRpcConnection;
    struct JsonRpcInterop;
    // clang-format on

    // SignalingService inner types define
    enum class ConnectionStatus : uint {};

    enum class SignInError : uint {};

    struct Channel {};

    struct Connection {
    public:
        // Connection inner types define
        enum class ServiceError : uint {};
    };

    struct JsonRpcConnection {};

    struct JsonRpcInterop {};
};
