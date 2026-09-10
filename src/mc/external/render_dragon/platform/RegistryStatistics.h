#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

struct RegistryStatistics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk695905;
    ::ll::UntypedStorage<4, 4> mUnkea6fc5;
    ::ll::UntypedStorage<4, 4> mUnk635cd8;
    // NOLINTEND

public:
    // prevent constructor by default
    RegistryStatistics& operator=(RegistryStatistics const&);
    RegistryStatistics(RegistryStatistics const&);
    RegistryStatistics();
};

} // namespace dragon::platform
