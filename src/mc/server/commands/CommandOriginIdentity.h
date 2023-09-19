#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandOriginIdentity {
public:
    // prevent constructor by default
    CommandOriginIdentity& operator=(CommandOriginIdentity const&);
    CommandOriginIdentity(CommandOriginIdentity const&);
    CommandOriginIdentity();

public:
    // NOLINTBEGIN
    // symbol: ??1CommandOriginIdentity@@QEAA@XZ
    MCAPI ~CommandOriginIdentity();

    // NOLINTEND
};
