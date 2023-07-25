#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DBStorageConfig {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DBSTORAGECONFIG
public:
    DBStorageConfig& operator=(DBStorageConfig const&) = delete;
    DBStorageConfig(DBStorageConfig const&)            = delete;
    DBStorageConfig()                                  = delete;
#endif

public:
    /**
     * @symbol ??1DBStorageConfig\@\@QEAA\@XZ
     */
    MCAPI ~DBStorageConfig();
};
