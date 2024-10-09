#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/JumpType.h"

class JumpControlComponent {
public:
    // NOLINTBEGIN
    MCAPI JumpControlComponent();

    MCAPI JumpControlComponent(class JumpControlComponent const& other);

    MCAPI int getAnimationDuration() const;

    MCAPI float getDistanceScale() const;

    MCAPI int getJumpDelay() const;

    MCAPI float getJumpPower() const;

    MCAPI bool getJumping() const;

    MCAPI bool getSwimming() const;

    MCAPI void initMultiTypeJumpComponent(class Mob& entity, class ActorDefinitionDescriptor& initDescription);

    MCAPI void initializeFromDefinition(class Mob& owner, struct JumpControlDescription* description);

    MCAPI class JumpControlComponent& operator=(class JumpControlComponent const& other);

    MCAPI void resetSpeedModifier(class Mob& owner);

    MCAPI void setInternalType(std::unique_ptr<class JumpControl> type);

    MCAPI void setJumpType(::JumpType type);

    MCAPI void setJumping(bool jumping);

    MCAPI void setSwimming(bool swimming);

    MCAPI void update(class Mob& owner);

    MCAPI ~JumpControlComponent();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI float _getDelayInternal() const;

    MCAPI float _getHeightInternal() const;

    // NOLINTEND
};
