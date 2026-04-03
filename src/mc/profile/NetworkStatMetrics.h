#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkStatMetrics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke58846;
    ::ll::UntypedStorage<4, 4> mUnk7cbcb4;
    ::ll::UntypedStorage<4, 4> mUnkb28c5b;
    ::ll::UntypedStorage<4, 4> mUnkf13261;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkStatMetrics& operator=(NetworkStatMetrics const&);
    NetworkStatMetrics(NetworkStatMetrics const&);
    NetworkStatMetrics();
};
