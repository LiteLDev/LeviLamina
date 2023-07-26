#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobSpawnerData {

public:
    // prevent constructor by default
    MobSpawnerData& operator=(MobSpawnerData const&) = delete;
    MobSpawnerData()                                 = delete;

public:
    /**
     * @symbol ??0MobSpawnerData\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI MobSpawnerData(class MobSpawnerData const&); // NOLINT
    /**
     * @symbol ??1MobSpawnerData\@\@QEAA\@XZ
     */
    MCAPI ~MobSpawnerData(); // NOLINT
};
