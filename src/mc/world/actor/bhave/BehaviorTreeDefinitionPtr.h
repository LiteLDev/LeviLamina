#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorTreeDefinitionPtr {

public:
    // prevent constructor by default
    BehaviorTreeDefinitionPtr& operator=(BehaviorTreeDefinitionPtr const&) = delete;

public:
    /**
     * @symbol ??0BehaviorTreeDefinitionPtr\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI BehaviorTreeDefinitionPtr(class BehaviorTreeDefinitionPtr&&); // NOLINT
    /**
     * @symbol
     * ??0BehaviorTreeDefinitionPtr\@\@QEAA\@AEAVAutomationBehaviorTreeGroup\@\@AEAVBehaviorTreeDefinition\@\@\@Z
     */
    MCAPI BehaviorTreeDefinitionPtr(class AutomationBehaviorTreeGroup&, class BehaviorTreeDefinition&); // NOLINT
    /**
     * @symbol ??0BehaviorTreeDefinitionPtr\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI BehaviorTreeDefinitionPtr(class BehaviorTreeDefinitionPtr const&); // NOLINT
    /**
     * @symbol ??0BehaviorTreeDefinitionPtr\@\@QEAA\@XZ
     */
    MCAPI BehaviorTreeDefinitionPtr(); // NOLINT
    /**
     * @symbol ??4BehaviorTreeDefinitionPtr\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class BehaviorTreeDefinitionPtr& operator=(class BehaviorTreeDefinitionPtr&&); // NOLINT
    /**
     * @symbol ??1BehaviorTreeDefinitionPtr\@\@QEAA\@XZ
     */
    MCAPI ~BehaviorTreeDefinitionPtr(); // NOLINT
    /**
     * @symbol ?NONE\@BehaviorTreeDefinitionPtr\@\@2V1\@B
     */
    MCAPI static class BehaviorTreeDefinitionPtr const NONE; // NOLINT
};
