/**
 * @file  JumpInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1190455968
     * @symbol ??0JumpInfo@@QEAA@MMHH@Z
     */
    MCAPI JumpInfo(float, float, int, int);
    /**
     * @hash   1372211990
     * @symbol ?getAnimDuration@JumpInfo@@QEBAHXZ
     */
    MCAPI int getAnimDuration() const;
    /**
     * @hash   -586827114
     * @symbol ?getDistanceScale@JumpInfo@@QEBAMXZ
     */
    MCAPI float getDistanceScale() const;
    /**
     * @hash   1892566852
     * @symbol ?getHeight@JumpInfo@@QEBAMXZ
     */
    MCAPI float getHeight() const;
    /**
     * @hash   1955399176
     * @symbol ?getJumpDelay@JumpInfo@@QEBAHXZ
     */
    MCAPI int getJumpDelay() const;

};