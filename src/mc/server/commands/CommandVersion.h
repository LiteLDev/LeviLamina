#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

class CommandVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mFrom;
    ::ll::TypedStorage<4, 4, int> mTo;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SemVersion getLatestCompatibleSemVersion(int version);
    // NOLINTEND
};
