#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Attribute;
class AttributeInstance;
class AttributeModifier;
class BaseAttributeMap;
class CompoundTag;
class ListTag;
class TemporalAttributeBuff;
struct AttributeModificationContext;
// clang-format on

class SharedAttributes {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::AttributeInstance* _legacyGetInstance(::BaseAttributeMap& attributes, ::std::string const& attributeName);

    MCAPI static ::std::string const& _legacyGetName(::std::string const& attributeName);

    MCAPI static void _loadAttribute(::AttributeInstance& instance, ::CompoundTag const* tag, ::AttributeModificationContext& context);

    MCAPI static ::std::unique_ptr<::CompoundTag> _saveAttribute(::AttributeInstance const& instance);

    MCAPI static ::std::unique_ptr<::CompoundTag> _saveAttributeModifier(::AttributeModifier const& modifier);

    MCAPI static bool checkIsDeprecated(::std::string& name);

    MCAPI static ::TemporalAttributeBuff loadAttributeBuff(::CompoundTag const& tag);

    MCAPI static ::std::shared_ptr<::AttributeModifier> loadAttributeModifier(::CompoundTag const& tag);

    MCAPI static void loadAttributes(::BaseAttributeMap* attributes, ::ListTag const* list);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Attribute const& ABSORPTION();

    MCAPI static ::Attribute const& ATTACK_DAMAGE();

    MCAPI static ::Attribute const& FOLLOW_RANGE();

    MCAPI static ::Attribute const& HEALTH();

    MCAPI static ::Attribute const& JUMP_STRENGTH();

    MCAPI static ::Attribute const& KNOCKBACK_RESISTANCE();

    MCAPI static ::Attribute const& LAVA_MOVEMENT_SPEED();

    MCAPI static ::Attribute const& LUCK();

    MCAPI static ::Attribute const& MOVEMENT_SPEED();

    MCAPI static ::Attribute const& UNDERWATER_MOVEMENT_SPEED();
    // NOLINTEND

};
