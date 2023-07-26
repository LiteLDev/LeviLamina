/**
 * @file  InternalSystemInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure InternalSystemInfo.
 *
 */
struct InternalSystemInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERNALSYSTEMINFO
public:
    struct InternalSystemInfo& operator=(struct InternalSystemInfo const &) = delete;
    InternalSystemInfo(struct InternalSystemInfo const &) = delete;
    InternalSystemInfo() = delete;
#endif

public:
    /**
     * @symbol  ??0InternalSystemInfo\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI InternalSystemInfo(struct InternalSystemInfo &&);
    /**
     * @symbol  ??1InternalSystemInfo\@\@QEAA\@XZ
     */
    MCAPI ~InternalSystemInfo();

};