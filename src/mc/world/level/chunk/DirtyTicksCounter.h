#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DirtyTicksCounter {

public:
    // prevent constructor by default
    DirtyTicksCounter& operator=(DirtyTicksCounter const&) = delete;
    DirtyTicksCounter(DirtyTicksCounter const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0DirtyTicksCounter\@\@QEAA\@XZ
     */
    MCAPI DirtyTicksCounter();
    // NOLINTEND
};
