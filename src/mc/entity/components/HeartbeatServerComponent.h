#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HeartbeatServerComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEARTBEATSERVERCOMPONENT
public:
    HeartbeatServerComponent& operator=(HeartbeatServerComponent const&) = delete;
    HeartbeatServerComponent(HeartbeatServerComponent const&)            = delete;
    HeartbeatServerComponent()                                           = delete;
#endif

public:
    /**
     * @symbol ??0HeartbeatServerComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI HeartbeatServerComponent(class HeartbeatServerComponent&&);
    /**
     * @symbol ??1HeartbeatServerComponent\@\@QEAA\@XZ
     */
    MCAPI ~HeartbeatServerComponent();
};
