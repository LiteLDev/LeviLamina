#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DirtyTicksCounter {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRTYTICKSCOUNTER
public:
    DirtyTicksCounter& operator=(DirtyTicksCounter const&) = delete;
    DirtyTicksCounter(DirtyTicksCounter const&)            = delete;
#endif

public:
    /**
     * @symbol ??0DirtyTicksCounter\@\@QEAA\@XZ
     */
    MCAPI DirtyTicksCounter();
};
