#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"

class CommandVersion {
public:
    int mFrom = 0, mTo = 0x7FFFFFFF;

    CommandVersion() = default;

public:
    // NOLINTBEGIN
    MCAPI CommandVersion(int from, int to);

    MCAPI static class SemVersion getLatestCompatibleSemVersion(int version);

    MCAPI static ::CurrentCmdVersion const getVersionMapping(class SemVersion const& engineVersion);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI static int const& CurrentVersion();

    // NOLINTEND
};
