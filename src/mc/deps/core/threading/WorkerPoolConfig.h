#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorkerPoolConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb40ef3;
    ::ll::UntypedStorage<4, 4>  mUnk36a3d0;
    ::ll::UntypedStorage<8, 16> mUnk8952ba;
    ::ll::UntypedStorage<4, 8>  mUnkd55de7;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkerPoolConfig& operator=(WorkerPoolConfig const&);
    WorkerPoolConfig(WorkerPoolConfig const&);
    WorkerPoolConfig();
};
