/**
 * @file  MC/BehaviorTreeGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1229118351
     * @symbol ??0BehaviorTreeGroup@@QEAA@AEAVResourcePackManager@@AEAVBehaviorFactory@@@Z
     */
    MCAPI BehaviorTreeGroup(class ResourcePackManager &, class BehaviorFactory &);
    /**
     * @hash   -965662861
     * @symbol ?tryGetDefinition@BehaviorTreeGroup@@QEAA?AVBehaviorTreeDefinitionPtr@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class BehaviorTreeDefinitionPtr tryGetDefinition(std::string const &);
    /**
     * @hash   80035851
     * @symbol ??1BehaviorTreeGroup@@QEAA@XZ
     */
    MCAPI ~BehaviorTreeGroup();

//private:
    /**
     * @hash   1490982595
     * @symbol ?_addRef@BehaviorTreeGroup@@AEAAXAEAVBehaviorTreeDefinitionPtr@@@Z
     */
    MCAPI void _addRef(class BehaviorTreeDefinitionPtr &);
    /**
     * @hash   1480697684
     * @symbol ?_removeRef@BehaviorTreeGroup@@AEAAXAEAVBehaviorTreeDefinitionPtr@@@Z
     */
    MCAPI void _removeRef(class BehaviorTreeDefinitionPtr &);

private:

};