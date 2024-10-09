#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"

class MolangVersionMapping {
public:
    // prevent constructor by default
    MolangVersionMapping& operator=(MolangVersionMapping const&);
    MolangVersionMapping(MolangVersionMapping const&);
    MolangVersionMapping();

public:
    // NOLINTBEGIN
    MCAPI static ::MolangVersion const getVersion(class SemVersion const& semVersion);

    // NOLINTEND
};
