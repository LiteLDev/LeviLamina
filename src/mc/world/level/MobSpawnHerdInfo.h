#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobSpawnHerdInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBSPAWNHERDINFO
public:
    MobSpawnHerdInfo& operator=(MobSpawnHerdInfo const&) = delete;
    MobSpawnHerdInfo(MobSpawnHerdInfo const&)            = delete;
    MobSpawnHerdInfo()                                   = delete;
#endif

public:
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
};
