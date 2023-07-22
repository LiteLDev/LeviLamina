/**
 * @file  JumpControlComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class JumpControlComponent.
 *
 */
class JumpControlComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
public:
    /**
     * @symbol  ??0JumpControlComponent\@\@QEAA\@XZ
     */
    MCAPI JumpControlComponent();
    /**
     * @symbol  ??0JumpControlComponent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI JumpControlComponent(class JumpControlComponent const &);
    /**
     * @symbol  ?getAnimationDuration\@JumpControlComponent\@\@QEBAHXZ
     */
    MCAPI int getAnimationDuration() const;
    /**
     * @symbol  ?getDistanceScale\@JumpControlComponent\@\@QEBAMXZ
     */
    MCAPI float getDistanceScale() const;
    /**
     * @symbol  ?getJumpDelay\@JumpControlComponent\@\@QEBAHXZ
     */
    MCAPI int getJumpDelay() const;
    /**
     * @symbol  ?getJumpPower\@JumpControlComponent\@\@QEBAMXZ
     */
    MCAPI float getJumpPower() const;
    /**
     * @symbol  ?getJumping\@JumpControlComponent\@\@QEBA_NXZ
     */
    MCAPI bool getJumping() const;
    /**
     * @symbol  ?getSwimming\@JumpControlComponent\@\@QEBA_NXZ
     */
    MCAPI bool getSwimming() const;
    /**
     * @symbol  ?initMultiTypeJumpComponent\@JumpControlComponent\@\@QEAAXAEAVMob\@\@AEAVActorDefinitionDescriptor\@\@\@Z
     */
    MCAPI void initMultiTypeJumpComponent(class Mob &, class ActorDefinitionDescriptor &);
    /**
     * @symbol  ?initializeFromDefinition\@JumpControlComponent\@\@QEAAXAEAVMob\@\@PEAUJumpControlDescription\@\@\@Z
     */
    MCAPI void initializeFromDefinition(class Mob &, struct JumpControlDescription *);
    /**
     * @symbol  ??4JumpControlComponent\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class JumpControlComponent & operator=(class JumpControlComponent const &);
    /**
     * @symbol  ??8JumpControlComponent\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class JumpControlComponent const &) const;
    /**
     * @symbol  ?resetSpeedModifier\@JumpControlComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void resetSpeedModifier(class Mob &);
    /**
     * @symbol  ?setInternalType\@JumpControlComponent\@\@QEAAXV?$unique_ptr\@VJumpControl\@\@U?$default_delete\@VJumpControl\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setInternalType(std::unique_ptr<class JumpControl>);
    /**
     * @symbol  ?setJumpType\@JumpControlComponent\@\@QEAAXW4JumpType\@\@\@Z
     */
    MCAPI void setJumpType(enum class JumpType);
    /**
     * @symbol  ?setJumping\@JumpControlComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setJumping(bool);
    /**
     * @symbol  ?setSwimming\@JumpControlComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setSwimming(bool);
    /**
     * @symbol  ?update\@JumpControlComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void update(class Mob &);
    /**
     * @symbol  ??1JumpControlComponent\@\@QEAA\@XZ
     */
    MCAPI ~JumpControlComponent();

//private:
    /**
     * @symbol  ?_getDelayInternal\@JumpControlComponent\@\@AEBAMXZ
     */
    MCAPI float _getDelayInternal() const;
    /**
     * @symbol  ?_getHeightInternal\@JumpControlComponent\@\@AEBAMXZ
     */
    MCAPI float _getHeightInternal() const;

private:

};