#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SharedAttributes {

public:
    // prevent constructor by default
    SharedAttributes& operator=(SharedAttributes const&) = delete;
    SharedAttributes(SharedAttributes const&)            = delete;
    SharedAttributes()                                   = delete;

public:
    /**
     * @symbol
     * ?checkIsDeprecated\@SharedAttributes\@\@SA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool checkIsDeprecated(std::string&); // NOLINT
    /**
     * @symbol ?loadAttributes\@SharedAttributes\@\@SAXPEAVBaseAttributeMap\@\@PEBVListTag\@\@\@Z
     */
    MCAPI static void loadAttributes(class BaseAttributeMap*, class ListTag const*); // NOLINT
    /**
     * @symbol
     * ?saveAttributes\@SharedAttributes\@\@SA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@PEBVBaseAttributeMap\@\@\@Z
     */
    MCAPI static std::unique_ptr<class ListTag> saveAttributes(class BaseAttributeMap const*); // NOLINT
    /**
     * @symbol ?ABSORPTION\@SharedAttributes\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const ABSORPTION; // NOLINT
    /**
     * @symbol ?ATTACK_DAMAGE\@SharedAttributes\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const ATTACK_DAMAGE; // NOLINT
    /**
     * @symbol ?FOLLOW_RANGE\@SharedAttributes\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const FOLLOW_RANGE; // NOLINT
    /**
     * @symbol ?HEALTH\@SharedAttributes\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const HEALTH; // NOLINT
    /**
     * @symbol ?JUMP_STRENGTH\@SharedAttributes\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const JUMP_STRENGTH; // NOLINT
    /**
     * @symbol ?KNOCKBACK_RESISTANCE\@SharedAttributes\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const KNOCKBACK_RESISTANCE; // NOLINT
    /**
     * @symbol ?LAVA_MOVEMENT_SPEED\@SharedAttributes\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const LAVA_MOVEMENT_SPEED; // NOLINT
    /**
     * @symbol ?LUCK\@SharedAttributes\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const LUCK; // NOLINT
    /**
     * @symbol ?MOVEMENT_SPEED\@SharedAttributes\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const MOVEMENT_SPEED; // NOLINT
    /**
     * @symbol ?UNDERWATER_MOVEMENT_SPEED\@SharedAttributes\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const UNDERWATER_MOVEMENT_SPEED; // NOLINT

    // private:
    /**
     * @symbol
     * ?_legacyGetInstance\@SharedAttributes\@\@CAPEAVAttributeInstance\@\@AEAVBaseAttributeMap\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class AttributeInstance* _legacyGetInstance(class BaseAttributeMap&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?_legacyGetName\@SharedAttributes\@\@CAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI static std::string const& _legacyGetName(std::string const&); // NOLINT
    /**
     * @symbol ?_loadAttribute\@SharedAttributes\@\@CAXAEAVAttributeInstance\@\@PEBVCompoundTag\@\@\@Z
     */
    MCAPI static void _loadAttribute(class AttributeInstance&, class CompoundTag const*); // NOLINT
    /**
     * @symbol
     * ?_saveAttribute\@SharedAttributes\@\@CA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBVAttributeInstance\@\@\@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> _saveAttribute(class AttributeInstance const&); // NOLINT
    /**
     * @symbol
     * ?_saveAttributeBuff\@SharedAttributes\@\@CA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBVTemporalAttributeBuff\@\@\@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> _saveAttributeBuff(class TemporalAttributeBuff const&); // NOLINT
    /**
     * @symbol
     * ?_saveAttributeModifier\@SharedAttributes\@\@CA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBVAttributeModifier\@\@\@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> _saveAttributeModifier(class AttributeModifier const&); // NOLINT

private:
};
