#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorTreeDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEHAVIORTREEDEFINITION
public:
    BehaviorTreeDefinition& operator=(BehaviorTreeDefinition const&) = delete;
    BehaviorTreeDefinition(BehaviorTreeDefinition const&)            = delete;
    BehaviorTreeDefinition()                                         = delete;
#endif

public:
    /**
     * @symbol ?getRoot\@BehaviorTreeDefinition\@\@QEBAPEBVBehaviorDefinition\@\@XZ
     */
    MCAPI class BehaviorDefinition const* getRoot() const;
};
