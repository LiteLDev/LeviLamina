#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Trade {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADE
public:
    Trade& operator=(Trade const&) = delete;
    Trade(Trade const&)            = delete;
    Trade()                        = delete;
#endif

public:
    /**
     * @symbol ??4Trade\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct Trade& operator=(struct Trade&&);
    /**
     * @symbol ??1Trade\@\@QEAA\@XZ
     */
    MCAPI ~Trade();
};
