#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExperimentStorage {

public:
    // prevent constructor by default
    ExperimentStorage(ExperimentStorage const&) = delete;
    ExperimentStorage()                         = delete;

public:
    /**
     * @symbol ?isAnyToggleEnabled\@ExperimentStorage\@\@QEBA_NXZ
     */
    MCAPI bool isAnyToggleEnabled() const; // NOLINT
    /**
     * @symbol ??4ExperimentStorage\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ExperimentStorage& operator=(class ExperimentStorage const&); // NOLINT
    /**
     * @symbol ??1ExperimentStorage\@\@QEAA\@XZ
     */
    MCAPI ~ExperimentStorage(); // NOLINT
};
