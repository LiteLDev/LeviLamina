#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SharedModifiers {
public:
    // prevent constructor by default
    SharedModifiers& operator=(SharedModifiers const&);
    SharedModifiers(SharedModifiers const&);
    SharedModifiers();

public:
    // NOLINTBEGIN
    // symbol: ?DAMAGE_BOOST@SharedModifiers@@2V?$shared_ptr@VAttributeModifier@@@std@@A
    MCAPI static std::shared_ptr<class AttributeModifier> DAMAGE_BOOST;

    // symbol: ?HEALTH_BOOST@SharedModifiers@@2V?$shared_ptr@VAttributeModifier@@@std@@A
    MCAPI static std::shared_ptr<class AttributeModifier> HEALTH_BOOST;

    // symbol: ?MOVEMENT_SLOWDOWN@SharedModifiers@@2V?$shared_ptr@VAttributeModifier@@@std@@A
    MCAPI static std::shared_ptr<class AttributeModifier> MOVEMENT_SLOWDOWN;

    // symbol: ?MOVEMENT_SPEED@SharedModifiers@@2V?$shared_ptr@VAttributeModifier@@@std@@A
    MCAPI static std::shared_ptr<class AttributeModifier> MOVEMENT_SPEED;

    // symbol: ?SPRINTING_BOOST@SharedModifiers@@2V?$shared_ptr@VAttributeModifier@@@std@@A
    MCAPI static std::shared_ptr<class AttributeModifier> SPRINTING_BOOST;

    // symbol: ?WEAKNESS@SharedModifiers@@2V?$shared_ptr@VAttributeModifier@@@std@@A
    MCAPI static std::shared_ptr<class AttributeModifier> WEAKNESS;

    // NOLINTEND
};
