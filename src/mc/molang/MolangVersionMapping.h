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
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI static ::SemVersion getSemVersion(::MolangVersion molangVersion);
#endif

    MCAPI static ::MolangVersion getVersion(::SemVersion const& semVersion);
    // NOLINTEND
};
