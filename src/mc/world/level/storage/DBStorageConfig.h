#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DBStorageConfig {
public:
    // prevent constructor by default
    DBStorageConfig& operator=(DBStorageConfig const&);
    DBStorageConfig(DBStorageConfig const&);
    DBStorageConfig();

public:
    // NOLINTBEGIN
    MCAPI ~DBStorageConfig();

    // NOLINTEND
};
