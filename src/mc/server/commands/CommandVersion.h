#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

class CommandVersion {
public:
    // member variables
    // NOLINTBEGIN
    int mFrom;
    int mTo;
    // NOLINTEND

public:
    CommandVersion(int from = 0, int to = 0x7FFFFFFF) : mFrom(from), mTo(to) {}

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::CurrentCmdVersion const getVersionMapping(::SemVersion const& engineVersion);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& CurrentVersion();
    // NOLINTEND
};
