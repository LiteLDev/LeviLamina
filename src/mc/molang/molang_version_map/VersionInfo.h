#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MolangVersionMap {

struct VersionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnk8dd912;
    ::ll::UntypedStorage<2, 2>   mUnk9e0881;
    // NOLINTEND

public:
    // prevent constructor by default
    VersionInfo& operator=(VersionInfo const&);
    VersionInfo(VersionInfo const&);
    VersionInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~VersionInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace MolangVersionMap
