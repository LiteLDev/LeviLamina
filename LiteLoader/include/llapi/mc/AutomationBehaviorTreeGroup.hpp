/**
 * @file  AutomationBehaviorTreeGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class AutomationBehaviorTreeGroup {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AUTOMATIONBEHAVIORTREEGROUP
public:
    class AutomationBehaviorTreeGroup& operator=(class AutomationBehaviorTreeGroup const &) = delete;
    AutomationBehaviorTreeGroup(class AutomationBehaviorTreeGroup const &) = delete;
    AutomationBehaviorTreeGroup() = delete;
#endif

public:
    /**
     * @symbol ??0AutomationBehaviorTreeGroup\@\@QEAA\@AEAVResourcePackManager\@\@AEAVBehaviorFactory\@\@\@Z
     */
    MCAPI AutomationBehaviorTreeGroup(class ResourcePackManager &, class BehaviorFactory &);
    /**
     * @symbol ?tryGetDefinition\@AutomationBehaviorTreeGroup\@\@QEAA?AVBehaviorTreeDefinitionPtr\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class BehaviorTreeDefinitionPtr tryGetDefinition(std::string const &);
    /**
     * @symbol ??1AutomationBehaviorTreeGroup\@\@QEAA\@XZ
     */
    MCAPI ~AutomationBehaviorTreeGroup();

//private:
    /**
     * @symbol ?_addRef\@AutomationBehaviorTreeGroup\@\@AEAAXAEAVBehaviorTreeDefinitionPtr\@\@\@Z
     */
    MCAPI void _addRef(class BehaviorTreeDefinitionPtr &);
    /**
     * @symbol ?_removeRef\@AutomationBehaviorTreeGroup\@\@AEAAXAEAVBehaviorTreeDefinitionPtr\@\@\@Z
     */
    MCAPI void _removeRef(class BehaviorTreeDefinitionPtr &);

private:

};
