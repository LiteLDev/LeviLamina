#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JumpInfo {

public:
    // prevent constructor by default
    JumpInfo& operator=(JumpInfo const&) = delete;
    JumpInfo(JumpInfo const&)            = delete;
    JumpInfo()                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0JumpInfo\@\@QEAA\@MMHH\@Z
     */
    MCAPI JumpInfo(float, float, int32_t, int32_t);
    /**
     * @symbol ?getAnimDuration\@JumpInfo\@\@QEBAHXZ
     */
    MCAPI int32_t getAnimDuration() const;
    /**
     * @symbol ?getDistanceScale\@JumpInfo\@\@QEBAMXZ
     */
    MCAPI float getDistanceScale() const;
    /**
     * @symbol ?getHeight\@JumpInfo\@\@QEBAMXZ
     */
    MCAPI float getHeight() const;
    /**
     * @symbol ?getJumpDelay\@JumpInfo\@\@QEBAHXZ
     */
    MCAPI int32_t getJumpDelay() const;
    // NOLINTEND
};
