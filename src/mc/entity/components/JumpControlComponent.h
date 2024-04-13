#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/JumpType.h"

class JumpControlComponent {
public:
    // NOLINTBEGIN
    // symbol: ??0JumpControlComponent@@QEAA@XZ
    MCAPI JumpControlComponent();

    // symbol: ??0JumpControlComponent@@QEAA@AEBV0@@Z
    MCAPI JumpControlComponent(class JumpControlComponent const& other);

    // symbol: ?getAnimationDuration@JumpControlComponent@@QEBAHXZ
    MCAPI int getAnimationDuration() const;

    // symbol: ?getDistanceScale@JumpControlComponent@@QEBAMXZ
    MCAPI float getDistanceScale() const;

    // symbol: ?getJumpDelay@JumpControlComponent@@QEBAHXZ
    MCAPI int getJumpDelay() const;

    // symbol: ?getJumpPower@JumpControlComponent@@QEBAMXZ
    MCAPI float getJumpPower() const;

    // symbol: ?getJumping@JumpControlComponent@@QEBA_NXZ
    MCAPI bool getJumping() const;

    // symbol: ?getSwimming@JumpControlComponent@@QEBA_NXZ
    MCAPI bool getSwimming() const;

    // symbol: ?initMultiTypeJumpComponent@JumpControlComponent@@QEAAXAEAVMob@@AEAVActorDefinitionDescriptor@@@Z
    MCAPI void initMultiTypeJumpComponent(class Mob& entity, class ActorDefinitionDescriptor& initDescription);

    // symbol: ?initializeFromDefinition@JumpControlComponent@@QEAAXAEAVMob@@PEAUJumpControlDescription@@@Z
    MCAPI void initializeFromDefinition(class Mob& owner, struct JumpControlDescription* description);

    // symbol: ??4JumpControlComponent@@QEAAAEAV0@AEBV0@@Z
    MCAPI class JumpControlComponent& operator=(class JumpControlComponent const& other);

    // symbol: ?resetSpeedModifier@JumpControlComponent@@QEAAXAEAVMob@@@Z
    MCAPI void resetSpeedModifier(class Mob& owner);

    // symbol:
    // ?setInternalType@JumpControlComponent@@QEAAXV?$unique_ptr@VJumpControl@@U?$default_delete@VJumpControl@@@std@@@std@@@Z
    MCAPI void setInternalType(std::unique_ptr<class JumpControl> type);

    // symbol: ?setJumpType@JumpControlComponent@@QEAAXW4JumpType@@@Z
    MCAPI void setJumpType(::JumpType type);

    // symbol: ?setJumping@JumpControlComponent@@QEAAX_N@Z
    MCAPI void setJumping(bool jumping);

    // symbol: ?setSwimming@JumpControlComponent@@QEAAX_N@Z
    MCAPI void setSwimming(bool swimming);

    // symbol: ?update@JumpControlComponent@@QEAAXAEAVMob@@@Z
    MCAPI void update(class Mob& owner);

    // symbol: ??1JumpControlComponent@@QEAA@XZ
    MCAPI ~JumpControlComponent();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getDelayInternal@JumpControlComponent@@AEBAMXZ
    MCAPI float _getDelayInternal() const;

    // symbol: ?_getHeightInternal@JumpControlComponent@@AEBAMXZ
    MCAPI float _getHeightInternal() const;

    // NOLINTEND
};
