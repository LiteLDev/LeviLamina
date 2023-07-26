#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JumpControlComponent {

public:
    /**
     * @symbol ??0JumpControlComponent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI JumpControlComponent(class JumpControlComponent const&); // NOLINT
    /**
     * @symbol ??0JumpControlComponent\@\@QEAA\@XZ
     */
    MCAPI JumpControlComponent(); // NOLINT
    /**
     * @symbol ?getAnimationDuration\@JumpControlComponent\@\@QEBAHXZ
     */
    MCAPI int getAnimationDuration() const; // NOLINT
    /**
     * @symbol ?getDistanceScale\@JumpControlComponent\@\@QEBAMXZ
     */
    MCAPI float getDistanceScale() const; // NOLINT
    /**
     * @symbol ?getJumpDelay\@JumpControlComponent\@\@QEBAHXZ
     */
    MCAPI int getJumpDelay() const; // NOLINT
    /**
     * @symbol ?getJumpPower\@JumpControlComponent\@\@QEBAMXZ
     */
    MCAPI float getJumpPower() const; // NOLINT
    /**
     * @symbol ?getJumping\@JumpControlComponent\@\@QEBA_NXZ
     */
    MCAPI bool getJumping() const; // NOLINT
    /**
     * @symbol ?getSwimming\@JumpControlComponent\@\@QEBA_NXZ
     */
    MCAPI bool getSwimming() const; // NOLINT
    /**
     * @symbol ?initMultiTypeJumpComponent\@JumpControlComponent\@\@QEAAXAEAVMob\@\@AEAVActorDefinitionDescriptor\@\@\@Z
     */
    MCAPI void initMultiTypeJumpComponent(class Mob&, class ActorDefinitionDescriptor&); // NOLINT
    /**
     * @symbol ?initializeFromDefinition\@JumpControlComponent\@\@QEAAXAEAVMob\@\@PEAUJumpControlDescription\@\@\@Z
     */
    MCAPI void initializeFromDefinition(class Mob&, struct JumpControlDescription*); // NOLINT
    /**
     * @symbol ??4JumpControlComponent\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class JumpControlComponent& operator=(class JumpControlComponent const&); // NOLINT
    /**
     * @symbol ?resetSpeedModifier\@JumpControlComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void resetSpeedModifier(class Mob&); // NOLINT
    /**
     * @symbol
     * ?setInternalType\@JumpControlComponent\@\@QEAAXV?$unique_ptr\@VJumpControl\@\@U?$default_delete\@VJumpControl\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setInternalType(std::unique_ptr<class JumpControl>); // NOLINT
    /**
     * @symbol ?setJumpType\@JumpControlComponent\@\@QEAAXW4JumpType\@\@\@Z
     */
    MCAPI void setJumpType(enum class JumpType); // NOLINT
    /**
     * @symbol ?setJumping\@JumpControlComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setJumping(bool); // NOLINT
    /**
     * @symbol ?setSwimming\@JumpControlComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setSwimming(bool); // NOLINT
    /**
     * @symbol ?update\@JumpControlComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void update(class Mob&); // NOLINT
    /**
     * @symbol ??1JumpControlComponent\@\@QEAA\@XZ
     */
    MCAPI ~JumpControlComponent(); // NOLINT

    // private:
    /**
     * @symbol ?_getDelayInternal\@JumpControlComponent\@\@AEBAMXZ
     */
    MCAPI float _getDelayInternal() const; // NOLINT
    /**
     * @symbol ?_getHeightInternal\@JumpControlComponent\@\@AEBAMXZ
     */
    MCAPI float _getHeightInternal() const; // NOLINT

private:
};
