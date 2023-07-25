#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IConnectionEventing {
public:
    // IConnectionEventing inner types declare
    // clang-format off

    // clang-format on

    // IConnectionEventing inner types define
    enum class ConnectionFailureReason {};

    enum class PlayerJoinWorldAttemptState {};

    enum class ServerConnectionOutcome {};

    enum class SignalServiceConnectState {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICONNECTIONEVENTING
public:
    IConnectionEventing& operator=(IConnectionEventing const&) = delete;
    IConnectionEventing(IConnectionEventing const&)            = delete;
    IConnectionEventing()                                      = delete;
#endif

public:
};
