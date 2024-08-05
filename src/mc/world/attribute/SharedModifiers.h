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
    MCAPI static std::shared_ptr<class AttributeModifier> DAMAGE_BOOST;

    MCAPI static std::shared_ptr<class AttributeModifier> HEALTH_BOOST;

    MCAPI static std::shared_ptr<class AttributeModifier> MOVEMENT_SLOWDOWN;

    MCAPI static std::shared_ptr<class AttributeModifier> MOVEMENT_SPEED;

    MCAPI static std::shared_ptr<class AttributeModifier> SPRINTING_BOOST;

    MCAPI static std::shared_ptr<class AttributeModifier> WEAKNESS;

    // NOLINTEND
};
