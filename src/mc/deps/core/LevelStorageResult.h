#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct LevelStorageResult {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_LEVELSTORAGERESULT
public:
    LevelStorageResult& operator=(LevelStorageResult const&) = delete;
    LevelStorageResult(LevelStorageResult const&)            = delete;
    LevelStorageResult()                                     = delete;
#endif

public:
    /**
     * @symbol ??1LevelStorageResult\@Core\@\@QEAA\@XZ
     */
    MCAPI ~LevelStorageResult();
};

}; // namespace Core
