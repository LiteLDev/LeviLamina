/**
 * @file  ExpiringTick.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ExpiringTick.
 *
 */
class ExpiringTick {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPIRINGTICK
public:
    class ExpiringTick& operator=(class ExpiringTick const &) = delete;
    ExpiringTick(class ExpiringTick const &) = delete;
    ExpiringTick() = delete;
#endif

public:
    /**
     * @hash   2146508162
     * @symbol  ??0ExpiringTick\@\@QEAA\@UTick\@\@G\@Z
     */
    MCAPI ExpiringTick(struct Tick, unsigned short);
    /**
     * @hash   885495458
     * @symbol  ?getExpireAtTick\@ExpiringTick\@\@QEBA?AUTick\@\@XZ
     */
    MCAPI struct Tick getExpireAtTick() const;
    /**
     * @hash   -1149469335
     * @symbol  ?getNormalizedElapsedTime\@ExpiringTick\@\@QEBAMAEBUTick\@\@\@Z
     */
    MCAPI float getNormalizedElapsedTime(struct Tick const &) const;
    /**
     * @hash   1266574071
     * @symbol  ?isActive\@ExpiringTick\@\@QEBA_NUTick\@\@\@Z
     */
    MCAPI bool isActive(struct Tick) const;
    /**
     * @hash   1100275535
     * @symbol  ?isExpired\@ExpiringTick\@\@QEBA_NUTick\@\@\@Z
     */
    MCAPI bool isExpired(struct Tick) const;

};