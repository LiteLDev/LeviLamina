#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DBStorageConfig {

public:
    // prevent constructor by default
    DBStorageConfig& operator=(DBStorageConfig const&) = delete;
    DBStorageConfig(DBStorageConfig const&)            = delete;
    DBStorageConfig()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1DBStorageConfig\@\@QEAA\@XZ
     */
    MCAPI ~DBStorageConfig();
    // NOLINTEND
};
