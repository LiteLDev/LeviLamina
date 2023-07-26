#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandOriginIdentity {

public:
    // prevent constructor by default
    CommandOriginIdentity& operator=(CommandOriginIdentity const&) = delete;
    CommandOriginIdentity(CommandOriginIdentity const&)            = delete;
    CommandOriginIdentity()                                        = delete;

public:
    /**
     * @symbol ??1CommandOriginIdentity\@\@QEAA\@XZ
     */
    MCAPI ~CommandOriginIdentity(); // NOLINT
};
