#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MultiPlayerLevel;
// clang-format on

class IConnectionEventing {
public:
    // IConnectionEventing inner types define
    enum class ServerConnectionOutcome : int {
        Success             = 0,
        Failed              = 1,
        FailedUserOffline   = 2,
        FailedServerFull    = 3,
        FailedServerOffline = 4,
    };

    enum class ConnectionFailureReason : int {
        Unknown                     = -1,
        MismatchedMinecraftProtocol = 1,
        MismatchedRaknetVersion     = 2,
    };

    enum class PlayerJoinWorldAttemptState : int {
        Unknown                = 0,
        AttemptingToJoin       = 1,
        TimedOutAttemptingJoin = 2,
        FailedToJoin           = 3,
        SuccessfulJoin         = 4,
        Canceled               = 5,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IConnectionEventing() = default;

    // vIndex: 1
    virtual void fireServerConnectionEvent(
        ::IConnectionEventing::ServerConnectionOutcome,
        uint,
        double,
        ::std::string const&,
        ::std::string const&
    ) = 0;

    // vIndex: 2
    virtual void fireEventOnSuccessfulClientLogin(::MultiPlayerLevel const*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
