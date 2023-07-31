#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorTreeDefinitionPtr {

public:
    // prevent constructor by default
    BehaviorTreeDefinitionPtr& operator=(BehaviorTreeDefinitionPtr const&) = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0BehaviorTreeDefinitionPtr\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI BehaviorTreeDefinitionPtr(class BehaviorTreeDefinitionPtr&&);
    /**
     * @symbol
     * ??0BehaviorTreeDefinitionPtr\@\@QEAA\@AEAVAutomationBehaviorTreeGroup\@\@AEAVBehaviorTreeDefinition\@\@\@Z
     */
    MCAPI BehaviorTreeDefinitionPtr(class AutomationBehaviorTreeGroup&, class BehaviorTreeDefinition&);
    /**
     * @symbol ??0BehaviorTreeDefinitionPtr\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI BehaviorTreeDefinitionPtr(class BehaviorTreeDefinitionPtr const&);
    /**
     * @symbol ??0BehaviorTreeDefinitionPtr\@\@QEAA\@XZ
     */
    MCAPI BehaviorTreeDefinitionPtr();
    /**
     * @symbol ??4BehaviorTreeDefinitionPtr\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class BehaviorTreeDefinitionPtr& operator=(class BehaviorTreeDefinitionPtr&&);
    /**
     * @symbol ??1BehaviorTreeDefinitionPtr\@\@QEAA\@XZ
     */
    MCAPI ~BehaviorTreeDefinitionPtr();
    /**
     * @symbol ?NONE\@BehaviorTreeDefinitionPtr\@\@2V1\@B
     */
    MCAPI static class BehaviorTreeDefinitionPtr const NONE;
    // NOLINTEND
};
