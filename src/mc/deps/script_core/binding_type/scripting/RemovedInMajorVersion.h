#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class RemovedInMajorVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk1cbd3e;
    // NOLINTEND

public:
    // prevent constructor by default
    RemovedInMajorVersion& operator=(RemovedInMajorVersion const&);
    RemovedInMajorVersion(RemovedInMajorVersion const&);
    RemovedInMajorVersion();
};

} // namespace Scripting
