#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IConnectionEventing {
public:
    // IConnectionEventing inner types define
    enum class ConnectionFailureReason : uint {};

    enum class PlayerJoinWorldAttemptState : uint {};

    enum class ServerConnectionOutcome : uint {};
};
