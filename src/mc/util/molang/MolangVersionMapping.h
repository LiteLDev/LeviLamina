#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/MolangVersion.h"

class MolangVersionMapping {
public:
    // prevent constructor by default
    MolangVersionMapping& operator=(MolangVersionMapping const&);
    MolangVersionMapping(MolangVersionMapping const&);
    MolangVersionMapping();

public:
    // NOLINTBEGIN
    // symbol: ?getVersion@MolangVersionMapping@@SA?BW4MolangVersion@@AEBVSemVersion@@@Z
    MCAPI static ::MolangVersion const getVersion(class SemVersion const& semVersion);

    // NOLINTEND
};
