#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorTreeDefinition {

public:
    // prevent constructor by default
    BehaviorTreeDefinition& operator=(BehaviorTreeDefinition const&) = delete;
    BehaviorTreeDefinition(BehaviorTreeDefinition const&)            = delete;
    BehaviorTreeDefinition()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getRoot\@BehaviorTreeDefinition\@\@QEBAPEBVBehaviorDefinition\@\@XZ
     */
    MCAPI class BehaviorDefinition const* getRoot() const;
    // NOLINTEND
};
