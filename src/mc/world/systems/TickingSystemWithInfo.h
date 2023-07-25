#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TickingSystemWithInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGSYSTEMWITHINFO
public:
    TickingSystemWithInfo& operator=(TickingSystemWithInfo const&) = delete;
    TickingSystemWithInfo(TickingSystemWithInfo const&)            = delete;
    TickingSystemWithInfo()                                        = delete;
#endif

public:
    /**
     * @symbol ??0TickingSystemWithInfo\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI TickingSystemWithInfo(struct TickingSystemWithInfo&&);
    /**
     * @symbol ??1TickingSystemWithInfo\@\@QEAA\@XZ
     */
    MCAPI ~TickingSystemWithInfo();
};
