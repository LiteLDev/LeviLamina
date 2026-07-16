#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Attribute;
class AttributeInstance;
class BaseAttributeMap;
class CompoundTag;
class ListTag;
// clang-format on

class SharedAttributes {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::CompoundTag> _saveAttribute(::AttributeInstance const& instance);

    MCAPI static void loadAttributes(::BaseAttributeMap* attributes, ::ListTag const* list);

    MCAPI static ::std::unique_ptr<::ListTag> saveAttributes(::BaseAttributeMap const* attributes);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Attribute const& ABSORPTION();

    MCAPI static ::Attribute const& AIR_DRAG_MODIFIER();

    MCAPI static ::Attribute const& ATTACK_DAMAGE();

    MCAPI static ::Attribute const& BOUNCINESS();

    MCAPI static ::Attribute const& FOLLOW_RANGE();

    MCAPI static ::Attribute const& FRICTION_MODIFIER();

    MCAPI static ::Attribute const& HEALTH();

    MCAPI static ::Attribute const& JUMP_STRENGTH();

    MCAPI static ::Attribute const& KNOCKBACK_RESISTANCE();

    MCAPI static ::Attribute const& LAVA_MOVEMENT_SPEED();

    MCAPI static ::Attribute const& LUCK();

    MCAPI static ::Attribute const& MOVEMENT_SPEED();

    MCAPI static ::Attribute const& UNDERWATER_MOVEMENT_SPEED();
    // NOLINTEND
};
