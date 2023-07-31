#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseGoalDefinition {

public:
    // prevent constructor by default
    BaseGoalDefinition& operator=(BaseGoalDefinition const&) = delete;
    BaseGoalDefinition(BaseGoalDefinition const&)            = delete;
    BaseGoalDefinition()                                     = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASEGOALDEFINITION
    /**
     * @symbol ?validate\@BaseGoalDefinition\@\@UEBA_NAEAVMob\@\@\@Z
     */
    MCVAPI bool validate(class Mob&) const;
    /**
     * @symbol ?validateMobType\@BaseGoalDefinition\@\@UEBA_NAEAVMob\@\@\@Z
     */
    MCVAPI bool validateMobType(class Mob&) const;
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseGoalDefinition();
#endif
    /**
     * @symbol ?initialize\@BaseGoalDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class Goal&) const;
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?mControlFlagMap\@BaseGoalDefinition\@\@0V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HU?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::unordered_map<std::string, int> mControlFlagMap;
    // NOLINTEND
};
