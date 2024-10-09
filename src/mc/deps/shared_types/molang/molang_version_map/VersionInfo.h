#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MolangVersionMap {

class VersionInfo {
public:
    // prevent constructor by default
    VersionInfo& operator=(VersionInfo const&);
    VersionInfo(VersionInfo const&);
    VersionInfo();

public:
    // NOLINTBEGIN
    MCAPI ~VersionInfo();

    // NOLINTEND
};

}; // namespace MolangVersionMap
