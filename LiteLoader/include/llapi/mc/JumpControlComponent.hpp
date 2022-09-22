/**
 * @file  JumpControlComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   791080522
     * @symbol ??0JumpControlComponent@@QEAA@XZ
     */
    MCAPI JumpControlComponent();
    /**
     * @hash   -2046257919
     * @symbol ??0JumpControlComponent@@QEAA@AEBV0@@Z
     */
    MCAPI JumpControlComponent(class JumpControlComponent const &);
    /**
     * @hash   -1906294744
     * @symbol ?getAnimationDuration@JumpControlComponent@@QEBAHXZ
     */
    MCAPI int getAnimationDuration() const;
    /**
     * @hash   -612184714
     * @symbol ?getDistanceScale@JumpControlComponent@@QEBAMXZ
     */
    MCAPI float getDistanceScale() const;
    /**
     * @hash   560096072
     * @symbol ?getJumpDelay@JumpControlComponent@@QEBAHXZ
     */
    MCAPI int getJumpDelay() const;
    /**
     * @hash   -652840714
     * @symbol ?getJumpPower@JumpControlComponent@@QEBAMXZ
     */
    MCAPI float getJumpPower() const;
    /**
     * @hash   263932110
     * @symbol ?getJumping@JumpControlComponent@@QEBA_NXZ
     */
    MCAPI bool getJumping() const;
    /**
     * @hash   384104442
     * @symbol ?getSwimming@JumpControlComponent@@QEBA_NXZ
     */
    MCAPI bool getSwimming() const;
    /**
     * @hash   -1028743953
     * @symbol ?initMultiTypeJumpComponent@JumpControlComponent@@QEAAXAEAVMob@@AEAVActorDefinitionDescriptor@@@Z
     */
    MCAPI void initMultiTypeJumpComponent(class Mob &, class ActorDefinitionDescriptor &);
    /**
     * @hash   98975024
     * @symbol ?initializeFromDefinition@JumpControlComponent@@QEAAXAEAVMob@@PEAUJumpControlDescription@@@Z
     */
    MCAPI void initializeFromDefinition(class Mob &, struct JumpControlDescription *);
    /**
     * @hash   -1639111564
     * @symbol ??4JumpControlComponent@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class JumpControlComponent & operator=(class JumpControlComponent const &);
    /**
     * @hash   542690436
     * @symbol ?resetSpeedModifier@JumpControlComponent@@QEAAXAEAVMob@@@Z
     */
    MCAPI void resetSpeedModifier(class Mob &);
    /**
     * @hash   1570699836
     * @symbol ?setInternalType@JumpControlComponent@@QEAAXV?$unique_ptr@VJumpControl@@U?$default_delete@VJumpControl@@@std@@@std@@@Z
     */
    MCAPI void setInternalType(std::unique_ptr<class JumpControl>);
    /**
     * @hash   -1364496514
     * @symbol ?setJumpType@JumpControlComponent@@QEAAXW4JumpType@@@Z
     */
    MCAPI void setJumpType(enum JumpType);
    /**
     * @hash   -1997419098
     * @symbol ?setJumping@JumpControlComponent@@QEAAX_N@Z
     */
    MCAPI void setJumping(bool);
    /**
     * @hash   651517258
     * @symbol ?setSwimming@JumpControlComponent@@QEAAX_N@Z
     */
    MCAPI void setSwimming(bool);
    /**
     * @hash   -485944956
     * @symbol ?update@JumpControlComponent@@QEAAXAEAVMob@@@Z
     */
    MCAPI void update(class Mob &);
    /**
     * @hash   1886246328
     * @symbol ??1JumpControlComponent@@QEAA@XZ
     */
    MCAPI ~JumpControlComponent();

//private:
    /**
     * @hash   -1582714834
     * @symbol ?_getDelayInternal@JumpControlComponent@@AEBAMXZ
     */
    MCAPI float _getDelayInternal() const;
    /**
     * @hash   -1481772848
     * @symbol ?_getHeightInternal@JumpControlComponent@@AEBAMXZ
     */
    MCAPI float _getHeightInternal() const;

private:

};