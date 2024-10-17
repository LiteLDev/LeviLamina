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
    MCAPI ~CommandOriginIdentity();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
