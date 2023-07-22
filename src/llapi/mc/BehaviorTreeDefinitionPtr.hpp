/**
 * @file  BehaviorTreeDefinitionPtr.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BehaviorTreeDefinitionPtr.
 *
 */
class BehaviorTreeDefinitionPtr {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
public:
    /**
     * @symbol  ??0BehaviorTreeDefinitionPtr\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI BehaviorTreeDefinitionPtr(class BehaviorTreeDefinitionPtr const &);
    /**
     * @symbol  ??0BehaviorTreeDefinitionPtr\@\@QEAA\@AEAVBehaviorTreeGroup\@\@AEAVBehaviorTreeDefinition\@\@\@Z
     */
    MCAPI BehaviorTreeDefinitionPtr(class BehaviorTreeGroup &, class BehaviorTreeDefinition &);
    /**
     * @symbol  ??0BehaviorTreeDefinitionPtr\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI BehaviorTreeDefinitionPtr(class BehaviorTreeDefinitionPtr &&);
    /**
     * @symbol  ??0BehaviorTreeDefinitionPtr\@\@QEAA\@XZ
     */
    MCAPI BehaviorTreeDefinitionPtr();
    /**
     * @symbol  ??4BehaviorTreeDefinitionPtr\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class BehaviorTreeDefinitionPtr & operator=(class BehaviorTreeDefinitionPtr const &);
    /**
     * @symbol  ??4BehaviorTreeDefinitionPtr\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class BehaviorTreeDefinitionPtr & operator=(class BehaviorTreeDefinitionPtr &&);
    /**
     * @symbol  ??1BehaviorTreeDefinitionPtr\@\@QEAA\@XZ
     */
    MCAPI ~BehaviorTreeDefinitionPtr();
    /**
     * @symbol  ?NONE\@BehaviorTreeDefinitionPtr\@\@2V1\@B
     */
    MCAPI static class BehaviorTreeDefinitionPtr const NONE;

};