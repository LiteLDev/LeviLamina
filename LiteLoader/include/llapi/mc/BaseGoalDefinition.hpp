/**
 * @file  BaseGoalDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BaseGoalDefinition.
 *
 */
class BaseGoalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASEGOALDEFINITION
public:
    class BaseGoalDefinition& operator=(class BaseGoalDefinition const &) = delete;
    BaseGoalDefinition(class BaseGoalDefinition const &) = delete;
    BaseGoalDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASEGOALDEFINITION
    /**
     * @symbol  ?validate\@BaseGoalDefinition\@\@UEBA_NAEAVMob\@\@\@Z
     */
    MCVAPI bool validate(class Mob &) const;
    /**
     * @symbol  ?validateMobType\@BaseGoalDefinition\@\@UEBA_NAEAVMob\@\@\@Z
     */
    MCVAPI bool validateMobType(class Mob &) const;
#endif
    /**
     * @symbol  ?initialize\@BaseGoalDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class Goal &) const;

//private:

private:
    /**
     * @symbol  ?mControlFlagMap\@BaseGoalDefinition\@\@0V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HU?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<std::string, int, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, int>>> mControlFlagMap;

};