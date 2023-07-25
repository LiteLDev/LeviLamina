#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TeleportTarget {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELEPORTTARGET
public:
    TeleportTarget& operator=(TeleportTarget const&) = delete;
    TeleportTarget(TeleportTarget const&)            = delete;
    TeleportTarget()                                 = delete;
#endif

public:
    /**
     * @symbol ??1TeleportTarget\@\@QEAA\@XZ
     */
    MCAPI ~TeleportTarget();
};
