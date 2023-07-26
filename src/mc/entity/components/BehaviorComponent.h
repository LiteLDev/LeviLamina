#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorComponent {

public:
    // prevent constructor by default
    BehaviorComponent& operator=(BehaviorComponent const&) = delete;
    BehaviorComponent(BehaviorComponent const&)            = delete;

public:
    /**
     * @symbol ??0BehaviorComponent\@\@QEAA\@XZ
     */
    MCAPI BehaviorComponent(); // NOLINT
    /**
     * @symbol ??0BehaviorComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI BehaviorComponent(class BehaviorComponent&&); // NOLINT
    /**
     * @symbol ??4BehaviorComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class BehaviorComponent& operator=(class BehaviorComponent&&); // NOLINT
    /**
     * @symbol ??1BehaviorComponent\@\@QEAA\@XZ
     */
    MCAPI ~BehaviorComponent(); // NOLINT
};
