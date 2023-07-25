#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundTagUpdater {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDTAGUPDATER
public:
    CompoundTagUpdater& operator=(CompoundTagUpdater const&) = delete;
    CompoundTagUpdater(CompoundTagUpdater const&)            = delete;
    CompoundTagUpdater()                                     = delete;
#endif

public:
    /**
     * @symbol ?update\@CompoundTagUpdater\@\@QEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCAPI bool update(class CompoundTag&) const;
    /**
     * @symbol ??1CompoundTagUpdater\@\@QEAA\@XZ
     */
    MCAPI ~CompoundTagUpdater();
};
