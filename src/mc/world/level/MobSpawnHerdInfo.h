#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobSpawnHerdInfo {

public:
    // prevent constructor by default
    MobSpawnHerdInfo& operator=(MobSpawnHerdInfo const&) = delete;
    MobSpawnHerdInfo(MobSpawnHerdInfo const&)            = delete;
    MobSpawnHerdInfo()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0MobSpawnHerdInfo\@\@QEAA\@IIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@I0I\@Z
     */
    MCAPI
    MobSpawnHerdInfo(unsigned int, unsigned int, std::string const&, unsigned int, std::string const&, unsigned int);
    /**
     * @symbol ??1MobSpawnHerdInfo\@\@QEAA\@XZ
     */
    MCAPI ~MobSpawnHerdInfo();
    // NOLINTEND
};
