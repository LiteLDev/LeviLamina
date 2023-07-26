/**
 * @file  MobSpawnHerdInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure MobSpawnHerdInfo.
 *
 */
struct MobSpawnHerdInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBSPAWNHERDINFO
public:
    struct MobSpawnHerdInfo& operator=(struct MobSpawnHerdInfo const &) = delete;
    MobSpawnHerdInfo(struct MobSpawnHerdInfo const &) = delete;
    MobSpawnHerdInfo() = delete;
#endif

public:
    /**
     * @symbol  ??0MobSpawnHerdInfo\@\@QEAA\@IIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@I0I\@Z
     */
    MCAPI MobSpawnHerdInfo(unsigned int, unsigned int, std::string const &, unsigned int, std::string const &, unsigned int);
    /**
     * @symbol  ??1MobSpawnHerdInfo\@\@QEAA\@XZ
     */
    MCAPI ~MobSpawnHerdInfo();

};