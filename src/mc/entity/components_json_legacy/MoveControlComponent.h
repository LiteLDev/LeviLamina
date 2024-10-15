#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveControlComponent {
public:
    // prevent constructor by default
    MoveControlComponent& operator=(MoveControlComponent const&);
    MoveControlComponent(MoveControlComponent const&);

public:
    // NOLINTBEGIN
    MCAPI MoveControlComponent();

    MCAPI bool getHasWantedPosition() const;

    MCAPI float getMaxTurn() const;

    MCAPI bool getShouldBreach() const;

    MCAPI float getSpeedModifier() const;

    MCAPI class Vec3 const& getWantedPosition() const;

    MCAPI void initMultiTypeMovementComponent(class Mob& entity, class ActorDefinitionDescriptor& initDescription);

    MCAPI void initializeFromDefinition(class Mob& owner, struct MoveControlDescription* description);

    MCAPI class MoveControlComponent& operator=(class MoveControlComponent&&);

    MCAPI void setHasWantedPosition(bool value);

    MCAPI void setInternalType(std::unique_ptr<class MoveControl> type);

    MCAPI void setMaxTurn(float angle);

    MCAPI void setShouldBreach(bool breach);

    MCAPI void setSpeedModifier(float speedModifier);

    MCAPI void setWantedPosition(class Mob& owner, class Vec3 const& position, float speed);

    MCAPI void update(class Mob& owner);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _setWantedPosition(class Vec3 const& position);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    // NOLINTEND
};
