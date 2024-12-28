#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AttributeModifier;
// clang-format on

class SharedModifiers {
public:
    // prevent constructor by default
    SharedModifiers& operator=(SharedModifiers const&);
    SharedModifiers(SharedModifiers const&);
    SharedModifiers();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::shared_ptr<::AttributeModifier>& DAMAGE_BOOST();

    MCAPI static ::std::shared_ptr<::AttributeModifier>& HEALTH_BOOST();

    MCAPI static ::std::shared_ptr<::AttributeModifier>& MOVEMENT_SLOWDOWN();

    MCAPI static ::std::shared_ptr<::AttributeModifier>& MOVEMENT_SPEED();

    MCAPI static ::std::shared_ptr<::AttributeModifier>& SPRINTING_BOOST();

    MCAPI static ::std::shared_ptr<::AttributeModifier>& WEAKNESS();
    // NOLINTEND
};
