#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExperimentStorage {
public:
    std::vector<bool> mExperimentData;
    std::vector<bool> mDeprecatedData;
    bool              mExperimentsEverToggled;

    // prevent constructor by default
    ExperimentStorage(ExperimentStorage const&);
    ExperimentStorage();

public:
    // NOLINTBEGIN
    // symbol: ?isAnyToggleEnabled@ExperimentStorage@@QEBA_NXZ
    MCAPI bool isAnyToggleEnabled() const;

    // symbol: ??4ExperimentStorage@@QEAAAEAV0@AEBV0@@Z
    MCAPI class ExperimentStorage& operator=(class ExperimentStorage const&);

    // symbol: ?wereAnyExperimentsEverToggled@ExperimentStorage@@QEBA_NXZ
    MCAPI bool wereAnyExperimentsEverToggled() const;

    // symbol: ??1ExperimentStorage@@QEAA@XZ
    MCAPI ~ExperimentStorage();

    // NOLINTEND
};
