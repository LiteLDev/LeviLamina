#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"

class CommandVersion {
public:
    // prevent constructor by default
    CommandVersion& operator=(CommandVersion const&);
    CommandVersion(CommandVersion const&);
    CommandVersion();

public:
    // NOLINTBEGIN
    MCAPI CommandVersion(int from, int to);

    MCAPI static class SemVersion getLatestCompatibleSemVersion(int version);

    MCAPI static ::CurrentCmdVersion const getVersionMapping(class SemVersion const& engineVersion);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(int from, int to);

    MCAPI static int const& CurrentVersion();

    // NOLINTEND
};
