/**
 * @file  BehaviorTreeGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BehaviorTreeGroup.
 *
 */
class BehaviorTreeGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEHAVIORTREEGROUP
public:
    class BehaviorTreeGroup& operator=(class BehaviorTreeGroup const &) = delete;
    BehaviorTreeGroup(class BehaviorTreeGroup const &) = delete;
    BehaviorTreeGroup() = delete;
#endif

public:
    /**
     * @symbol  ??0BehaviorTreeGroup\@\@QEAA\@AEAVResourcePackManager\@\@AEAVBehaviorFactory\@\@\@Z
     */
    MCAPI BehaviorTreeGroup(class ResourcePackManager &, class BehaviorFactory &);
    /**
     * @symbol  ?tryGetDefinition\@BehaviorTreeGroup\@\@QEAA?AVBehaviorTreeDefinitionPtr\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class BehaviorTreeDefinitionPtr tryGetDefinition(std::string const &);
    /**
     * @symbol  ??1BehaviorTreeGroup\@\@QEAA\@XZ
     */
    MCAPI ~BehaviorTreeGroup();

//private:
    /**
     * @symbol  ?_addRef\@BehaviorTreeGroup\@\@AEAAXAEAVBehaviorTreeDefinitionPtr\@\@\@Z
     */
    MCAPI void _addRef(class BehaviorTreeDefinitionPtr &);
    /**
     * @symbol  ?_removeRef\@BehaviorTreeGroup\@\@AEAAXAEAVBehaviorTreeDefinitionPtr\@\@\@Z
     */
    MCAPI void _removeRef(class BehaviorTreeDefinitionPtr &);

private:

};