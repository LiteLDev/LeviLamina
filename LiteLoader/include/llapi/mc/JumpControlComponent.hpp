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
     * @hash   -51585782
     * @symbol  ??0JumpControlComponent\@\@QEAA\@XZ
     */
    MCAPI JumpControlComponent();
    /**
     * @hash   1406027697
     * @symbol  ??0JumpControlComponent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI JumpControlComponent(class JumpControlComponent const &);
    /**
     * @hash   1546037000
     * @symbol  ?getAnimationDuration\@JumpControlComponent\@\@QEBAHXZ
     */
    MCAPI int getAnimationDuration() const;
    /**
     * @hash   -1454820266
     * @symbol  ?getDistanceScale\@JumpControlComponent\@\@QEBAMXZ
     */
    MCAPI float getDistanceScale() const;
    /**
     * @hash   -282539480
     * @symbol  ?getJumpDelay\@JumpControlComponent\@\@QEBAHXZ
     */
    MCAPI int getJumpDelay() const;
    /**
     * @hash   -1495476266
     * @symbol  ?getJumpPower\@JumpControlComponent\@\@QEBAMXZ
     */
    MCAPI float getJumpPower() const;
    /**
     * @hash   395812062
     * @symbol  ?getJumping\@JumpControlComponent\@\@QEBA_NXZ
     */
    MCAPI bool getJumping() const;
    /**
     * @hash   516045898
     * @symbol  ?getSwimming\@JumpControlComponent\@\@QEBA_NXZ
     */
    MCAPI bool getSwimming() const;
    /**
     * @hash   -1871364129
     * @symbol  ?initMultiTypeJumpComponent\@JumpControlComponent\@\@QEAAXAEAVMob\@\@AEAVActorDefinitionDescriptor\@\@\@Z
     */
    MCAPI void initMultiTypeJumpComponent(class Mob &, class ActorDefinitionDescriptor &);
    /**
     * @hash   -743845040
     * @symbol  ?initializeFromDefinition\@JumpControlComponent\@\@QEAAXAEAVMob\@\@PEAUJumpControlDescription\@\@\@Z
     */
    MCAPI void initializeFromDefinition(class Mob &, struct JumpControlDescription *);
    /**
     * @hash   1813189428
     * @symbol  ??4JumpControlComponent\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class JumpControlComponent & operator=(class JumpControlComponent const &);
    /**
     * @symbol  ??8JumpControlComponent\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class JumpControlComponent const &) const;
    /**
     * @hash   -300114252
     * @symbol  ?resetSpeedModifier\@JumpControlComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void resetSpeedModifier(class Mob &);
    /**
     * @hash   1791591452
     * @symbol  ?setInternalType\@JumpControlComponent\@\@QEAAXV?$unique_ptr\@VJumpControl\@\@U?$default_delete\@VJumpControl\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setInternalType(std::unique_ptr<class JumpControl>);
    /**
     * @hash   2087666094
     * @symbol  ?setJumpType\@JumpControlComponent\@\@QEAAXW4JumpType\@\@\@Z
     */
    MCAPI void setJumpType(enum class JumpType);
    /**
     * @hash   -1865539146
     * @symbol  ?setJumping\@JumpControlComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setJumping(bool);
    /**
     * @hash   783412586
     * @symbol  ?setSwimming\@JumpControlComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setSwimming(bool);
    /**
     * @hash   -1328749644
     * @symbol  ?update\@JumpControlComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void update(class Mob &);
    /**
     * @hash   2105692600
     * @symbol  ??1JumpControlComponent\@\@QEAA\@XZ
     */
    MCAPI ~JumpControlComponent();

//private:
    /**
     * @hash   1869616910
     * @symbol  ?_getDelayInternal\@JumpControlComponent\@\@AEBAMXZ
     */
    MCAPI float _getDelayInternal() const;
    /**
     * @hash   1970558896
     * @symbol  ?_getHeightInternal\@JumpControlComponent\@\@AEBAMXZ
     */
    MCAPI float _getHeightInternal() const;

private:

};