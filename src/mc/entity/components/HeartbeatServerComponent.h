#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HeartbeatServerComponent {

public:
    // prevent constructor by default
    HeartbeatServerComponent& operator=(HeartbeatServerComponent const&) = delete;
    HeartbeatServerComponent(HeartbeatServerComponent const&)            = delete;
    HeartbeatServerComponent()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0HeartbeatServerComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI HeartbeatServerComponent(class HeartbeatServerComponent&&);
    /**
     * @symbol ??1HeartbeatServerComponent\@\@QEAA\@XZ
     */
    MCAPI ~HeartbeatServerComponent();
    // NOLINTEND
};
