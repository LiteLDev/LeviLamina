#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEHAVIORCOMPONENT
public:
    BehaviorComponent& operator=(BehaviorComponent const&) = delete;
    BehaviorComponent(BehaviorComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0BehaviorComponent\@\@QEAA\@XZ
     */
    MCAPI BehaviorComponent();
    /**
     * @symbol ??0BehaviorComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI BehaviorComponent(class BehaviorComponent&&);
    /**
     * @symbol ??4BehaviorComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class BehaviorComponent& operator=(class BehaviorComponent&&);
    /**
     * @symbol ??1BehaviorComponent\@\@QEAA\@XZ
     */
    MCAPI ~BehaviorComponent();
};
