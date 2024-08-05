#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SharedAttributes {
public:
    // prevent constructor by default
    SharedAttributes& operator=(SharedAttributes const&);
    SharedAttributes(SharedAttributes const&);
    SharedAttributes();

public:
    // NOLINTBEGIN
    MCAPI static bool checkIsDeprecated(std::string& name);

    MCAPI static std::shared_ptr<class AttributeModifier> loadAttributeModifier(class CompoundTag const& tag);

    MCAPI static void loadAttributes(class BaseAttributeMap* attributes, class ListTag const* list);

    MCAPI static std::unique_ptr<class ListTag> saveAttributes(class BaseAttributeMap const* attributes);

    MCAPI static class Attribute const ABSORPTION;

    MCAPI static class Attribute const ATTACK_DAMAGE;

    MCAPI static class Attribute const FOLLOW_RANGE;

    MCAPI static class Attribute const HEALTH;

    MCAPI static class Attribute const JUMP_STRENGTH;

    MCAPI static class Attribute const KNOCKBACK_RESISTANCE;

    MCAPI static class Attribute const LAVA_MOVEMENT_SPEED;

    MCAPI static class Attribute const LUCK;

    MCAPI static class Attribute const MOVEMENT_SPEED;

    MCAPI static class Attribute const UNDERWATER_MOVEMENT_SPEED;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class AttributeInstance*
    _legacyGetInstance(class BaseAttributeMap& attributes, std::string const& attributeName);

    MCAPI static std::string const& _legacyGetName(std::string const& attributeName);

    MCAPI static void _loadAttribute(class AttributeInstance& instance, class CompoundTag const* tag);

    MCAPI static std::unique_ptr<class CompoundTag> _saveAttribute(class AttributeInstance const& instance);

    MCAPI static std::unique_ptr<class CompoundTag> _saveAttributeBuff(class TemporalAttributeBuff const& buff);

    MCAPI static std::unique_ptr<class CompoundTag> _saveAttributeModifier(class AttributeModifier const& modifier);

    // NOLINTEND
};
