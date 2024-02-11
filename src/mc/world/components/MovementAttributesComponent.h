#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementAttributesComponent {
public:
    // prevent constructor by default
    MovementAttributesComponent& operator=(MovementAttributesComponent const&);
    MovementAttributesComponent(MovementAttributesComponent const&);
    MovementAttributesComponent();

public:
    // NOLINTBEGIN
    // symbol: ?getHealth@MovementAttributesComponent@@QEBAMXZ
    MCAPI float getHealth() const;

    // symbol: ?getHunger@MovementAttributesComponent@@QEBAMXZ
    MCAPI float getHunger() const;

    // symbol: ?getJumpStrength@MovementAttributesComponent@@QEBAMXZ
    MCAPI float getJumpStrength() const;

    // symbol: ?getLavaMovementSpeed@MovementAttributesComponent@@QEBAMXZ
    MCAPI float getLavaMovementSpeed() const;

    // symbol: ?getMovementSpeed@MovementAttributesComponent@@QEBAMXZ
    MCAPI float getMovementSpeed() const;

    // symbol: ?getUnderwaterMovementSpeed@MovementAttributesComponent@@QEBAMXZ
    MCAPI float getUnderwaterMovementSpeed() const;

    // symbol:
    // ?getAttributeMap@MovementAttributesComponent@@SAAEBV?$unordered_map@VHashedString@@UMovementAttributeEntry@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@4@V?$allocator@U?$pair@$$CBVHashedString@@UMovementAttributeEntry@@@std@@@4@@std@@XZ
    MCAPI static std::unordered_map<class HashedString, struct MovementAttributeEntry> const& getAttributeMap();

    // NOLINTEND
};
