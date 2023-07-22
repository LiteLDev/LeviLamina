/**
 * @file  SharedAttributes.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SharedAttributes.
 *
 */
class SharedAttributes {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAREDATTRIBUTES
public:
    class SharedAttributes& operator=(class SharedAttributes const &) = delete;
    SharedAttributes(class SharedAttributes const &) = delete;
    SharedAttributes() = delete;
#endif

public:
    /**
     * @symbol  ?ABSORPTION\@SharedAttributes\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const ABSORPTION;
    /**
     * @symbol  ?ATTACK_DAMAGE\@SharedAttributes\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const ATTACK_DAMAGE;
    /**
     * @symbol  ?FOLLOW_RANGE\@SharedAttributes\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const FOLLOW_RANGE;
    /**
     * @symbol  ?HEALTH\@SharedAttributes\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const HEALTH;
    /**
     * @symbol  ?JUMP_STRENGTH\@SharedAttributes\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const JUMP_STRENGTH;
    /**
     * @symbol  ?KNOCKBACK_RESISTANCE\@SharedAttributes\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const KNOCKBACK_RESISTANCE;
    /**
     * @symbol  ?LAVA_MOVEMENT_SPEED\@SharedAttributes\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const LAVA_MOVEMENT_SPEED;
    /**
     * @symbol  ?LUCK\@SharedAttributes\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const LUCK;
    /**
     * @symbol  ?MOVEMENT_SPEED\@SharedAttributes\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const MOVEMENT_SPEED;
    /**
     * @symbol  ?UNDERWATER_MOVEMENT_SPEED\@SharedAttributes\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const UNDERWATER_MOVEMENT_SPEED;
    /**
     * @symbol  ?checkIsDeprecated\@SharedAttributes\@\@SA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool checkIsDeprecated(std::string &);
    /**
     * @symbol  ?loadAttributeBuff\@SharedAttributes\@\@SA?AVTemporalAttributeBuff\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class TemporalAttributeBuff loadAttributeBuff(class CompoundTag const &);
    /**
     * @symbol  ?loadAttributeModifier\@SharedAttributes\@\@SA?AV?$shared_ptr\@VAttributeModifier\@\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> loadAttributeModifier(class CompoundTag const &);
    /**
     * @symbol  ?loadAttributes\@SharedAttributes\@\@SAXPEAVBaseAttributeMap\@\@PEBVListTag\@\@\@Z
     */
    MCAPI static void loadAttributes(class BaseAttributeMap *, class ListTag const *);
    /**
     * @symbol  ?saveAttributes\@SharedAttributes\@\@SA?AV?$unique_ptr\@VListTag\@\@U?$default_delete\@VListTag\@\@\@std\@\@\@std\@\@PEBVBaseAttributeMap\@\@\@Z
     */
    MCAPI static std::unique_ptr<class ListTag> saveAttributes(class BaseAttributeMap const *);

//private:
    /**
     * @symbol  ?_legacyGetInstance\@SharedAttributes\@\@CAPEAVAttributeInstance\@\@AEAVBaseAttributeMap\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class AttributeInstance * _legacyGetInstance(class BaseAttributeMap &, std::string const &);
    /**
     * @symbol  ?_legacyGetName\@SharedAttributes\@\@CAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI static std::string const & _legacyGetName(std::string const &);
    /**
     * @symbol  ?_loadAttribute\@SharedAttributes\@\@CAXAEAVAttributeInstance\@\@PEBVCompoundTag\@\@\@Z
     */
    MCAPI static void _loadAttribute(class AttributeInstance &, class CompoundTag const *);
    /**
     * @symbol  ?_saveAttribute\@SharedAttributes\@\@CA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBVAttributeInstance\@\@\@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> _saveAttribute(class AttributeInstance const &);
    /**
     * @symbol  ?_saveAttributeModifier\@SharedAttributes\@\@CA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBVAttributeModifier\@\@\@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> _saveAttributeModifier(class AttributeModifier const &);

private:

};