/**
 * @file  PackInstanceId.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure PackInstanceId.
 *
 */
struct PackInstanceId {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKINSTANCEID
public:
    struct PackInstanceId& operator=(struct PackInstanceId const &) = delete;
    PackInstanceId(struct PackInstanceId const &) = delete;
    PackInstanceId() = delete;
#endif

public:
    /**
     * @symbol  ??0PackInstanceId\@\@QEAA\@AEBUPackIdVersion\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI PackInstanceId(struct PackIdVersion const &, std::string const &);
    /**
     * @symbol  ??0PackInstanceId\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI PackInstanceId(struct PackInstanceId &&);
    /**
     * @symbol  ??1PackInstanceId\@\@QEAA\@XZ
     */
    MCAPI ~PackInstanceId();

};