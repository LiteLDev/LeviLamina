#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Attribute;
class AttributeInstance;
class AttributeInstanceRef;
class BaseAttributeMap;
class CompoundTag;
class ListTag;
// clang-format on

class SharedAttributes {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _isDefaultAttribute(::AttributeInstance const& instance, ::AttributeInstance const& defaults);

    MCNAPI static ::AttributeInstanceRef
    _legacyGetInstance(::BaseAttributeMap& attributes, ::std::string const& attributeName);

    MCNAPI static ::std::string const& _legacyGetName(::std::string const& attributeName);

    MCNAPI static ::std::unique_ptr<::CompoundTag> _saveAttribute(::AttributeInstance const& instance);

    MCNAPI static void
    loadAttributes(::BaseAttributeMap* attributes, ::ListTag const* list, ::BaseAttributeMap const* defaults);

    MCNAPI static ::std::unique_ptr<::ListTag>
    saveAttributes(::BaseAttributeMap const* attributes, ::BaseAttributeMap const* defaults);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Attribute const& ABSORPTION();

    MCNAPI static ::Attribute const& AIR_DRAG_MODIFIER();

    MCAPI static ::Attribute const& ATTACK_DAMAGE();

    MCNAPI static ::Attribute const& BOUNCINESS();

    MCAPI static ::Attribute const& FOLLOW_RANGE();

    MCNAPI static ::Attribute const& FRICTION_MODIFIER();

    MCAPI static ::Attribute const& HEALTH();

    MCAPI static ::Attribute const& JUMP_STRENGTH();

    MCAPI static ::Attribute const& KNOCKBACK_RESISTANCE();

    MCAPI static ::Attribute const& LAVA_MOVEMENT_SPEED();

    MCAPI static ::Attribute const& LUCK();

    MCAPI static ::Attribute const& MOVEMENT_SPEED();

    MCAPI static ::Attribute const& UNDERWATER_MOVEMENT_SPEED();
    // NOLINTEND
};
