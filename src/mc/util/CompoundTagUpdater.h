#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundTagUpdater {

public:
    // prevent constructor by default
    CompoundTagUpdater& operator=(CompoundTagUpdater const&) = delete;
    CompoundTagUpdater(CompoundTagUpdater const&)            = delete;
    CompoundTagUpdater()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?update\@CompoundTagUpdater\@\@QEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool update(class CompoundTag&) const;
    /**
     * @symbol ??1CompoundTagUpdater\@\@QEAA\@XZ
     */
    MCAPI ~CompoundTagUpdater();
    // NOLINTEND
};
