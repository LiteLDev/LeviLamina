#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JumpInfo {

public:
    // prevent constructor by default
    JumpInfo& operator=(JumpInfo const&) = delete;
    JumpInfo(JumpInfo const&)            = delete;
    JumpInfo()                           = delete;

public:
    /**
     * @symbol ??0JumpInfo\@\@QEAA\@MMHH\@Z
     */
    MCAPI JumpInfo(float, float, int, int); // NOLINT
    /**
     * @symbol ?getAnimDuration\@JumpInfo\@\@QEBAHXZ
     */
    MCAPI int getAnimDuration() const; // NOLINT
    /**
     * @symbol ?getDistanceScale\@JumpInfo\@\@QEBAMXZ
     */
    MCAPI float getDistanceScale() const; // NOLINT
    /**
     * @symbol ?getHeight\@JumpInfo\@\@QEBAMXZ
     */
    MCAPI float getHeight() const; // NOLINT
    /**
     * @symbol ?getJumpDelay\@JumpInfo\@\@QEBAHXZ
     */
    MCAPI int getJumpDelay() const; // NOLINT
};
