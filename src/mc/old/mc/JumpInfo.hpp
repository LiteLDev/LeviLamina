/**
 * @file  JumpInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class JumpInfo.
 *
 */
class JumpInfo {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUMPINFO
public:
    class JumpInfo& operator=(class JumpInfo const &) = delete;
    JumpInfo(class JumpInfo const &) = delete;
    JumpInfo() = delete;
#endif

public:
    /**
     * @symbol  ??0JumpInfo\@\@QEAA\@MMHH\@Z
     */
    MCAPI JumpInfo(float, float, int, int);
    /**
     * @symbol  ?getAnimDuration\@JumpInfo\@\@QEBAHXZ
     */
    MCAPI int getAnimDuration() const;
    /**
     * @symbol  ?getDistanceScale\@JumpInfo\@\@QEBAMXZ
     */
    MCAPI float getDistanceScale() const;
    /**
     * @symbol  ?getHeight\@JumpInfo\@\@QEBAMXZ
     */
    MCAPI float getHeight() const;
    /**
     * @symbol  ?getJumpDelay\@JumpInfo\@\@QEBAHXZ
     */
    MCAPI int getJumpDelay() const;
    /**
     * @symbol  ??9JumpInfo\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class JumpInfo const &) const;

};