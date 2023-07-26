#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExpiringTick {

public:
    // prevent constructor by default
    ExpiringTick& operator=(ExpiringTick const&) = delete;
    ExpiringTick(ExpiringTick const&)            = delete;
    ExpiringTick()                               = delete;

public:
    /**
     * @symbol ??0ExpiringTick\@\@QEAA\@UTick\@\@G\@Z
     */
    MCAPI ExpiringTick(struct Tick, unsigned short); // NOLINT
    /**
     * @symbol ?getExpireAtTick\@ExpiringTick\@\@QEBA?AUTick\@\@XZ
     */
    MCAPI struct Tick getExpireAtTick() const; // NOLINT
    /**
     * @symbol ?getNormalizedElapsedTime\@ExpiringTick\@\@QEBAMAEBUTick\@\@\@Z
     */
    MCAPI float getNormalizedElapsedTime(struct Tick const&) const; // NOLINT
    /**
     * @symbol ?isActive\@ExpiringTick\@\@QEBA_NUTick\@\@\@Z
     */
    MCAPI bool isActive(struct Tick) const; // NOLINT
    /**
     * @symbol ?isExpired\@ExpiringTick\@\@QEBA_NUTick\@\@\@Z
     */
    MCAPI bool isExpired(struct Tick) const; // NOLINT
};
