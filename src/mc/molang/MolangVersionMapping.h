#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

class MolangVersionMapping {
public:
    // prevent constructor by default
    MolangVersionMapping& operator=(MolangVersionMapping const&);
    MolangVersionMapping(MolangVersionMapping const&);
    MolangVersionMapping();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::MolangVersion const getVersion(::SemVersion const& semVersion);
    // NOLINTEND
};
